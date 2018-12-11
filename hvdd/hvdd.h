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
    BOOL IsMemoryBlock;
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
    PULONG PartitionTableCount
);

BOOL
DestroyPartitions(
);

//
// memoryblock.c
//
BOOL
GetMemoryBlocks(
    PHVDD_PARTITION PartitionEntry
);

BOOL
MmReadPageAtVirtualAddress(
    PHVDD_PARTITION PartitionEntry,
    ULONG64 Va,
    PVOID Buffer,
    ULONG Size
);

BOOL
MmReadVirtualAddress(
    PHVDD_PARTITION PartitionEntry,
    ULONG64 Va,
    PVOID Buffer,
    ULONG Size
);

PHYSICAL_ADDRESS
MmGetPhysicalAddress(
    PHVDD_PARTITION PartitionEntry,
    ULONG64 Va
);

//
// dump.c
//
BOOL
DumpVirtualMachine(
    PHVDD_PARTITION PartitionEntry,
    LPCWSTR DestinationFile
);

BOOL
DumpLiveVirtualMachine(
    PHVDD_PARTITION PartitionEntry
);

BOOL
DumpCrashVirtualMachine(
    PHVDD_PARTITION PartitionEntry,
    LPCWSTR DestinationFile
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
KdFindDbgDataBlock(
    PHVDD_PARTITION PartitionEntry
);

//
// misc.c
//
BOOL
EnablePrivilege(
    WCHAR *PrivilegeName
);

ULONG
GetHandleCount(
);

HANDLE
OpenProcessWithId(
    ULONG ProcessId
);

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
PDUMP_HEADER32
DumpFillHeader32(
    PHVDD_PARTITION PartitionEntry
);

PDUMP_HEADER64
DumpFillHeader64(
    PHVDD_PARTITION PartitionEntry
);

BOOL
DumpFillHeader(
    PHVDD_PARTITION PartitionEntry,
    PVOID *Header,
    PULONG HeaderSize
);

//
// kd.c
//
MACHINE_TYPE
GetMachineType(
    PHVDD_PARTITION PartitionEntry
);

BOOL
LaunchKd(
    LPCWSTR DumpFile
);

extern BOOL UseWinDbg;