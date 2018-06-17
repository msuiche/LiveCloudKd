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

BOOL
CreateDestinationFile(LPCWSTR Filename,
                      PHANDLE Handle)
{
    *Handle = CreateFile(Filename,
                         GENERIC_WRITE,
                         0,
                         NULL,
                         CREATE_ALWAYS,
                         FILE_FLAG_NO_BUFFERING,
                         NULL);

    if (Handle == INVALID_HANDLE_VALUE) return FALSE;

    return TRUE;
}

BOOL
WriteFileSynchronous(
    HANDLE Handle,
    PVOID Buffer,
    ULONG NbOfBytesToWrite
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
DWORD WrittenBytes;
BOOL Ret;

    WrittenBytes = 0;
    Ret = FALSE;

    Ret = WriteFile(Handle, Buffer, NbOfBytesToWrite, &WrittenBytes, NULL);
    if ((Ret == FALSE) && (GetLastError() == ERROR_IO_PENDING))
    {
        do
        {
            Ret = WaitForSingleObjectEx(Handle, INFINITE, TRUE);
        } while (Ret == WAIT_IO_COMPLETION);
    }

    if (WrittenBytes == NbOfBytesToWrite)
    {
        Ret = TRUE;
    }

    return Ret;
}