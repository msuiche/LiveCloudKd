/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - memoryblock.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#include "hvdd.h"

typedef BOOL (WINAPI *pVidDmMemoryBlockQueryTopology)(HANDLE, MB_HANDLE, PVOID, ULONG, PULONG64, PULONG64, PULONG64);
typedef BOOL (WINAPI *pVidQueryMemoryBlockMbpCount)(HANDLE, MB_HANDLE, PULONG64, PULONG64);

BOOL
MyVidQueryMemoryBlockMbpCount(HANDLE PartitionHandle,
                              MB_HANDLE MemoryBlockHandle,
                              PULONG64 PageCountTotal,
                              PULONG64 PageCountValid)
{
PVOID BitMapBuffer;
pVidDmMemoryBlockQueryTopology VidDmMemoryBlockQueryTopology;
pVidQueryMemoryBlockMbpCount VidQueryMemoryBlockMbpCount;

ULONG64 c;

ULONG BitMapSize;

BOOL Ret;

    BitMapSize = 0;
    Ret = FALSE;

    BitMapBuffer = malloc(0x20000); // MAX 4GB MAP
    if (BitMapBuffer == NULL) return FALSE;

    VidDmMemoryBlockQueryTopology = (pVidDmMemoryBlockQueryTopology)GetProcAddress(LoadLibrary(L"vid.dll"), "VidDmMemoryBlockQueryTopology");

    if (VidDmMemoryBlockQueryTopology == NULL)
    {
        // Hyper-V R2 SP0
        VidQueryMemoryBlockMbpCount = (pVidQueryMemoryBlockMbpCount)GetProcAddress(LoadLibrary(L"vid.dll"), "VidQueryMemoryBlockMbpCount");
        if (VidQueryMemoryBlockMbpCount == NULL)
        {
            // Doh !?
            goto Exit;
        }

        Ret = VidQueryMemoryBlockMbpCount(PartitionHandle,
                                          MemoryBlockHandle,
                                          PageCountTotal,
                                          PageCountValid);
    }
    else
    {
        for (BitMapSize =  1; BitMapSize < 0x20000; BitMapSize += 1)
        {
            // Hyper-V R2 SP1
            if (VidDmMemoryBlockQueryTopology(PartitionHandle,
                                            MemoryBlockHandle,
                                            BitMapBuffer,
                                            BitMapSize,
                                            PageCountTotal,
                                            PageCountValid,
                                            &c) == TRUE) break;

            if (GetLastError() == ERROR_VID_INVALID_MEMORY_BLOCK_HANDLE)
            {
                goto Exit;
            }
        }

        Ret = TRUE;

#if 1
        wprintf(L"    -> BitMapSize %x %d (ErrCode=%x)\n", BitMapSize, GetLastError(), GetLastError());
        wprintf(L"    =>  a=%I64x b=%I64X c=%I64X\n", *PageCountTotal, *PageCountValid, c);
#endif
        Sleep(25);
    }

Exit:
    free(BitMapBuffer);

    return BitMapSize;
}

BOOL
GetMemoryBlocks(
    PHVDD_PARTITION PartitionEntry
)
{
    ULONG64 MmNonPagedPoolStart, MmNonPagedPoolEnd;

    PUCHAR BaseAddress;
    SIZE_T ReturnedLen;
    PULONG64 Buffer;

    PHVDD_MEMORY_BLOCK Blocks;
    ULONG MaxBlocks, BlockIndex;
    ULONG i, j;

    ULONG MemoryBlockCount;

    ULONG64 BiggestPageCountTotal;
    ULONG MainMemoryBlockIndex;

    BOOL Ret;

    Ret = FALSE;

    Blocks = NULL;
    Buffer = NULL;

    // printf("GetMemoryBlocks()\n");

    MaxBlocks = 1024;
    Blocks = (PHVDD_MEMORY_BLOCK)malloc(sizeof(HVDD_MEMORY_BLOCK) * MaxBlocks);
    if (Blocks == NULL) goto Exit;
    RtlZeroMemory(Blocks, sizeof(HVDD_MEMORY_BLOCK) * MaxBlocks);

    Buffer = (PULONG64)malloc(PAGE_SIZE);
    if (Buffer == NULL) goto Exit;

    Ret = GetMmNonPagedPoolLimit(&MmNonPagedPoolStart, &MmNonPagedPoolEnd);
    if (Ret == FALSE) goto Exit;

    BlockIndex = 0;

    // printf("MmNonPagedPoolStart = 0x%llx\n", MmNonPagedPoolStart);
    // printf("MmNonPagedPoolEnd = 0x%llx\n", MmNonPagedPoolEnd);
    //
    // Even with x64 architecture we set the limit to 0x8000000. Everything mapped above are
    // executables, dlls, etc.
    // Limit:0x7DF5FFE60000
    //
    for (BaseAddress = 0; BaseAddress <= (PUCHAR)0x7DF5FFE60000; BaseAddress += PAGE_SIZE)
    {
        if (ReadProcessMemory(PartitionEntry->WorkerHandle, BaseAddress, Buffer,
                              (SIZE_T)PAGE_SIZE, &ReturnedLen) == TRUE)
        {
            // printf("Read - 1 - 0x%llx\n", BaseAddress);
            for (i = 0; i < (PAGE_SIZE / sizeof(ULONG64)); i += 1)
            {
                if ((Buffer[i] >= MmNonPagedPoolStart) && (Buffer[i] < MmNonPagedPoolEnd))
                {
                    for (j = 0; j < BlockIndex; j++)
                    {
                        if (Blocks[j].MemoryHandle == (MB_HANDLE)Buffer[i])
                        {
                            Blocks[j].Hits += 1;
                            break;
                        }
                    }

                    if ((j == BlockIndex) && (BlockIndex < MaxBlocks))
                    {
                        Blocks[BlockIndex].MemoryHandle = (MB_HANDLE)Buffer[i];
                        Blocks[BlockIndex].Hits = 1;
                        BlockIndex += 1;
                    }

                    if (BlockIndex > MaxBlocks)
                    {
                        //
                        // TODO: realloc()
                        //
                        goto Exit;
                    }
                }
            }
        }
    }

    //
    // Validate Memory Block Handles
    //
    MemoryBlockCount = 0;
    BiggestPageCountTotal = 0;

    // if (!BlockIndex) return FALSE;
    printf("BlockIndex = %d\n", BlockIndex);

    if (BlockIndex == 0) return FALSE;

    for (i = 0; i < BlockIndex; i += 1)
    {
        ULONG64 PageCountTotal, PageCountValid;

        /*
        if (VidQueryMemoryBlockMbpCount(PartitionEntry->PartitionHandle,
                                        (MB_HANDLE)Blocks[i].MemoryHandle,
                                        &PageCountTotal,
                                        &PageCountValid))
        */
        if (MyVidQueryMemoryBlockMbpCount(PartitionEntry->PartitionHandle,
                                          (MB_HANDLE)Blocks[i].MemoryHandle,
                                          &PageCountTotal,
                                          &PageCountValid))
        {
            Blocks[i].IsMemoryBlock = TRUE;
            Blocks[i].PageCountTotal = PageCountTotal;

            printf("Blocks[0x%x].PageCountTotal = 0x%llx\n", i, Blocks[i].PageCountTotal);

            MemoryBlockCount += 1;

            if (PageCountTotal > BiggestPageCountTotal)
            {
                BiggestPageCountTotal = PageCountTotal;
                MainMemoryBlockIndex = i;
            }
        }
    }

    //
    // Copy valid memory blocks into the partion entry.
    //
    printf(" PartitionEntry->MemoryBlockCount = 0x%x\n", PartitionEntry->MemoryBlockCount);
    PartitionEntry->MemoryBlockCount = MemoryBlockCount;
    PartitionEntry->MemoryBlockTable = (PHVDD_MEMORY_BLOCK)malloc(MemoryBlockCount * sizeof(HVDD_MEMORY_BLOCK));
    RtlZeroMemory(PartitionEntry->MemoryBlockTable, (MemoryBlockCount * sizeof(HVDD_MEMORY_BLOCK)));
    if (PartitionEntry->MemoryBlockTable == NULL) goto Exit;

    for (i = 0, j = 0; i < BlockIndex; i += 1)
    {
        if (Blocks[i].IsMemoryBlock == TRUE)
        {
            PartitionEntry->MemoryBlockTable[j] = Blocks[i];

            if (i == MainMemoryBlockIndex)
            {
                PartitionEntry->MainMemoryBlockIndex = j;
            }

            j += 1;
        }
    }

    Ret = TRUE;

Exit:
    if (Blocks) free(Blocks);
    if (Buffer) free(Buffer);

    return Ret;
}

PHYSICAL_ADDRESS
MmGetPhysicalAddress(PHVDD_PARTITION PartitionEntry,
                     ULONG64 Va)
{
UINT64 MemoryBlockPageIndex, MemoryBlockGpaRangeFlags;
HV_GVA_PAGE_NUMBER GvaPage, GpaPage;
HV_TRANSLATE_GVA_RESULT GvaResult;
PVOID Handler;
PVOID MmioContext;

PHYSICAL_ADDRESS Pa;

BOOL Ret;

    GvaPage = Va / PAGE_SIZE;
    Pa.QuadPart = 0;

    Ret = VidTranslateGvaToGpa(PartitionEntry->PartitionHandle,
                               0,
                               HV_TRANSLATE_GVA_VALIDATE_READ,
                               GvaPage,
                               &GvaResult,
                               &GpaPage,
                               &MmioContext,
                               &Handler,
                               &MemoryBlockPageIndex,
                               &MemoryBlockGpaRangeFlags);

    if (Ret == TRUE)
    {
        Pa.QuadPart = MemoryBlockPageIndex * PAGE_SIZE;
        Pa.QuadPart += (Va & (PAGE_SIZE - 1));
    }

    return Pa;
}

BOOL
MmReadPageAtVirtualAddress(PHVDD_PARTITION PartitionEntry,
                           ULONG64 Va,
                           PVOID Buffer,
                           ULONG Size)
{
UINT64 MemoryBlockPageIndex, MemoryBlockGpaRangeFlags;

HV_GVA_PAGE_NUMBER GvaPage, GpaPage;
HV_TRANSLATE_GVA_RESULT GvaResult;
PVOID Handler;
MB_HANDLE MemoryBlockHandle;
PVOID MmioContext;

BOOL Ret;

    if (Size < PAGE_SIZE) return FALSE;

    GvaPage = Va / PAGE_SIZE;

    Ret = VidTranslateGvaToGpa(PartitionEntry->PartitionHandle,
                               0,
                               HV_TRANSLATE_GVA_VALIDATE_READ,
                               GvaPage,
                               &GvaResult,
                               &GpaPage,
                               &MmioContext,
                               &Handler,
                               &MemoryBlockPageIndex,
                               &MemoryBlockGpaRangeFlags);

    if (Ret == FALSE) return FALSE;

    MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].MemoryHandle;
    Ret = VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
                                      MemoryBlockHandle,
                                      MemoryBlockPageIndex,
                                      1ULL,
                                      Buffer,
                                      Size);

    return Ret;
}

BOOL
MmReadVirtualAddress(PHVDD_PARTITION PartitionEntry,
                     ULONG64 Va,
                     PVOID Buffer,
                     ULONG Size)
{
ULONG BytesReaded;

BOOL Ret;

PUCHAR InternalBuffer;

    BytesReaded = 0;

    memset(Buffer, 0, Size);

    InternalBuffer = (PUCHAR)malloc(ROUND_PAGE(Size));
    if (InternalBuffer == NULL) goto Exit;

    while (BytesReaded < ROUND_PAGE(Size))
    {
        Ret = MmReadPageAtVirtualAddress(PartitionEntry,
                                         Va + BytesReaded,
                                         InternalBuffer + BytesReaded,
                                         PAGE_SIZE);

        if (Ret == FALSE) goto Exit;

        BytesReaded += PAGE_SIZE;
    }

    memcpy_s(Buffer,
             Size,
             InternalBuffer + (Va & (PAGE_SIZE - 1)),
             Size);

Exit:
    if (InternalBuffer) free(InternalBuffer);

    return Ret;
}