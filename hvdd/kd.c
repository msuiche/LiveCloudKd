/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - kd.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#include "hvdd.h"


//for future - make def file


UINT64 GetGuestReg(PHVDD_PARTITION PartitionEntry)
{
	HV_REGISTER_NAME RegisterCode;
	HV_REGISTER_VALUE RegisterValue;
	BOOLEAN bGetVirtualProcessorState;

	RegisterCode = HvX64RegisterTr;

	bGetVirtualProcessorState = VidGetVirtualProcessorState(PartitionEntry->PartitionHandle,
		0,
		&RegisterCode,
		1,
		&RegisterValue);

	if (bGetVirtualProcessorState)
	{
		printf("GUEST REG 0x%llx\n", RegisterValue.Reg64);
		printf("GUEST Reg128.High64 0x%llx\n", RegisterValue.Reg128.High64);
		printf("GUEST Reg128.Low64 0x%llx\n", RegisterValue.Reg128.Low64);
		return RegisterValue.Reg64;
	}
	else
	{
		printf("GUEST GDTR get error", RegisterValue.Reg64);
		return 1;
	}
}

MACHINE_TYPE MachineType = MACHINE_UNKNOW;

//
// BUGBUG: Should have one EXCALIBUR_DATA per VM.
//
// EXCALIBUR_DATA KiExcaliburData = {0};

ULONG64
VmGetProcAddress(PHVDD_PARTITION PartitionEntry,
                 ULONG64 ModuleBase,
                 LPSTR Name)
{
PIMAGE_NT_HEADERS32 NtHeader32;
PIMAGE_DOS_HEADER DosHeader;

ULONG DirRva, DirSize;

PUCHAR Buffer;

BOOL Ret;

ULONG64 Va;

    Va = 0ULL;

    Buffer = malloc(PAGE_SIZE);
    if (Buffer == NULL) return FALSE;

    DosHeader = (PIMAGE_DOS_HEADER)Buffer;

    Ret = MmReadVirtualAddress(PartitionEntry,
                               ModuleBase,
                               Buffer,
                               PAGE_SIZE);

    if (Ret == FALSE) goto finish;

    //
    // To avoid asynchronization issues. E.g. Race condition.
    //
    if (DosHeader->e_magic != IMAGE_DOS_SIGNATURE) goto finish;

    //
    // BUGBUG:
    // if (DosHeader->e_lfanew < 0x40)
    //

    NtHeader32 = (PIMAGE_NT_HEADERS32)&Buffer[DosHeader->e_lfanew];

    if (NtHeader32->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC)
    {
        PIMAGE_OPTIONAL_HEADER32 OptionalHeader32;
        PIMAGE_EXPORT_DIRECTORY ExportDir;
        ULONG SizeOfImage;
        ULONG NumberOfNames;

        PULONG AddressOfNames;
        PUSHORT AddressOfNameOrdinals;
        PULONG AddressOfFunctions;

        PUCHAR Image;

        ULONG i;

        OptionalHeader32 = (PIMAGE_OPTIONAL_HEADER32)&NtHeader32->OptionalHeader;

        SizeOfImage = OptionalHeader32->SizeOfImage;
        Image = malloc(SizeOfImage);
        if (Image == NULL) goto finish;

        Ret = MmReadVirtualAddress(PartitionEntry,
                                   ModuleBase,
                                   Image,
                                   SizeOfImage);

        if (Ret == FALSE)
        {
            free(Image);
            goto finish;
        }

        DirRva = OptionalHeader32->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
        DirSize = OptionalHeader32->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size;

        ExportDir = (PIMAGE_EXPORT_DIRECTORY)(Image + DirRva);

        NumberOfNames = ExportDir->NumberOfNames;

        //
        // Got a crash with x86 win7
        //
        if ((ExportDir->AddressOfNames >= (DirRva + DirSize)) ||
            (ExportDir->AddressOfNameOrdinals >= (DirRva + DirSize)) ||
            (ExportDir->AddressOfFunctions >= (DirRva + DirSize)))
        {
            Ret = FALSE;
            free(Image);
            goto finish;
        }

        AddressOfNames = (PULONG)(Image + (ULONG)ExportDir->AddressOfNames);
        AddressOfNameOrdinals = (PUSHORT)(Image + (ULONG)ExportDir->AddressOfNameOrdinals);
        AddressOfFunctions = (PULONG)(Image + (ULONG)ExportDir->AddressOfFunctions);


        for (i = 0; i < NumberOfNames; i += 1)
        {
            // wprintf(L"Base: %p AddressOfNames: %p\n Delta: %08X i: %x", Image, AddressOfNames, AddressOfNames[i], i);
            // wprintf(L"Name: %S \n\n", Image + AddressOfNames[i]);
            if (strcmp(Image + AddressOfNames[i], Name) == 0)
            {
                //
                // We found it.
                //
                Va = AddressOfFunctions[AddressOfNameOrdinals[i]];
                Va += ModuleBase;

                break;
            }
        }

        free (Image);
    }
    else if (NtHeader32->OptionalHeader.Magic  == IMAGE_NT_OPTIONAL_HDR64_MAGIC)
    {
        PIMAGE_NT_HEADERS64 NtHeader64;
        PIMAGE_OPTIONAL_HEADER64 OptionalHeader64;
        PIMAGE_EXPORT_DIRECTORY ExportDir;

        ULONG SizeOfImage;
        ULONG NumberOfNames;

        PULONG AddressOfNames;
        PUSHORT AddressOfNameOrdinals;
        PULONG AddressOfFunctions;

        PUCHAR Image;

        ULONG i;

        NtHeader64 = (PIMAGE_NT_HEADERS64)NtHeader32;

        OptionalHeader64 = (PIMAGE_OPTIONAL_HEADER64)&NtHeader32->OptionalHeader;
        SizeOfImage = OptionalHeader64->SizeOfImage;
        Image = malloc(SizeOfImage);
        if (Image == NULL) goto finish;

        Ret = MmReadVirtualAddress(PartitionEntry,
                                   ModuleBase,
                                   Image,
                                   SizeOfImage);

        if (Ret == FALSE)
        {
            free(Image);
            goto finish;
        }

        DirRva = OptionalHeader64->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
        DirSize = OptionalHeader64->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size;

        Ret = MmReadVirtualAddress(PartitionEntry,
                                   ModuleBase + DirRva,
                                   Image + DirRva,
                                   DirSize);

        if (Ret == FALSE)
        {
            free(Image);
            goto finish;
        }

        ExportDir = (PIMAGE_EXPORT_DIRECTORY)(Image + DirRva);
        // wprintf(L"Image = %p\n", Image);
        // wprintf(L"ExportDir = %p %X\n", ExportDir, DirRva);

        // wprintf(L"ExportDir->AddressOfNames = 0x%08X\n", ExportDir->AddressOfNames);
        // wprintf(L"ExportDir->AddressOfNameOrdinals = 0x%08X\n", ExportDir->AddressOfNameOrdinals);
        // wprintf(L"ExportDir->AddressOfFunctions = 0x%08X\n", ExportDir->AddressOfFunctions);

        NumberOfNames = ExportDir->NumberOfNames;

        if ((ExportDir->AddressOfNames >= (DirRva + DirSize)) ||
            (ExportDir->AddressOfNameOrdinals >= (DirRva + DirSize)) ||
            (ExportDir->AddressOfFunctions >= (DirRva + DirSize)))
        {
            Ret = FALSE;
            free(Image);
            goto finish;
        }

        AddressOfNames = (PULONG)(Image + ExportDir->AddressOfNames);
        AddressOfNameOrdinals = (PUSHORT)(Image + ExportDir->AddressOfNameOrdinals);
        AddressOfFunctions = (PULONG)(Image + ExportDir->AddressOfFunctions);

        // wprintf(L"Base: %p AddressOfNames: %p\n Delta: %08X i: %x", Image, AddressOfNames, ExportDir->AddressOfNames, 0);

        for (i = 0; i < NumberOfNames; i += 1)
        {
            // wprintf(L"X64 Base: %p AddressOfNames: %p\n Delta: %08X i: %x", Image, AddressOfNames, AddressOfNames[i], i);
            // wprintf(L"Name: %S \n", Image + AddressOfNames[i]);
            if (strcmp(Image + AddressOfNames[i], Name) == 0)
            {
                //
                // We found it.
                //
                Va = AddressOfFunctions[AddressOfNameOrdinals[i]];
                Va += ModuleBase;

                break;
            }
        }

        free (Image);
    }

finish:
    free(Buffer);

    return Va;

}

MACHINE_TYPE
GetMachineType(PHVDD_PARTITION PartitionEntry)
{
HV_REGISTER_NAME RegisterCode;
HV_REGISTER_VALUE RegisterValue;
BOOLEAN bGetVirtualProcessorState;

    if (MachineType != MACHINE_UNKNOW) return MachineType;

    RegisterCode = HvX64RegisterRip;

	bGetVirtualProcessorState = VidGetVirtualProcessorState(PartitionEntry->PartitionHandle,
		0,
		&RegisterCode,
		1,
		&RegisterValue);

    if (bGetVirtualProcessorState)
    {
        if (RegisterValue.Reg64 >= 0x100000000ULL)
        {
            PartitionEntry->KiExcaliburData.MachineType = MACHINE_AMD64;
            MachineType = MACHINE_AMD64;
			printf("MachineType = MACHINE_AMD64\n");
			printf("RegisterValue.Reg64 = 0x%llx\n", RegisterValue.Reg64);
        }
        else
        {
            PartitionEntry->KiExcaliburData.MachineType = MACHINE_AMD64;
            MachineType = MACHINE_X86;
			printf("MachineType = MACHINE_X86\n");
        }
    }

    return MachineType;
}

BOOL
IsPaeEnabled(PHVDD_PARTITION PartitionEntry)
{
HV_REGISTER_NAME RegisterCode;
HV_REGISTER_VALUE RegisterValue;

BOOL PaeEnabled;

    RegisterCode = HvX64RegisterCr4;
    PaeEnabled = FALSE;

    if (VidGetVirtualProcessorState(PartitionEntry->PartitionHandle,
                                    0,
                                    &RegisterCode,
                                    1,
                                    &RegisterValue))
    {
        if (RegisterValue.Reg32 & (1 << 5)) // PAE_FLAG
        {
            PaeEnabled = TRUE;
        }
    }

    return PaeEnabled;
}

ULONG64
GetDirectoryTable(PHVDD_PARTITION PartitionEntry)
{
HV_REGISTER_NAME RegisterCode;
HV_REGISTER_VALUE RegisterValue;

ULONG64 DirectoryTable;

    DirectoryTable = 0ULL;
    RegisterCode = HvX64RegisterCr3;

    if (VidGetVirtualProcessorState(PartitionEntry->PartitionHandle,
                                    0,
                                    &RegisterCode,
                                    1,
                                    &RegisterValue))
    {
        DirectoryTable = RegisterValue.Reg64;
    }

    // wprintf(L"DirectoryTable: 0x%I64X\n", DirectoryTable);
    return DirectoryTable;
}

BOOL
KdFindDbgDataBlock(PHVDD_PARTITION PartitionEntry)
{
	PKDDEBUGGER_DATA64 DbgData = {0};

ULONG64 Base, Va;
PULONG Page;

ULONG Index = 0, DwIndex, TryId;

BOOL Ret;

MACHINE_TYPE VmType;

    Ret = FALSE;
    Page = NULL;

    Page = (PULONG)malloc(PAGE_SIZE);
    if (Page == NULL) goto Exit;

    VmType = GetMachineType(PartitionEntry);
    if (VmType == MACHINE_X86)
    {
        Base = 0x80000000ULL;

TryAgainWith3GB:
        for (Index = 0; Index < 0x10000; Index += 1, Base += PAGE_SIZE)
        {
            Ret = MmReadVirtualAddress(PartitionEntry,
                                       Base,
                                       Page,
                                       PAGE_SIZE);
            if (Ret == FALSE) continue;

            for (DwIndex = 4; DwIndex < (PAGE_SIZE / sizeof(ULONG)); DwIndex += 1)
            {
                if (Page[DwIndex] == KDBG_TAG)
                {
                    PLIST_ENTRY32 List;

                    DbgData = (PKDDEBUGGER_DATA64)((PUCHAR)(&Page[DwIndex]) - sizeof(LIST_ENTRY64));

                    if (DbgData->Header.Size >= 0x400) continue;

                    if (DbgData->Header.List.Blink != 0) continue;

                    List = (PLIST_ENTRY32)(DbgData);
                    if (List->Flink != List->Blink) continue;

                    Ret = TRUE;

                    Va = Base + DwIndex * sizeof(ULONG) - sizeof(LIST_ENTRY64);

                    goto Success;
                }
            }
        }

        //
        // /3GB and /LARGEADDRESSAWARE option compability.
        //
        if (Base == (0x80000000ULL + (0x10000 * PAGE_SIZE)))
        {
            Base = 0xC0000000ULL;
            goto TryAgainWith3GB;
        }
    }
    else if (VmType == MACHINE_AMD64)
    {
		//GetGuestReg(PartitionEntry);
		//Base = 0xfffff80000000000ULL;
		Base = (GetGuestReg(PartitionEntry)) & 0xfffffFFFF0000000ULL;
		printf("Scan base = 0x%llx\n", Base);
        for (Index = 0; Index < 0x1000000; Index += 1, Base += PAGE_SIZE)
        {
            Ret = MmReadVirtualAddress(PartitionEntry,
                                       Base,
                                       Page,
                                       PAGE_SIZE);

			if (Ret == FALSE) {
				//printf("Error during MmReadVirtualAddress 0x%llx \n", Base);
				continue;
			}
				
			//printf("KdFindDbgDataBlock.Base 0x%p\n", Base);
			
			if (Index & 0xFF == 0) {
				printf("    index = 0x%d\n", Index);
				printf("    Scan base = 0x%llx\n", Base);
			}
            for (DwIndex = 4; DwIndex < (PAGE_SIZE / sizeof(ULONG)); DwIndex += 1)
            {
                if (Page[DwIndex] == KDBG_TAG)
                {
                    DbgData = (PKDDEBUGGER_DATA64)((PUCHAR)(&Page[DwIndex]) - sizeof(LIST_ENTRY64));

                    if (DbgData->Header.Size >= 0x400) continue;

                    if (DbgData->Header.List.Blink != DbgData->Header.List.Flink) continue;

                    Ret = TRUE;

                    Va = Base + DwIndex * sizeof(ULONG) - sizeof(LIST_ENTRY64);

                    goto Success;
                }
            }
        }
		printf("Index too small 0x%x\n", Index);
    }
    if (Ret == FALSE) goto Exit;

Success:

    Ret = TRUE;

    PartitionEntry->KiExcaliburData.KdDebuggerDataBlock = Va;
    PartitionEntry->KiExcaliburData.KernelBase = DbgData->KernBase;

    PartitionEntry->KiExcaliburData.MmPfnDatabase = DbgData->MmPfnDatabase;
    PartitionEntry->KiExcaliburData.PsLoadedModuleList = DbgData->PsLoadedModuleList;
    PartitionEntry->KiExcaliburData.PsActiveProcessHead = DbgData->PsActiveProcessHead;
    PartitionEntry->KiExcaliburData.PspCidTable = DbgData->PspCidTable;

    //
    // Count number of entries.
    //
    PartitionEntry->KiExcaliburData.KiProcessorBlock = DbgData->KiProcessorBlock;

    if (VmType == MACHINE_X86)
    {
        PULONG ProcBlock;
        ULONG ProcBlockSize;
        ULONG NumberProcessors;

        ProcBlockSize = sizeof(ULONG) * MAX_PROCESSORS;
        ProcBlock = (PULONG)malloc(ProcBlockSize);
        if (ProcBlock == NULL) goto Exit;

        Ret = MmReadVirtualAddress(PartitionEntry,
                                   PartitionEntry->KiExcaliburData.KiProcessorBlock,
                                   ProcBlock,
                                   ProcBlockSize);
        if (Ret == FALSE)
        {
            free(ProcBlock);
            goto Exit;
        }

        for (NumberProcessors = 0;
             ProcBlock[NumberProcessors] != 0;
             NumberProcessors += 1)
        {
            if (NumberProcessors >= MAX_PROCESSORS) break;
        }

        PartitionEntry->KiExcaliburData.NumberProcessors = NumberProcessors;
        free(ProcBlock);
    }
    else if (VmType == MACHINE_AMD64)
    {
        PULONGLONG ProcBlock;
        ULONG ProcBlockSize;

        ULONG NumberProcessors;

        ProcBlockSize = sizeof(ULONGLONG) * MAX_PROCESSORS;
        ProcBlock = (PULONGLONG)malloc(ProcBlockSize);

        if (ProcBlock == NULL) goto Exit;

        Ret = MmReadVirtualAddress(PartitionEntry,
                                   PartitionEntry->KiExcaliburData.KiProcessorBlock,
                                   ProcBlock,
                                   ProcBlockSize);

        if (Ret == FALSE)
        {
            free(ProcBlock);
            goto Exit;
        }

        for (NumberProcessors = 0;
             ProcBlock[NumberProcessors] != 0;
             NumberProcessors += 1)
        {
            if (NumberProcessors >= MAX_PROCESSORS) break;
        }

        PartitionEntry->KiExcaliburData.NumberProcessors = NumberProcessors;

        free(ProcBlock);
    }

    //
    // Small trick to fix asynchronization issue. f34r.
    //
    for (TryId = 0; TryId < 0x40; TryId += 1)
    {
        Va = VmGetProcAddress(PartitionEntry, PartitionEntry->KiExcaliburData.KernelBase, "NtBuildNumber");
        if (Va != 0ULL) break;

        Sleep(1);
    }

    if ((TryId == 0x20) && (Va == 0ULL))
    {
        Ret = FALSE;
        goto Exit;
    }

    Ret = MmReadVirtualAddress(PartitionEntry, Va, &PartitionEntry->KiExcaliburData.NtBuildNumber, sizeof(PartitionEntry->KiExcaliburData.NtBuildNumber));
    if (Ret == FALSE) goto Exit;

    PartitionEntry->KiExcaliburData.DirectoryTableBase = GetDirectoryTable(PartitionEntry);
    if (PartitionEntry->KiExcaliburData.DirectoryTableBase == 0ULL)
    {
        Ret = FALSE;
        goto Exit;
    }

    PartitionEntry->KiExcaliburData.PaeEnabled = IsPaeEnabled(PartitionEntry);

Exit:
    if (Page) free(Page);

    return Ret;
}

BOOL
LaunchKd(LPCWSTR DumpFile)
{
STARTUPINFO si;
PROCESS_INFORMATION pi;

WCHAR CommandLine[MAX_PATH * 3];

DEBUG_EVENT DbgEvent;
ULONG dwContinueStatus;

// CONTEXT Context;

HANDLE ThreadHandle[0xFFFF];

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    si.hStdError = GetStdHandle(STD_ERROR_HANDLE);
    si.hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
    si.dwFlags |= STARTF_USESTDHANDLES;


    //
    // WinDbg or Kd ?
    // C:\\WinDDK\\7600.16385.1\\Debuggers\\
    //
    if (UseWinDbg == FALSE)
    {
        swprintf_s(CommandLine, sizeof(CommandLine) / sizeof(CommandLine[0]),
                   L"kd.exe -z \"%s\"", DumpFile);
    }
    else
    {
        swprintf_s(CommandLine, sizeof(CommandLine) / sizeof(CommandLine[0]),
                   L"windbg.exe -z \"%s\"", DumpFile);
    }

    if (!CreateProcess(NULL,
        CommandLine,
        NULL,
        NULL,
        FALSE,
        DEBUG_PROCESS | DEBUG_ONLY_THIS_PROCESS,
        NULL,
        NULL,
        &si,
        &pi)
    ) 
    {
        if (GetLastError() == ERROR_FILE_NOT_FOUND)
        {
            Red(L"   You must put LiveCloudKd.exe in the WinDbg Directory.\n");
        }
        else
        {
            wprintf(L"CreateProcess failed (%d).\n", GetLastError());
        }
        return FALSE;
    }

    SetConsoleTitle(L"LiveCloudKd - Matthieu Suiche (msuiche) from MoonSols SARL - www.moonsols.com");
    // wprintf(L"Main Thread: pi.dwThreadId = %d\n", pi.dwThreadId);
    ThreadHandle[pi.dwThreadId] = pi.hThread;

    while (TRUE)
    {
        HANDLE DuplicatedHandle;
        NTSTATUS NtStatus;

        WaitForDebugEvent(&DbgEvent, INFINITE);

        dwContinueStatus = DBG_EXCEPTION_NOT_HANDLED;
        switch (DbgEvent.dwDebugEventCode)
        {
            case EXCEPTION_DEBUG_EVENT:
                switch (DbgEvent.u.Exception.ExceptionRecord.ExceptionCode)
                {
                    case EXCEPTION_BREAKPOINT:
                        NtStatus = NtDuplicateObject(GetCurrentProcess(), FunctionTable.PartitionHandle,
                                                     pi.hProcess, &DuplicatedHandle,
                                                     0, FALSE, DUPLICATE_SAME_ACCESS);
                        if (NtStatus != STATUS_SUCCESS) goto Exit;
                        FunctionTable.PartitionHandle = DuplicatedHandle;
                        HookKd(pi.hProcess, pi.dwProcessId);
                        dwContinueStatus = DBG_CONTINUE;

                        /*
                        Context.ContextFlags = CONTEXT_ALL;
                        GetThreadContext(ThreadHandle[DbgEvent.dwThreadId], // pi.hThread,
                                         &Context);
                        wprintf(L"RAX = 0x%I64X RBX = 0x%I64X RCX = 0x%I64X\n",
                                Context.Rax, Context.Rbx, Context.Rdx);
                        wprintf(L"RDX = 0x%I64X RSI = 0x%I64X RDI = 0x%I64X\n",
                            Context.Rdx, Context.Rsi, Context.Rdi);
                        wprintf(L"R8 = 0x%I64X R9 = 0x%I64X R10 = 0x%I64X\n",
                            Context.R8, Context.R9, Context.R10);
                        wprintf(L"R11 = 0x%I64X R12 = 0x%I64X R13 = 0x%I64X\n",
                            Context.R11, Context.R12, Context.R13);
                        wprintf(L"R14 = 0x%I64X R15 = 0x%I64X\n",
                                Context.R14, Context.R15);
                        wprintf(L"RSP = 0x%I64X RBP = 0x%I64X RIP = %I64X\n",
                            Context.Rsp, Context.Rbp, Context.Rip);
                        */

                    break;
                    case EXCEPTION_ACCESS_VIOLATION:
                        /*
                        wprintf(L"ACCESS VIOLATION AT %X (Tid = %d)\n",
                                DbgEvent.u.Exception.ExceptionRecord.ExceptionAddress,
                                DbgEvent.dwThreadId);
                        Context.ContextFlags = CONTEXT_ALL;
                        GetThreadContext(ThreadHandle[DbgEvent.dwThreadId], // pi.hThread,
                                         &Context);
                        
                        wprintf(L"RAX = 0x%I64X RBX = 0x%I64X RCX = 0x%I64X\n",
                                Context.Rax, Context.Rbx, Context.Rdx);
                        wprintf(L"RDX = 0x%I64X RSI = 0x%I64X RDI = 0x%I64X\n",
                            Context.Rdx, Context.Rsi, Context.Rdi);
                        wprintf(L"R8 = 0x%I64X R9 = 0x%I64X R10 = 0x%I64X\n",
                            Context.R8, Context.R9, Context.R10);
                        wprintf(L"R11 = 0x%I64X R12 = 0x%I64X R13 = 0x%I64X\n",
                            Context.R11, Context.R12, Context.R13);
                        wprintf(L"R14 = 0x%I64X R15 = 0x%I64X\n",
                                Context.R14, Context.R15);
                        wprintf(L"RSP = 0x%I64X RBP = 0x%I64X RIP = %I64X\n",
                            Context.Rsp, Context.Rbp, Context.Rip);
                        */
                    break;
                }
            break;
            case CREATE_THREAD_DEBUG_EVENT:
                /*
                wprintf(L"DbgEvent.dwThreadId: %d\n"
                        L"DbgEvent.u.CreateThread.hThread: %x\n",
                         DbgEvent.dwThreadId,
                         DbgEvent.u.CreateThread.hThread);
                */
                ThreadHandle[DbgEvent.dwThreadId] = DbgEvent.u.CreateThread.hThread;
            break;
        }

        ContinueDebugEvent(DbgEvent.dwProcessId, DbgEvent.dwThreadId, dwContinueStatus);
    }

Exit:
    // Close process and thread handles. 
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return TRUE;
}