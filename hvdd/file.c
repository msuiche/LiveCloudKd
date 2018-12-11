/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - file.c

Abstract:

    -


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/
#include "hvdd.h"

BOOLEAN
CreateDestinationFile(
    _In_ LPCWSTR Filename,
    _Out_ PHANDLE Handle
)
{
    *Handle = CreateFileW(Filename,
        GENERIC_WRITE,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_FLAG_NO_BUFFERING,
        NULL);

    if (Handle == INVALID_HANDLE_VALUE) return FALSE;

    return TRUE;
}

BOOLEAN
WriteFileSynchronous(
    _In_ HANDLE Handle,
    _In_ PVOID Buffer,
    _In_ ULONG NbOfBytesToWrite
)
/*++

Routine Description:

    Desc.

Arguments:

    Arg1 - Desc.

    Arg2 - Desc.

    Arg3 - Desc.

Return Value:

    Ret1 - Desc.

    Ret2 - Desc.

--*/
{
    DWORD WrittenBytes = 0;
    BOOLEAN Ret;
    DWORD Status;

    Ret = WriteFile(Handle, Buffer, NbOfBytesToWrite, &WrittenBytes, NULL);
    if ((Ret == FALSE) && (GetLastError() == ERROR_IO_PENDING))
    {
        do
        {
            Status = WaitForSingleObjectEx(Handle, INFINITE, TRUE);
        } while (Status == WAIT_IO_COMPLETION);
    }

    if (WrittenBytes == NbOfBytesToWrite)
    {
        Ret = TRUE;
    }

    return Ret;
}