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
#define _AMD64_

#include <windows.h>      /* Declare Windows Headers like you normally would */
// #include <ntndk.h>        /* Declare the NDK Headers */

#include <stdio.h>
#include <tlhelp32.h>
#include <stdlib.h> 
#include <conio.h>

#include <dbghelp.h>
#include <wdbgexts.h>

#include "ntdefs.h"
#include "dbg.h"
#include "vid/vid.h"
#include "dmp.h"

#include "hooker.h"


#define IOCTL_GET_FRIENDLY_PARTIION_NAME CTL_CODE(\
	FILE_DEVICE_UNKNOWN, 0x820, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define VID_PARTITION_FRIENDLY_NAME_MAX (256)
#define HANDLE_COUNT_DELTA (512)

#define BLOCK_SIZE (1024 * 1024)

#define LARGE_PAGE_SIZE 0x1000

typedef struct _HVDD_MEMORY_BLOCK {
    MB_HANDLE MemoryHandle;
    USHORT Hits;
    BOOLEAN IsMemoryBlock;
    ULONG64 PageCountTotal;
} HVDD_MEMORY_BLOCK, *PHVDD_MEMORY_BLOCK;

typedef struct _HVDD_PARTITION {
    HANDLE PartitionHandle;
    HANDLE WorkerHandle;
    ULONG WorkerPid;
    WCHAR FriendlyName[VID_PARTITION_FRIENDLY_NAME_MAX];
    ULONG MemoryBlockCount;
    ULONG MainMemoryBlockIndex;
    PHVDD_MEMORY_BLOCK MemoryBlockTable;
    EXCALIBUR_DATA KiExcaliburData;
} HVDD_PARTITION, *PHVDD_PARTITION;

#define XMM_ALIGN16 __declspec(align(16)) 
#define XMM_ALIGN64 __declspec(align(64)) 

#define DUMP_COMMENT_STRING "Hyper-V Memory Dump. (c) 2010 MoonSols SARL <http://www.moonsols.com>"

//
// partition.c
//
PHVDD_PARTITION
GetPartitions(
    _Out_ PULONG PartitionTableCount
);

BOOLEAN
DestroyPartitions(
    VOID
);

//
// memoryblock.c
//
BOOLEAN
GetMemoryBlocks(
    _Inout_ PHVDD_PARTITION PartitionEntry
);

BOOLEAN
MmReadPageAtVirtualAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va,
    _Out_ PVOID Buffer,
    _In_ ULONG Size
);

BOOLEAN
MmReadVirtualAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va,
    _Out_ PVOID Buffer,
    _In_ ULONG Size
);

PHYSICAL_ADDRESS
MmGetPhysicalAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va
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
BOOLEAN
CreateDestinationFile(
    _In_ LPCWSTR Filename,
    _Out_ PHANDLE Handle
);

BOOLEAN
WriteFileSynchronous(
    _In_ HANDLE Handle,
    _In_ PVOID Buffer,
    _In_ ULONG NbOfBytesToWrite
);

//
// kd.c
//
BOOLEAN
KdFindDbgDataBlock(
    _In_ PHVDD_PARTITION PartitionEntry
);

//
// misc.c
//
BOOLEAN
EnablePrivilege(
    _In_ WCHAR *PrivilegeName
);

ULONG
GetHandleCount(
    VOID
);

HANDLE
OpenProcessWithId(
    _In_ ULONG ProcessId
);

BOOLEAN
GetMmNonPagedPoolLimit(
    _Out_ PULONG64 MmNonPagedPoolStart,
    _Out_ PULONG64 MmNonPagedPoolEnd
);

VOID
White(
    _In_ LPCWSTR Format,
    ...
);

VOID
Red(
    _In_ LPCWSTR Format,
    ...
);

VOID
Green(
    _In_ LPCWSTR Format,
    ...
);

USHORT
GetConsoleTextAttribute(
    _In_ HANDLE hConsole
);

//
// dump.c
//
PDUMP_HEADER32
DumpFillHeader32(
    _In_ PHVDD_PARTITION PartitionEntry
);

PDUMP_HEADER64
DumpFillHeader64(
    _In_ PHVDD_PARTITION PartitionEntry
);

BOOLEAN
DumpFillHeader(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ PVOID *Header,
    _In_ PULONG HeaderSize
);

//
// kd.c
//
MACHINE_TYPE
GetMachineType(
    _In_ PHVDD_PARTITION PartitionEntry
);

BOOLEAN
LaunchKd(
    _In_ LPCWSTR DumpFile
);

extern BOOLEAN UseWinDbg;

typedef NTSTATUS(WINAPI* RtlGetVersionPtr)(PRTL_OSVERSIONINFOW);

typedef BOOL(WINAPI *pVidDmMemoryBlockQueryTopology)(HANDLE, MB_HANDLE, PVOID, ULONG, PULONG64, PULONG64, PULONG64);
typedef BOOL(WINAPI *pVidQueryMemoryBlockMbpCount)(HANDLE, MB_HANDLE, PULONG64, PULONG64);