/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - dump.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#include "hvdd.h"

BOOL
DumpVirtualMachine(PHVDD_PARTITION PartitionEntry,
                   LPCWSTR DestinationFile)
{
    HANDLE FileHandle;

    PVOID Buffer;

    ULONG Index;
    BOOL Ret;

    MB_HANDLE MemoryBlockHandle;
    ULONG64 PageCountTotal;

    FileHandle = INVALID_HANDLE_VALUE;
    Buffer = NULL;

    if (CreateDestinationFile(DestinationFile, &FileHandle) == FALSE) goto Exit;

    Buffer = malloc(BLOCK_SIZE);
    if (Buffer == NULL) goto Exit;

    MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].MemoryHandle;
    PageCountTotal = PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].PageCountTotal;

    White(L"PageCountTotal = 0x%llx\n", PageCountTotal);
    Green(L"\n"
          L"   Total Size: %d MB\n", (ULONG)(((ULONG)PageCountTotal * PAGE_SIZE) / (1024 * 1024)));
    White(L"   Starting... ");

    for (Index = 0;
         Index < (ULONG)PageCountTotal;
         Index += (BLOCK_SIZE / PAGE_SIZE))
    {
        printf(L"Index = 0x%x\n", Index);
        if (VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
                                        MemoryBlockHandle,
                                        Index,
                                        (BLOCK_SIZE / PAGE_SIZE),
                                        Buffer,
                                        BLOCK_SIZE))
        {
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
    if (FileHandle != INVALID_HANDLE_VALUE) CloseHandle(FileHandle);

    return Ret;
}

BOOL
DumpCrashVirtualMachine(PHVDD_PARTITION PartitionEntry,
                        LPCWSTR DestinationFile)
{
ULONG HeaderSize;
PVOID Header;

HANDLE FileHandle;

MB_HANDLE MemoryBlockHandle;
ULONG64 PageCountTotal;
ULONG Index;

PVOID Buffer;

PHYSICAL_ADDRESS ContextPa;
ULONG64 ContextVa;

BOOL Ret;

    Buffer = NULL;
    Header = NULL;
    Ret = FALSE;
    FileHandle = INVALID_HANDLE_VALUE;

    if (DumpFillHeader(PartitionEntry, &Header, &HeaderSize) == FALSE) goto Exit;

    Buffer = malloc(BLOCK_SIZE);
    if (Buffer == NULL) goto Exit;

    if (CreateDestinationFile(DestinationFile, &FileHandle) == FALSE) goto Exit;

    if (WriteFileSynchronous(FileHandle, Header, HeaderSize) == FALSE) goto Exit;

    MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].MemoryHandle;
    PageCountTotal = PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].PageCountTotal;
    PageCountTotal += (HeaderSize / PAGE_SIZE);

    Green(L"\n"
          L"   Total Size: %d MB\n", (ULONG)((PageCountTotal * PAGE_SIZE) / (1024 * 1024)));
    White(L"   Starting... ");

    if (GetMachineType(PartitionEntry) == MACHINE_X86)
    {
        ContextVa = 0;
        if (MmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
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
        ContextVa = 0;
        if (MmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
                                 &ContextVa, sizeof(ULONG64)) == FALSE) goto Exit;

        ContextVa += (X64_KPROCESSOR_STATE_OFFSET + X64_CONTEXT_OFFSET);
    }

    ContextPa = MmGetPhysicalAddress(PartitionEntry, ContextVa);

    for (Index = 0;
         Index < PageCountTotal;
         Index += (BLOCK_SIZE / PAGE_SIZE))
    {
        if (VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
                                        MemoryBlockHandle,
                                        Index,
                                        (BLOCK_SIZE / PAGE_SIZE),
                                        Buffer,
                                        BLOCK_SIZE))
        {
            if (((ContextPa.QuadPart / PAGE_SIZE) >= Index) &&
                ((ContextPa.QuadPart / PAGE_SIZE) < (Index + (BLOCK_SIZE / PAGE_SIZE))))
            {
                PUCHAR C;
                PX86_CONTEXT Context32;
                PX64_CONTEXT Context64;

                C = (PUCHAR)Buffer + (((ContextPa.QuadPart / PAGE_SIZE) - Index)  * PAGE_SIZE);
                C += ContextPa.LowPart & (PAGE_SIZE - 1);
                if (GetMachineType(PartitionEntry) == MACHINE_X86)
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

BOOL
DumpLiveVirtualMachine(PHVDD_PARTITION PartitionEntry)
{
    ULONG HeaderSize;
    PVOID Header;

    HANDLE HvddFile = NULL;

    MB_HANDLE MemoryBlockHandle;
    ULONG64 PageCountTotal;

    PVOID Buffer;

    BOOL Ret;

    USHORT Color;
    HANDLE Handle;

    WCHAR WindowsDir[MAX_PATH];
    WCHAR CrashFilePath[MAX_PATH];

    PHYSICAL_ADDRESS ContextPa;
    ULONG64 ContextVa;

    Buffer = NULL;
    Header = NULL;
    Ret = FALSE;

    if (DumpFillHeader(PartitionEntry, &Header, &HeaderSize) == FALSE) goto Exit;

    Buffer = malloc(BLOCK_SIZE);
    if (Buffer == NULL) goto Exit;

    GetWindowsDirectory(WindowsDir, sizeof(WindowsDir) / sizeof(WindowsDir[0]));
    swprintf_s(CrashFilePath, sizeof(CrashFilePath) / sizeof(CrashFilePath[0]),
               L"%s\\hvdd.dmp", WindowsDir);

    HvddFile = CreateFile(CrashFilePath,
                          GENERIC_WRITE,
                          FILE_SHARE_READ,
                          NULL, CREATE_ALWAYS,
                          FILE_ATTRIBUTE_HIDDEN | FILE_FLAG_NO_BUFFERING, NULL);

    if (HvddFile == INVALID_HANDLE_VALUE) goto Exit;

    //MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].MemoryHandle; //must be rewritten. Unuseful
    PageCountTotal = PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].PageCountTotal;
	//PageCountTotal = VM_PAGE_COUNT; // HARDCODED_VALUE for SPECIFIC VIRTUAL MACHINE

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
    FunctionTable._VidReadMemoryBlockPageRange = VidReadMemoryBlockPageRange;
    FunctionTable._VidWriteMemoryBlockPageRange = VidWriteMemoryBlockPageRange;
    FunctionTable._CreateFileMappingA = CreateFileMappingA;
    FunctionTable._CreateFileMappingW = CreateFileMappingW;
    FunctionTable._MapViewOfFile = MapViewOfFile;
    FunctionTable._UnmapViewOfFile = UnmapViewOfFile;

    FunctionTable.CrashDumpHandle = INVALID_HANDLE_VALUE;
    FunctionTable.HeaderSize = HeaderSize;
    FunctionTable.Header = Header;
   // FunctionTable.MemoryHandle = MemoryBlockHandle;
	FunctionTable.MemoryHandle = NULL;
    FunctionTable.PartitionHandle = PartitionEntry->PartitionHandle;
    FunctionTable.FileSize.QuadPart = PageCountTotal * PAGE_SIZE + HeaderSize;

    if (GetMachineType(PartitionEntry) == MACHINE_X86)
    {
        ContextVa = 0;
        if (MmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
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
        ContextVa = 0;
        if (MmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KiProcessorBlock,
                                 &ContextVa, sizeof(ULONG64)) == FALSE) goto Exit;

        ContextVa += (X64_KPROCESSOR_STATE_OFFSET + X64_CONTEXT_OFFSET);
    }

    ContextPa = MmGetPhysicalAddress(PartitionEntry, ContextVa);

    FunctionTable.ContextPageIndex = (ULONG)(ContextPa.QuadPart / PAGE_SIZE);
	printf("FunctionTable.ContextPageIndex %x \n", FunctionTable.ContextPageIndex);
    FunctionTable.ContextOffsetLow = (ContextPa.LowPart & (PAGE_SIZE - 1));
	printf("FunctionTable.ContextOffsetLow %x \n", FunctionTable.ContextOffsetLow);

    FunctionTable.MachineType = GetMachineType(PartitionEntry);

    Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    Color = GetConsoleTextAttribute(Handle);
    SetConsoleTextAttribute(Handle, 0xF);

    LaunchKd(CrashFilePath);

    getchar();

    Ret = TRUE;

Exit:
    if (Buffer) free(Buffer);
    if (Header) free(Header);

    if (HvddFile != INVALID_HANDLE_VALUE) CloseHandle(HvddFile);

    DeleteFile(CrashFilePath);

    return TRUE;
}

BOOL
DumpFillHeader(PHVDD_PARTITION PartitionEntry,
               PVOID *Header,
               PULONG HeaderSize)
{
BOOL Ret;

    Ret = FALSE;

    if (GetMachineType(PartitionEntry) == MACHINE_X86)
    {
        *Header = DumpFillHeader32(PartitionEntry);
        *HeaderSize = sizeof(DUMP_HEADER32);
        if (*Header) Ret = TRUE;
    }
    else if (GetMachineType(PartitionEntry) == MACHINE_AMD64)
    {
        *Header = DumpFillHeader64(PartitionEntry);
        *HeaderSize = sizeof(DUMP_HEADER64);
        if (*Header) Ret = TRUE;

    }

    return Ret;
}

PDUMP_HEADER32
DumpFillHeader32(PHVDD_PARTITION PartitionEntry)
{
PHYSICAL_MEMORY_DESCRIPTOR32 MmPhysicalMemoryBlock32;
EXCEPTION_RECORD32 Exception32;
PDUMP_HEADER32 Header32;

SYSTEMTIME SystemTime;

ULONG i;

ULONG MmMaximumPhysicalPage;

    Header32 = (PDUMP_HEADER32)malloc(sizeof(DUMP_HEADER32));
    if (Header32 == NULL) goto Exit;

    for (i = 0; i < sizeof(DUMP_HEADER32) / sizeof(ULONG); i += 1)
    {
        ((PULONG)Header32)[i] = DUMP_SIGNATURE;
    }

    //
    // Initialize header.
    //
    Header32->Signature = DUMP_SIGNATURE;
    Header32->ValidDump = DUMP_VALID_DUMP;
    Header32->DumpType = DUMP_TYPE_FULL;
    Header32->MachineImageType = IMAGE_FILE_MACHINE_I386;

    Header32->MinorVersion = PartitionEntry->KiExcaliburData.NtBuildNumber & 0xFFFF;
    Header32->MajorVersion = PartitionEntry->KiExcaliburData.NtBuildNumber >> 28; 

    Header32->DirectoryTableBase = (ULONG)PartitionEntry->KiExcaliburData.DirectoryTableBase;
    Header32->PfnDataBase = (ULONG)PartitionEntry->KiExcaliburData.MmPfnDatabase;
    Header32->PsLoadedModuleList = (ULONG)PartitionEntry->KiExcaliburData.PsLoadedModuleList;
    Header32->PsActiveProcessHead = (ULONG)PartitionEntry->KiExcaliburData.PsActiveProcessHead;
    Header32->NumberProcessors = (ULONG)PartitionEntry->KiExcaliburData.NumberProcessors;
    Header32->KdDebuggerDataBlock = (ULONG)PartitionEntry->KiExcaliburData.KdDebuggerDataBlock;

    Header32->BugCheckCode = 'MATT';
    Header32->BugCheckParameter1 = 0x1;
    Header32->BugCheckParameter2 = 0x2;
    Header32->BugCheckParameter3 = 0x3;
    Header32->BugCheckParameter4 = 0x4;

    RtlZeroMemory(Header32->VersionUser, sizeof(Header32->VersionUser));

    Header32->PaeEnabled = PartitionEntry->KiExcaliburData.PaeEnabled;

    MmMaximumPhysicalPage = (ULONG)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].PageCountTotal;

    MmPhysicalMemoryBlock32.NumberOfPages = MmMaximumPhysicalPage;
    MmPhysicalMemoryBlock32.NumberOfRuns = 1;
    MmPhysicalMemoryBlock32.Run[0].BasePage = 0;
    MmPhysicalMemoryBlock32.Run[0].PageCount = MmMaximumPhysicalPage;

    RtlCopyMemory(&Header32->PhysicalMemoryBlock,
                  &MmPhysicalMemoryBlock32,
                  sizeof(PHYSICAL_MEMORY_DESCRIPTOR32));

    //
    // Exception record.
    //
    Exception32.ExceptionCode = STATUS_BREAKPOINT;
    Exception32.ExceptionRecord = 0;
    Exception32.NumberParameters = 0;
    Exception32.ExceptionFlags = EXCEPTION_NONCONTINUABLE;
    Exception32.ExceptionAddress = 0xDEADBABE;

    RtlCopyMemory(&Header32->ExceptionRecord,
                  &Exception32,
                  sizeof(EXCEPTION_RECORD32));

    GetSystemTime(&SystemTime);
    SystemTimeToFileTime(&SystemTime, &Header32->SystemTime);

    RtlZeroMemory(&Header32->RequiredDumpSpace, sizeof(LARGE_INTEGER));

    Header32->RequiredDumpSpace.QuadPart = 
        (MmMaximumPhysicalPage * PAGE_SIZE) + sizeof(DUMP_HEADER32);

    RtlZeroMemory(Header32->ContextRecord, sizeof(Header32->ContextRecord));

    RtlZeroMemory(Header32->Comment, sizeof(Header32->Comment));
    strcpy_s(Header32->Comment, sizeof(Header32->Comment),
             DUMP_COMMENT_STRING);

Exit:
    return Header32;
}

PDUMP_HEADER64
DumpFillHeader64(PHVDD_PARTITION PartitionEntry)
{
    PHYSICAL_MEMORY_DESCRIPTOR64 MmPhysicalMemoryBlock64;
    EXCEPTION_RECORD64 Exception64;
    PDUMP_HEADER64 Header64;

    SYSTEMTIME SystemTime;

    ULONG i;

    ULONG MmMaximumPhysicalPage;

    Header64 = NULL;

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

    MmMaximumPhysicalPage = (ULONG)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].PageCountTotal;

    MmPhysicalMemoryBlock64.NumberOfPages = MmMaximumPhysicalPage;
    MmPhysicalMemoryBlock64.NumberOfRuns = 1;
    MmPhysicalMemoryBlock64.Run[0].BasePage = 0;
    MmPhysicalMemoryBlock64.Run[0].PageCount = MmMaximumPhysicalPage;

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

    //
    // BUGBUG: Safe int.
    //
    Header64->RequiredDumpSpace.QuadPart = 
        (MmMaximumPhysicalPage * PAGE_SIZE) + sizeof(DUMP_HEADER64);

    //
    // BUGBUG: Fill me with a real context.
    //
    RtlZeroMemory(Header64->ContextRecord, sizeof(Header64->ContextRecord));

    RtlZeroMemory(Header64->Comment, sizeof(Header64->Comment));
    strcpy_s(Header64->Comment, sizeof(Header64->Comment),
        DUMP_COMMENT_STRING);


Exit:

    return Header64;
}