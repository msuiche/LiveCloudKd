/*++
	Microsoft Hyper-V Virtual Machine Physical Memory Dumper
	Copyright (C) Matt Suiche. All rights reserved.

Module Name:

	- dump.c

Abstract:

	- This header file contains definition used by LiveCloudKd (2010) and open-sourced in December 2018 after
	collaborating with Arthur Khudyaev (@gerhart_x) to revive the project.

	More information can be found on the original repository: https://github.com/comaeio/LiveCloudKd

	Original 2010 blogpost: https://blogs.technet.microsoft.com/markrussinovich/2010/10/09/livekd-for-virtual-machine-debugging/

Environment:

	- User mode

Revision History:

	- Arthur Khudyaev (@gerhart_x) - 18-Apr-2019 - Add additional methods (using Microsoft winhv.sys and own hvmm.sys driver) for reading guest memory
	- Arthur Khudyaev (@gerhart_x) - 20-Feb-2019 - Migrate parto of code to LiveCloudKd plugin
	- Arthur Khudyaev (@gerhart_x) - 26-Jan-2019 - Migration to MemProcFS/LeechCore
	- Matthieu Suiche (@msuiche) 11-Dec-2018 - Open-sourced LiveCloudKd in December 2018 on GitHub
	- Arthur Khudyaev (@gerhart_x) - 28-Oct-2018 - Add partial Windows 10 support
	- Matthieu Suiche (@msuiche) 09-Dec-2010 - Initial version from LiveCloudKd and presented at BlueHat 2010

--*/

#include "hvdd.h"

READ_MEMORY_METHOD g_MemoryReadInterfaceType = ReadInterfaceUnsupported;

BOOLEAN
DumpVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ LPCWSTR DestinationFile
)
{
    HANDLE FileHandle = INVALID_HANDLE_VALUE;

    PVOID Buffer = NULL;

    ULONG64 Index;
    BOOLEAN Ret;

    ULONG64 lPageCountTotal;
	GPAR_BLOCK_INFO BlockIndexInfo = { 0 };

	lPageCountTotal = PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage;

    if (CreateDestinationFile(DestinationFile, &FileHandle) == FALSE) goto Exit;

    Buffer = malloc(BLOCK_SIZE);
    if (Buffer == NULL) goto Exit;

    White(L"PageCountTotal = 0x%x\n", lPageCountTotal);
    Green(L"\n"
          L"   Total Size: %d MB\n", (ULONG)(((ULONG)lPageCountTotal * PAGE_SIZE) / (1024 * 1024)));
    White(L"   Starting... \n");

    for (Index = 0;
         Index < (ULONG)lPageCountTotal;
         Index += (BLOCK_SIZE / PAGE_SIZE))
    {
		if (Index % (10 * 1024) == 0) {
			printf("%I64d MBs... \n", (Index * PAGE_SIZE) / (1024 * 1024));
		}


#ifdef USE_VIDDLL_FUNCTIONS
		BlockIndexInfo.PartitionHandle = PartitionEntry->PartitionHandle;
        BlockIndexInfo.GPA = Index;

        Ret = SdkHvmmGetMemoryBlockInfoFromGPA(&BlockIndexInfo);
        if (Ret == FALSE) {
            Red(L"SdkHvmmGetMemoryBlockInfoFromGPA false\n");
        }

        for (ULONG64 i = 1; i < 0x500; i++)
        {
            if (g_VidDll.VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
                (HANDLE)i,
                BlockIndexInfo.MemoryBlockPageIndex,
                (BLOCK_SIZE / PAGE_SIZE),
                Buffer,
                BLOCK_SIZE))
                { 
                    Ret = TRUE;                 
                    break;
                }
        }
#else
		Ret = SdkHvmmReadPhysicalMemory(PartitionEntry,
			Index,
			BLOCK_SIZE,
			Buffer,	
			g_MemoryReadInterfaceType
		);
#endif
		if (Ret == TRUE) {
			WriteFileSynchronous(FileHandle, Buffer, BLOCK_SIZE);
		}
		else
		{
			RtlZeroMemory(Buffer, BLOCK_SIZE);
			WriteFileSynchronous(FileHandle, Buffer, BLOCK_SIZE);
		}
		//printf("Index = 0x%I64x\n", Index);
	}

    Green(L"Done.\n");

    Ret = TRUE;
Exit:
    if (FileHandle != INVALID_HANDLE_VALUE) CloseHandle(FileHandle);

    return Ret;
}

BOOLEAN
DumpCrashVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ LPCWSTR DestinationFile
)
{
ULONG HeaderSize;
PVOID Header = NULL;

HANDLE FileHandle = INVALID_HANDLE_VALUE;

ULONG64 PageCountTotal;
ULONG Index;

PVOID Buffer = NULL;

PHYSICAL_ADDRESS ContextPa;
ULONG64 ContextVa;

BOOLEAN Ret = FALSE;

    if (DumpFillHeader(PartitionEntry, &Header, &HeaderSize) == FALSE) goto Exit;

    Buffer = malloc(BLOCK_SIZE);
    if (Buffer == NULL) goto Exit;

    if (CreateDestinationFile(DestinationFile, &FileHandle) == FALSE) goto Exit;

    if (WriteFileSynchronous(FileHandle, Header, HeaderSize) == FALSE) goto Exit;

	PageCountTotal = PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage;
    PageCountTotal += (HeaderSize / PAGE_SIZE);

    Green(L"\n"
          L"   Total Size: %d MB\n", (ULONG)((PageCountTotal * PAGE_SIZE) / (1024 * 1024)));
    White(L"   Starting... ");

    if (SdkGetMachineType(PartitionEntry) == MACHINE_X86)
    {
        ContextVa = 0;
        if (SdkMmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
                                 &ContextVa, sizeof(ULONG)) == FALSE) goto Exit;

        //
        // If Win7/Win2008 R2 and above.
        //
        if ((PartitionEntry->KiExcaliburData.NtBuildNumber & 0xFFFF) > 7000)
        {
            ContextVa += (X86_NT61_KPROCESSOR_STATE_OFFSET + X86_CONTEXT_OFFSET);
        }
        else
        {
            ContextVa += (X86_KPROCESSOR_STATE_OFFSET + X86_CONTEXT_OFFSET);
        }
    }
    else
    {
        //ContextVa = 0;
        //if (SdkMmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
        //                         &ContextVa, sizeof(ULONG64)) == FALSE) goto Exit;

	/*	ContextVa = ContextVa + PartitionEntry->KiExcaliburData.OffsetPrcbProcStateContext - PartitionEntry->KiExcaliburData.OffsetPrcbProcStateSpecialReg;*/
		ContextVa = (ULONG64) PartitionEntry->KiExcaliburData.Context;
    }

	//ContextVa = (ULONG64)PartitionEntry->KiExcaliburData.Context;
    ContextPa = SdkMmGetPhysicalAddress(PartitionEntry, ContextVa);

    for (Index = 0;
         Index < PageCountTotal;
         Index += (BLOCK_SIZE / PAGE_SIZE))
    {
		
#ifdef USE_VIDDLL_FUNCTIONS
		Ret = g_VidDll.VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
			//MemoryBlockHandle,
			(HANDLE)1,
			Index,
			(BLOCK_SIZE / PAGE_SIZE),
			Buffer,
			BLOCK_SIZE);
#else
		Ret = SdkHvmmReadPhysicalMemory(PartitionEntry,
			Index,
			BLOCK_SIZE,
			Buffer,
			g_MemoryReadInterfaceType
		);
#endif
		
		if (Ret)
        {
            if (((ContextPa.QuadPart / PAGE_SIZE) >= Index) &&
                ((ContextPa.QuadPart / PAGE_SIZE) < (Index + (BLOCK_SIZE / PAGE_SIZE))))
            {
                PUCHAR C;
                PX86_CONTEXT Context32;
                PX64_CONTEXT Context64;

                C = (PUCHAR)Buffer + (((ContextPa.QuadPart / PAGE_SIZE) - Index)  * PAGE_SIZE);
                C += ContextPa.LowPart & (PAGE_SIZE - 1);
                if (SdkGetMachineType(PartitionEntry) == MACHINE_X86)
                {
                    Context32 = (PX86_CONTEXT)C;
                    Context32->SegCs = KGDT_R0_CODE;
                    Context32->SegDs = (KGDT_R3_DATA | RPL_MASK);
                    Context32->SegEs = (KGDT_R3_DATA | RPL_MASK);
                    Context32->SegFs = KGDT_R0_PCR;
                    Context32->SegGs = 0;
                    Context32->SegSs = KGDT_R0_DATA;
                }
                else
                {
                    Context64 = (PX64_CONTEXT)C;
                    Context64->SegCs = KGDT64_R0_CODE;
                    Context64->SegDs = (KGDT64_R3_DATA | RPL_MASK);
                    Context64->SegEs = (KGDT64_R3_DATA | RPL_MASK);
                    Context64->SegFs = (KGDT64_R3_CMTEB | RPL_MASK);
                    Context64->SegGs = 0;
                    Context64->SegSs = KGDT64_R0_DATA;
                }
            }
            WriteFileSynchronous(FileHandle, Buffer, BLOCK_SIZE);
        }
        else
        {
            RtlZeroMemory(Buffer, BLOCK_SIZE);
            WriteFileSynchronous(FileHandle, Buffer, BLOCK_SIZE);
        }
    }

    Green(L"Done.\n");

    Ret = TRUE;

Exit:
    if (Buffer) free(Buffer);
    if (Header) free(Header);

    if (FileHandle != INVALID_HANDLE_VALUE) CloseHandle(FileHandle);

    return Ret;
}

BOOLEAN
DumpLiveVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry
)
{
    ULONG HeaderSize;
    PVOID Header = NULL;

    HANDLE HvddFile = NULL;

    ULONG64 PageCountTotal = 0;

    PVOID Buffer = NULL;

    BOOLEAN Ret = FALSE;

    USHORT Color;
    HANDLE Handle;

    WCHAR WindowsDir[MAX_PATH];
    WCHAR CrashFilePath[MAX_PATH];

    PHYSICAL_ADDRESS ContextPa;
    ULONG64 ContextVa;
    PKDDEBUGGER_DATA64 pTmpKdBlock;

    //Buffer = malloc(BLOCK_SIZE);
    //if (Buffer == NULL) goto Exit;

	if (UseEXDi == FALSE)
	{
		GetWindowsDirectory(WindowsDir, sizeof(WindowsDir) / sizeof(WindowsDir[0]));
		swprintf_s(CrashFilePath, sizeof(CrashFilePath) / sizeof(CrashFilePath[0]),
			L"%s\\hvdd.dmp", WindowsDir);

		HvddFile = CreateFile(CrashFilePath,
			GENERIC_WRITE,
			FILE_SHARE_READ,
			NULL,
			CREATE_ALWAYS,
			FILE_ATTRIBUTE_HIDDEN | FILE_FLAG_NO_BUFFERING,
			NULL
		);

		if (HvddFile == INVALID_HANDLE_VALUE) goto Exit;
		
		if (DumpFillHeader(PartitionEntry, &Header, &HeaderSize) == FALSE) goto Exit;
		
		FunctionTable._LoadLibrary = LoadLibraryW;
		FunctionTable._GetProcAddress = GetProcAddress;
		FunctionTable._MessageBoxW = MessageBoxW;
		FunctionTable._MessageBoxA = MessageBoxA;
		FunctionTable._CreateFileW = CreateFileW;
		FunctionTable._SetFilePointer = SetFilePointer;
		FunctionTable._VirtualAlloc = VirtualAlloc;
		FunctionTable._VirtualFree = VirtualFree;
		FunctionTable._VirtualProtect = VirtualProtect;
		FunctionTable._ReadFile = ReadFile;
		FunctionTable._VidReadMemoryBlockPageRange = g_VidDll.VidReadMemoryBlockPageRange;
		FunctionTable._VidWriteMemoryBlockPageRange = g_VidDll.VidWriteMemoryBlockPageRange;
		FunctionTable._SdkHvmmInternalReadMemory = SdkHvmmInternalReadMemory;
		FunctionTable._SdkHvmmHvReadGPA = SdkHvmmHvReadGPA;
		FunctionTable._SdkHvmmGetMemoryBlockInfoFromGPA = SdkHvmmGetMemoryBlockInfoFromGPA;
		FunctionTable._SdkHvmmReadPhysicalMemory = SdkHvmmReadPhysicalMemory;
		FunctionTable._SdkHvmmRestorePsGetCurrentProcess = SdkHvmmRestorePsGetCurrentProcess;
		FunctionTable._SdkHvmmPatchPsGetCurrentProcess = SdkHvmmPatchPsGetCurrentProcess;
		FunctionTable._CreateFileMappingA = CreateFileMappingA;
		FunctionTable._CreateFileMappingW = CreateFileMappingW;
		FunctionTable._MapViewOfFile = MapViewOfFile;
		FunctionTable._UnmapViewOfFile = UnmapViewOfFile;
		FunctionTable._SetLastError = SetLastError;

		FunctionTable.CrashDumpHandle = INVALID_HANDLE_VALUE;
		FunctionTable.HeaderSize = HeaderSize;
		FunctionTable.Header = Header;
		FunctionTable.MemoryHandle = NULL;
		FunctionTable.ReadMemoryMethod = g_MemoryReadInterfaceType;
		FunctionTable.PartitionHandle = PartitionEntry->PartitionHandle;
		FunctionTable.PartitionHandleConst = PartitionEntry->PartitionHandle;
		FunctionTable.FileSize.QuadPart = PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage * PAGE_SIZE + HeaderSize;
		FunctionTable.PartitionId = PartitionEntry->VidVmInfo.PartitionId;
		RtlCopyMemory(&(FunctionTable.PartitionEntry), PartitionEntry,sizeof(HVDD_PARTITION));

		FunctionTable.KdDebuggerDataBlockPa = PartitionEntry->KiExcaliburData.KdDebuggerDataBlockPa;
		pTmpKdBlock = (PKDDEBUGGER_DATA64) PartitionEntry->KiExcaliburData.KdDebuggerDataBlockBlock;
		pTmpKdBlock->SavedContext = (ULONG64) PartitionEntry->KiExcaliburData.Context;
		RtlCopyMemory(FunctionTable.KdDebuggerDataBlockBlock, PartitionEntry->KiExcaliburData.KdDebuggerDataBlockBlock, KD_DEBUGGER_BLOCK_PAGE_SIZE);


		printf("FunctionTable.FileSize.QuadPart = 0x%llx\n", FunctionTable.FileSize.QuadPart);

		ContextVa = (ULONG64)PartitionEntry->KiExcaliburData.Context;
		//printf("FunctionTable.ContextVa 0x%llx \n", ContextVa);
		ContextPa = SdkMmGetPhysicalAddress(PartitionEntry, ContextVa);
		printf("FunctionTable.ContextPa 0x%I64X \n", ContextPa.QuadPart);
		//PartitionEntry->KiExcaliburData.Context = (PCONTEXT) ContextVa;

		FunctionTable.ContextPageIndex = (ContextPa.QuadPart / PAGE_SIZE);
		printf("FunctionTable.ContextPageIndex %llx \n", FunctionTable.ContextPageIndex);
		FunctionTable.ContextOffsetLow = (ContextPa.LowPart & (PAGE_SIZE - 1));
		printf("FunctionTable.ContextOffsetLow %x \n", FunctionTable.ContextOffsetLow);

		FunctionTable.MachineType = SdkGetMachineType(PartitionEntry);
		FunctionTable.IsDllLoad = FALSE;

		Handle = GetStdHandle(STD_OUTPUT_HANDLE);
		Color = GetConsoleTextAttribute(Handle);
		SetConsoleTextAttribute(Handle, 0xF);

		LaunchKd(CrashFilePath, PartitionEntry);
	}

	if (UseWinDbg == TRUE) {
		LaunchWinDbg(PartitionEntry);
	}
	if (UseWinDbgX == TRUE) {
		LaunchWinDbgX(PartitionEntry);
	}

    getchar();

    Ret = TRUE;

Exit:
    if (Buffer) free(Buffer);
    if (Header) free(Header);

    if (HvddFile != INVALID_HANDLE_VALUE) CloseHandle(HvddFile);

    DeleteFile(CrashFilePath);

    return TRUE;
}

BOOLEAN
DumpFillHeader(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ PVOID *Header,
	_In_ PULONG HeaderSize
)
{
BOOLEAN Ret = FALSE;

    if (SdkGetMachineType(PartitionEntry) == MACHINE_X86)
    {
        Red(L"MACHINE_X86 is not supported\n");
		Ret = FALSE;
    }
    else if (SdkGetMachineType(PartitionEntry) == MACHINE_AMD64)
    {
        *Header = DumpFillHeader64(PartitionEntry);
        *HeaderSize = sizeof(DUMP_HEADER64);
        if (*Header) Ret = TRUE;

    }

    return Ret;
}

PDUMP_HEADER64
DumpFillHeader64(
	_In_ PHVDD_PARTITION PartitionEntry
)
{
    PHYSICAL_MEMORY_DESCRIPTOR64 MmPhysicalMemoryBlock64;
    EXCEPTION_RECORD64 Exception64;
    PDUMP_HEADER64 Header64 = NULL;

    SYSTEMTIME SystemTime;

    ULONG i;

    PUCHAR Buffer = NULL;
    BOOLEAN Ret;

	PCONTEXT pContext = NULL;

    Header64 = (PDUMP_HEADER64)malloc(sizeof(DUMP_HEADER64));
    if (Header64 == NULL) goto Exit;

    for (i = 0; i < sizeof(DUMP_HEADER64) / sizeof(ULONG); i += 1)
    {
        ((PULONG)Header64)[i] = DUMP_SIGNATURE;
    }

    //
    // Initialize header.
    //
    Header64->Signature = DUMP_SIGNATURE;
    Header64->ValidDump = DUMP_VALID_DUMP64;
    Header64->DumpType = DUMP_TYPE_FULL;
    Header64->MachineImageType = IMAGE_FILE_MACHINE_AMD64;

    Header64->MinorVersion = PartitionEntry->KiExcaliburData.NtBuildNumber & 0xFFFF;
    Header64->MajorVersion = PartitionEntry->KiExcaliburData.NtBuildNumber >> 28; 

    Header64->DirectoryTableBase = PartitionEntry->KiExcaliburData.DirectoryTableBase;
    Header64->PfnDataBase = PartitionEntry->KiExcaliburData.MmPfnDatabase;
    Header64->PsLoadedModuleList = PartitionEntry->KiExcaliburData.PsLoadedModuleList;
    Header64->PsActiveProcessHead = PartitionEntry->KiExcaliburData.PsActiveProcessHead;
    Header64->NumberProcessors = PartitionEntry->KiExcaliburData.NumberProcessors;
    Header64->KdDebuggerDataBlock = PartitionEntry->KiExcaliburData.KdDebuggerDataBlock;

    Header64->BugCheckCode = 'MATT';
    Header64->BugCheckParameter1 = 0x1;
    Header64->BugCheckParameter2 = 0x2;
    Header64->BugCheckParameter3 = 0x3;
    Header64->BugCheckParameter4 = 0x4;

    RtlZeroMemory(Header64->VersionUser, sizeof(Header64->VersionUser));

    MmPhysicalMemoryBlock64.NumberOfPages = PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage;
    MmPhysicalMemoryBlock64.NumberOfRuns = 1;
    MmPhysicalMemoryBlock64.Run[0].BasePage = 0;
    MmPhysicalMemoryBlock64.Run[0].PageCount = PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage;

    RtlCopyMemory(&Header64->PhysicalMemoryBlock,
                  &MmPhysicalMemoryBlock64,
                  sizeof(PHYSICAL_MEMORY_DESCRIPTOR64));

    //
    // Exception record.
    //

    Exception64.ExceptionCode = STATUS_BREAKPOINT;
    Exception64.ExceptionRecord = 0;
    Exception64.NumberParameters = 0;
    Exception64.ExceptionFlags = EXCEPTION_NONCONTINUABLE;
    Exception64.ExceptionAddress = 0xDEADBABE;

    RtlCopyMemory(&Header64->ExceptionRecord,
                  &Exception64,
                  sizeof(EXCEPTION_RECORD64));

    GetSystemTime(&SystemTime);

    SystemTimeToFileTime(&SystemTime, &Header64->SystemTime);

    RtlZeroMemory(&Header64->RequiredDumpSpace, sizeof(LARGE_INTEGER));

	printf("KiExcaliburData.KiProcessorBlock 0x%llx \n", PartitionEntry->KiExcaliburData.KiProcessorBlock);

    //
    // BUGBUG: Safe int.
    //
    
    printf("FunctionTable.ContextVa 0x%llx \n", (ULONG64)PartitionEntry->KiExcaliburData.Context);

    Header64->RequiredDumpSpace.QuadPart = 
        (PartitionEntry->KiExcaliburData.MmMaximumPhysicalPage * PAGE_SIZE) + sizeof(DUMP_HEADER64);
	//printf("sizeof(DUMP_HEADER64) = 0x%zx\n", sizeof(DUMP_HEADER64)); // must be 1Mb according Windows Internals 6th

    //
    // BUGBUG: Fill me with a real context.
    //
    RtlZeroMemory(Header64->ContextRecord, sizeof(Header64->ContextRecord));

	//printf("sizeof(CONTEXT) = 0x%zx\n", sizeof(CONTEXT));

    Buffer = malloc(sizeof(CONTEXT));
    if (Buffer == NULL) {
        printf("malloc (CONTEXT) failed\n");
        return FALSE;
    } 

    Ret = SdkMmReadVirtualAddress(PartitionEntry,
        (ULONG64)PartitionEntry->KiExcaliburData.Context,
        Buffer,
		sizeof(CONTEXT));

    if (Ret == FALSE) {
        printf("Copy CONTEXT error\n");
        return FALSE;
    }

    RtlCopyMemory(Header64->ContextRecord,
        Buffer,
        sizeof(CONTEXT));

	pContext = (PCONTEXT) Header64->ContextRecord;

	if (pContext->SegCs != KGDT64_R0_CODE) pContext->SegCs = KGDT64_R0_CODE;
	if (pContext->SegDs != (KGDT64_R3_DATA | RPL_MASK)) pContext->SegDs = (KGDT64_R3_DATA | RPL_MASK);
	if (pContext->SegEs != (KGDT64_R3_DATA | RPL_MASK)) pContext->SegEs = (KGDT64_R3_DATA | RPL_MASK);
	if (pContext->SegFs != (KGDT64_R3_CMTEB | RPL_MASK)) pContext->SegFs = (KGDT64_R3_CMTEB | RPL_MASK);
	if (pContext->SegGs != 0) pContext->SegGs = 0;
	if (pContext->SegSs != KGDT64_R0_DATA) pContext->SegSs = KGDT64_R0_DATA;

    //fill  Header64->KdDebuggerDataBlock->SavedContext
    //Header64->KdDebuggerDataBlock->SavedContext = PartitionEntry->KiExcaliburData.Context;
    // need write to Guest memory during
 
    RtlZeroMemory(Header64->Comment, sizeof(Header64->Comment));
    strcpy_s(Header64->Comment, sizeof(Header64->Comment),
        DUMP_COMMENT_STRING);


Exit:
    free(Buffer);
    return Header64;
}