/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - misc.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#include "hvdd.h"

BOOL
EnablePrivilege(WCHAR *PrivilegeName)
{
HANDLE ProcessToken;
TOKEN_PRIVILEGES TokenPrivileges;

BOOL Ret;

    Ret = FALSE;

    if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &ProcessToken))
    {
        wprintf(L"EnablePrivilege - OpenProcessToken(Error = %d)\n",
                GetLastError());
        goto Exit;
    }

    if (!LookupPrivilegeValueW(NULL, PrivilegeName, &TokenPrivileges.Privileges[0].Luid))
    {
        wprintf(L"EnablePrivilege - LookupPrivilegeValue(Error = %d)\n",
                GetLastError());
        goto Exit;
    }

    TokenPrivileges.PrivilegeCount = 1;
    TokenPrivileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    if (!AdjustTokenPrivileges(ProcessToken, FALSE, &TokenPrivileges,
                              0, NULL, NULL))
    {
        wprintf(L"EnablePrivilege - AdjustTokenPrivileges(Error = %d)\n",
                GetLastError());
        goto Exit;
    }

    Ret = TRUE;

Exit:
    if (ProcessToken) CloseHandle(ProcessToken);

    return Ret;
}

ULONG
GetHandleCount()
{
	PSYSTEM_PROCESS_INFORMATION pSystemProcessInfo, Entry;
	ULONG BytesRet;

	NTSTATUS NtStatus;

	ULONG HandleCount;

    pSystemProcessInfo = NULL;
    HandleCount = 0;
    BytesRet = 0;

    NtStatus = NtQuerySystemInformation(SystemProcessInformation,
                                        pSystemProcessInfo,
                                        0,
                                        &BytesRet);

    if (NtStatus != STATUS_INFO_LENGTH_MISMATCH) goto Exit;

    pSystemProcessInfo = (PSYSTEM_PROCESS_INFORMATION)malloc(BytesRet);

    if (pSystemProcessInfo == NULL) goto Exit;

    NtStatus = NtQuerySystemInformation(SystemProcessInformation,
                                        pSystemProcessInfo,
                                        BytesRet,
                                        &BytesRet);

    if (NtStatus != STATUS_SUCCESS) goto Exit;

    Entry = pSystemProcessInfo;

    while (Entry->NextEntryOffset)
    {
        HandleCount += Entry->HandleCount;
        Entry = (PSYSTEM_PROCESS_INFORMATION)((PUCHAR)Entry + Entry->NextEntryOffset);
    }

    HandleCount += Entry->HandleCount;

Exit:
    if (pSystemProcessInfo != NULL) free(pSystemProcessInfo);

    //
    // Processes can create additional handles while we are reaching the caller.
    //
    return HandleCount + HANDLE_COUNT_DELTA;
}

HANDLE
OpenProcessWithId(HANDLE ProcessId)
{
    OBJECT_ATTRIBUTES ObjectAttributes;
    CLIENT_ID ClientId;
    NTSTATUS NtStatus;
    HANDLE Handle;

    RtlZeroMemory(&ObjectAttributes, sizeof(OBJECT_ATTRIBUTES));
    RtlZeroMemory(&ClientId, sizeof(CLIENT_ID));


    ClientId.UniqueProcess = ProcessId;
    InitializeObjectAttributes(&ObjectAttributes, NULL, 0, NULL, NULL);
    NtStatus = NtOpenProcess(&Handle, PROCESS_DUP_HANDLE | PROCESS_VM_READ, &ObjectAttributes, &ClientId);

    if (NtStatus != STATUS_SUCCESS)
    {
        printf("OpenProcessWithId - NtOpenProcess (Err = 0x%x)\n", NtStatus);
        return INVALID_HANDLE_VALUE;
    }

    return Handle;
}

BOOL
GetMmNonPagedPoolLimit(PULONG64 MmNonPagedPoolStart,
                       PULONG64 MmNonPagedPoolEnd)
{
SYSTEM_BASIC_INFORMATION SystemInfo;
ULONG64 PfnAllocation;
NTSTATUS NtStatus;
BOOL Ret;

    Ret = FALSE;

    RtlZeroMemory(&SystemInfo, sizeof(SYSTEM_BASIC_INFORMATION));
    NtStatus = NtQuerySystemInformation(SystemBasicInformation, &SystemInfo, sizeof(SYSTEM_BASIC_INFORMATION), NULL);
    if (NtStatus != STATUS_SUCCESS) goto Exit;

    PfnAllocation = (SystemInfo.HighestPhysicalPageNumber + 1) * 0x30; // sizeof(MMPFN);
    PfnAllocation = ((PfnAllocation + (PAGE_SIZE - 1)) & ~(PAGE_SIZE - 1));

    *MmNonPagedPoolStart = 0xFFFFFA8000000000ULL + PfnAllocation;
    *MmNonPagedPoolEnd = *MmNonPagedPoolStart + ((ULONG64)8 * 1024 * 1024 * 1024);

    Ret = TRUE;

Exit:
    return Ret;
}

USHORT
GetConsoleTextAttribute(HANDLE hConsole)
{
CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    return(csbi.wAttributes);
}

VOID
White(LPCWSTR Format, ...)
{
HANDLE Handle;
USHORT Color;
va_list va;

    Handle = GetStdHandle(STD_OUTPUT_HANDLE);

    Color = GetConsoleTextAttribute(Handle);

    SetConsoleTextAttribute(Handle, 0xF);
    va_start(va, Format);
    vwprintf(Format, va);
    va_end(va); 

    SetConsoleTextAttribute(Handle, Color);
}

VOID
Red(LPCWSTR Format, ...)
{
HANDLE Handle;
USHORT Color;
va_list va;

    Handle = GetStdHandle(STD_OUTPUT_HANDLE);

    Color = GetConsoleTextAttribute(Handle);

    SetConsoleTextAttribute(Handle, FOREGROUND_RED | FOREGROUND_INTENSITY);
    va_start(va, Format);
    vwprintf(Format, va);
    va_end(va); 

    SetConsoleTextAttribute(Handle, Color);
}

VOID
Green(LPCWSTR Format, ...)
{
HANDLE Handle;
USHORT Color;
va_list va;

    Handle = GetStdHandle(STD_OUTPUT_HANDLE);

    Color = GetConsoleTextAttribute(Handle);

    SetConsoleTextAttribute(Handle, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    va_start(va, Format);
    vwprintf(Format, va);
    va_end(va); 

    SetConsoleTextAttribute(Handle, Color);
}