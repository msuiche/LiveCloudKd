/*++
	Microsoft Hyper-V Virtual Machine Physical Memory Dumper
	Copyright (C) Matt Suiche. All rights reserved.

Module Name:

	- kd.c

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

BOOL
LaunchKd(LPCWSTR DumpFile, PHVDD_PARTITION PartitionEntry)
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
                   //L"kd.exe -d -loga log3.txt -v -t -z \"%s\"", DumpFile);
        L"kd.exe -c \".segmentation -X -a; .effmach amd64\" -z \"%s\"", DumpFile); //from swichdbgext by @msuiche
          //  L"kd.exe -v -z \"%s\"", DumpFile);
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
	    TRUE,
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

    SetConsoleTitle(L"LiveCloudKd");
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
                        NtStatus = g_NtDll.NtDuplicateObject(GetCurrentProcess(), FunctionTable.PartitionHandle,
                                                     pi.hProcess, &DuplicatedHandle,
                                                     0, FALSE, DUPLICATE_SAME_ACCESS);
                        if (NtStatus != STATUS_SUCCESS) goto Exit;
                        FunctionTable.PartitionHandle = DuplicatedHandle;
						FunctionTable.PartitionEntry.PartitionHandle = DuplicatedHandle;
						FunctionTable.PartitionEntry.CurrentProcess = pi.dwProcessId;
                        HookKd(pi.hProcess, pi.dwProcessId, PartitionEntry);
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