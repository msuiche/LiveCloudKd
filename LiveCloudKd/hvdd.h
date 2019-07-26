/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - hvdd.h

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/
#include "LiveCloudKdSdkPublic.h"

#define _AMD64_

//#define WIN32_NO_STATUS   /* Tell Windows headers you'll use ntstatus.s from NDK */
//#include <windows.h>      /* Declare Windows Headers like you normally would */
//#include "ntdefs.h"

//#include <stdio.h>
//#include <tlhelp32.h>
//#include <stdlib.h> 
#include <conio.h>

#include <dbghelp.h>
//#include <wdbgexts.h>
//#include "dbg.h"
//#include "vid.h"

#include "hooker.h"
#include "misc.h"
#include "dmp.h"


#define BLOCK_SIZE (1024 * 1024)

#define WINDBG_FT_TABLE_PAGE_COUNT 0x270

//
//limitation for max virtual dump size in hooker.c. Doesn't need anymore
//
//#define MAX_HIGH_FILE_OFFSET 0xFF


//from Bin2Dmp
//#define PRO_EDITION
//#define FORCE_DEBUG_MODE 1

#if defined(PRO_EDITION)
#define DEBUG_ENABLED FORCE_DEBUG_MODE
#elif defined(COMMUNITY_EDITION)
#define DEBUG_ENABLED 0
#else
#define DEBUG_ENABLED 1
#endif
//
// KDBG cyphered or not
//

//#define HYPERV_CONTAINER TRUE

//
//If you define USE_VIDDLL_FUNCTIONS, LiveCloudKd start using vid.dll functions, but it need ntoskrnl.exe life time patching
//therefore it is not safe because of Patch Guard
//

//#define USE_VIDDLL_FUNCTIONS


#define DUMP_COMMENT_STRING "Hyper-V Memory Dump. (c) 2010 MoonSols SARL <http://www.moonsols.com>"


//
// memoryblock.c
//

BOOL
MmWriteVirtualAddress(
    PHVDD_PARTITION PartitionEntry,
    ULONG64 Va,
    PVOID Buffer,
    ULONG Size
);

//
// dump.c
//
BOOLEAN
DumpVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ LPCWSTR DestinationFile
);

BOOLEAN
DumpLiveVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry
);

BOOLEAN
DumpCrashVirtualMachine(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ LPCWSTR DestinationFile
);

//
// file.c
//
BOOL
CreateDestinationFile(
    LPCWSTR Filename,
    PHANDLE Handle
);

BOOL
WriteFileSynchronous(
    HANDLE Handle,
    PVOID Buffer,
    ULONG NbOfBytesToWrite
);

//
// kd.c
//


BOOL
LaunchKd(
	LPCWSTR DumpFile,
	PHVDD_PARTITION PartitionEntry
);

BOOLEAN
LaunchWinDbg(
	PHVDD_PARTITION PartitionEntry
);

BOOLEAN
LaunchWinDbgX(
	PHVDD_PARTITION PartitionEntry
);

//
// misc.c
//

BOOL
GetMmNonPagedPoolLimit(
    PULONG64 MmNonPagedPoolStart,
    PULONG64 MmNonPagedPoolEnd
);

VOID
White(
    LPCWSTR Format,
    ...
);

VOID
Red(
    LPCWSTR Format,
    ...
);

VOID
Green(
    LPCWSTR Format,
    ...
);

USHORT
GetConsoleTextAttribute(
    HANDLE hConsole
);

//
// dump.c
//

PDUMP_HEADER64
DumpFillHeader64(
    PHVDD_PARTITION PartitionEntry
);

BOOLEAN
DumpFillHeader(
    PHVDD_PARTITION PartitionEntry,
    PVOID *Header,
    PULONG HeaderSize
);

//
//hooker.c
//

BOOL
HookKd(
    HANDLE ProcessHandle,
    ULONG ProcessId,
    PHVDD_PARTITION PartitionEntry
);

extern BOOLEAN UseWinDbg;
extern BOOLEAN UseWinDbgX;
extern BOOLEAN UseEXDi;