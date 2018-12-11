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

BOOLEAN
MyVidQueryMemoryBlockMbpCount(
    _In_ HANDLE PartitionHandle,
    _In_ MB_HANDLE MemoryBlockHandle,
    _Out_ PULONG64 PageCountTotal,
    _Out_ PULONG64 PageCountValid
)
{
    PVOID BitMapBuffer;
    pVidDmMemoryBlockQueryTopology VidDmMemoryBlockQueryTopology;
    pVidQueryMemoryBlockMbpCount VidQueryMemoryBlockMbpCount;

    ULONG64 c;

    ULONG BitMapSize = 0;

    BOOLEAN Ret = FALSE;

    BitMapBuffer = malloc(0x20000); // MAX 4GB MAP 0x20000 original
    if (BitMapBuffer == NULL) return FALSE;

    VidDmMemoryBlockQueryTopology = (pVidDmMemoryBlockQueryTopology)GetProcAddress(LoadLibraryW(L"vid.dll"), "VidDmMemoryBlockQueryTopology");

    if (VidDmMemoryBlockQueryTopology == NULL)
    {
        // Hyper-V R2 SP0
        VidQueryMemoryBlockMbpCount = (pVidQueryMemoryBlockMbpCount)GetProcAddress(LoadLibraryW(L"vid.dll"), "VidQueryMemoryBlockMbpCount");
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
        for (BitMapSize = 1; BitMapSize < 0x20000; BitMapSize += 1)
        {
            // Hyper-V R2 SP1

            Ret = VidDmMemoryBlockQueryTopology(PartitionHandle,
                MemoryBlockHandle,
                BitMapBuffer,
                BitMapSize,
                PageCountTotal,
                PageCountValid,
                &c);
            //printf("VidDmMemoryBlockQueryTopology GetLastError %x\n", GetLastError());

            if (Ret == TRUE) {
                printf("VidDmMemoryBlockQueryTopology was succefull\n");
                break;
            }

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

    return !!BitMapSize;
}

BOOLEAN
GetMemoryBlocks(
    _In_ PHVDD_PARTITION PartitionEntry
)
{
    ULONG64 MmNonPagedPoolStart, MmNonPagedPoolEnd;

    PUCHAR BaseAddress, RegionBlock;
    SIZE_T ReturnedLen;
    PULONG64 Buffer = NULL;

    PHVDD_MEMORY_BLOCK Blocks = NULL;
    ULONG MaxBlocks, BlockIndex;
    ULONG i, j;

    ULONG MemoryBlockCount;

    ULONG64 BiggestPageCountTotal;
    ULONG MainMemoryBlockIndex;

    MEMORY_BASIC_INFORMATION mbi = { 0 };
    SYSTEM_INFO si;

    PUCHAR minAddress, maxAddress;

    BOOLEAN Ret = FALSE;

    printf("GetMemoryBlocks()\n");

    MaxBlocks = 1024;
    Blocks = (PHVDD_MEMORY_BLOCK)malloc(sizeof(HVDD_MEMORY_BLOCK) * MaxBlocks);
    if (Blocks == NULL) goto Exit;
    RtlZeroMemory(Blocks, sizeof(HVDD_MEMORY_BLOCK) * MaxBlocks);

    Buffer = (PULONG64)malloc(PAGE_SIZE);
    if (Buffer == NULL) goto Exit;

    Ret = GetMmNonPagedPoolLimit(&MmNonPagedPoolStart, &MmNonPagedPoolEnd);
    if (Ret == FALSE) goto Exit;

    BlockIndex = 0;

    printf("MmNonPagedPoolStart = 0x%llx\n", MmNonPagedPoolStart);
    printf("MmNonPagedPoolEnd = 0x%llx\n", MmNonPagedPoolEnd);
    //
    // Even with x64 architecture we set the limit to 0x8000000. Everything mapped above are
    // executables, dlls, etc.
    // Limit:0x7DF5FFE60000
    //
    GetSystemInfo(&si);
    minAddress = si.lpMinimumApplicationAddress;
    maxAddress = si.lpMaximumApplicationAddress;

    while (minAddress < maxAddress)
    {
        printf("0x%p\n", minAddress);
        if (!VirtualQueryEx(PartitionEntry->WorkerHandle, minAddress, &mbi, sizeof(mbi)))
            printf("[-] VirtualQueryEx() failed. %d\n", GetLastError());
        if (mbi.State == MEM_COMMIT) //&& mbi.Protect == PAGE_READWRITE
        {
            RegionBlock = (PBYTE)mbi.BaseAddress + mbi.RegionSize;
            for (BaseAddress = mbi.BaseAddress; BaseAddress < RegionBlock; BaseAddress += PAGE_SIZE) //remove =
            {
                if (ReadProcessMemory(PartitionEntry->WorkerHandle, BaseAddress, Buffer,
                    (SIZE_T)PAGE_SIZE, &ReturnedLen) == TRUE)
                {
                    //printf("Read - 1 - 0x%p\n", minAddress);
                    for (i = 0; i < (PAGE_SIZE / sizeof(ULONG64)); i += 1)
                    {
                        if ((Buffer[i] >= MmNonPagedPoolStart) && (Buffer[i] < MmNonPagedPoolEnd))
                        {
                            // printf("Read - %d 0x%llx\n", i, Buffer[i]);
                            for (j = 0; j < BlockIndex; j++)
                            {
                                if (Blocks[j].MemoryHandle == (MB_HANDLE)Buffer[i])
                                {
                                    Blocks[j].Hits += 1;
                                    break;
                                }
                            }
                            printf("j == %d\n", j);
                            printf("blockIndex == %d\n", BlockIndex);
                            if ((j == BlockIndex) && (BlockIndex < MaxBlocks))
                            {
                                Blocks[BlockIndex].MemoryHandle = (MB_HANDLE)Buffer[i];
                                Blocks[BlockIndex].Hits = 1;
                                BlockIndex += 1;
                                printf("j == BlockIndex) && (BlockIndex < MaxBlocks), BlockIndex = %d, buffer %d = 0x%llx\n", BlockIndex, i, Buffer[i]);
                            }

                            if (BlockIndex > MaxBlocks)
                            {
                                //
                                // TODO: realloc()
                                //
                                printf("BlockIndex > MaxBlocks \n");
                                goto Exit;
                            }
                        }
                    }
                }
            }
        }
        minAddress = (LPBYTE)mbi.BaseAddress + mbi.RegionSize;
    }

#if 0
    SIZE_T fromAddress, start, end;
    MEMORY_BASIC_INFORMATION mbi = { 0 };
    unsigned char *p = NULL;
    for (p = NULL;
        VirtualQueryEx(PartitionEntry->WorkerHandle, p, &mbi, sizeof(mbi)) == sizeof(mbi);
        p += mbi.RegionSize)
    {
        //std::vector<char> buffer;
        //std::vector<char>::iterator pos;

        if (mbi.State == MEM_COMMIT) //(mbi.Type == MEM_MAPPED || mbi.Type == MEM_PRIVATE)
        {
            start = (unsigned)mbi.BaseAddress;
            end = (unsigned)mbi.BaseAddress + mbi.RegionSize;
            Buffer = (PULONG64)malloc(mbi.RegionSize);
            if (Buffer == NULL) goto Exit;
            if (ReadProcessMemory(PartitionEntry->WorkerHandle, start, Buffer,
                mbi.RegionSize, &ReturnedLen) == TRUE)
            {
                printf("Read - 1 - 0x%llx\n", start);
                for (i = 0; i < (mbi.RegionSize / sizeof(ULONG64)); i += 1)
                {
                    if ((Buffer[i] >= MmNonPagedPoolStart) && (Buffer[i] < MmNonPagedPoolEnd))
                    {
                        printf("Read - %d 0x%llx\n", i, Buffer[i]);
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
                            printf("BlockIndex > MaxBlocks \n");
                            goto Exit;
                        }
                    }
                }
            }
        }
    }

    for (BaseAddress = 0; BaseAddress <= (PUCHAR)0x7DF5FFE60000; BaseAddress += PAGE_SIZE)
    {
        //printf("Read address 0x%llx\n", BaseAddress);
        if (ReadProcessMemory(PartitionEntry->WorkerHandle, BaseAddress, Buffer,
            (SIZE_T)PAGE_SIZE, &ReturnedLen) == TRUE)
        {
            //printf("Read - 1 - 0x%llx\n", BaseAddress);
            for (i = 0; i < (PAGE_SIZE / sizeof(ULONG64)); i += 1) // i < 0x400
            {
                if ((Buffer[i] >= MmNonPagedPoolStart) && (Buffer[i] < MmNonPagedPoolEnd))
                {
                    printf("Buffer between MmNonPagedPoolStart_End - %d 0x%llx\n", i, Buffer[i]);
                    for (j = 0; j < BlockIndex; j++) //check block duplicates
                    {
                        if (Blocks[j].MemoryHandle == (MB_HANDLE)Buffer[i])
                        {
                            Blocks[j].Hits += 1;
                            break;
                        }
                    }

                    printf("j == %d\n", j);
                    printf("blockIndex == %d\n", BlockIndex);
                    if ((j == BlockIndex) && (BlockIndex < MaxBlocks)) //if block is original
                    {
                        Blocks[BlockIndex].MemoryHandle = (MB_HANDLE)Buffer[i];
                        Blocks[BlockIndex].Hits = 1;
                        BlockIndex += 1;
                        printf("j == BlockIndex) && (BlockIndex < MaxBlocks), BlockIndex = %d, buffer %d = 0x%llx\n", BlockIndex, i, Buffer[i]);

                    }

                    if (BlockIndex > MaxBlocks)
                    {
                        //
                        // TODO: realloc()
                        //
                        printf("BlockIndex > MaxBlocks \n");
                        goto Exit;
                    }
                }
            }
        }
    }
#endif

    //
    // Validate Memory Block Handles
    //
    MemoryBlockCount = 0;
    BiggestPageCountTotal = 0;
    MainMemoryBlockIndex = 0; //runtime error check

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

            //printf("Blocks[0x%x].PageCountTotal = 0x%llx\n", i, Blocks[i].PageCountTotal);
            printf("Blocks[0x%x].MemoryHandle=%p\n", i, Blocks[i].MemoryHandle);

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
            PartitionEntry->MemoryBlockTable[j].PageCountTotal = VM_PAGE_COUNT; // HARDCODED HACK

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
MmGetPhysicalAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va
)
{
    XMM_ALIGN16 UINT64 MemoryBlockPageIndex, MemoryBlockGpaRangeFlags;
    XMM_ALIGN16 HV_GVA_PAGE_NUMBER GvaPage, GpaPage;
    XMM_ALIGN16 HV_TRANSLATE_GVA_RESULT GvaResult;
    XMM_ALIGN16 PVOID Handler;
    PVOID MmioContext;

    PHYSICAL_ADDRESS Pa;

    BOOLEAN Ret;

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

BOOLEAN
MmReadPageAtVirtualAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va,
    _Out_ PVOID Buffer,
    _In_ ULONG Size
)
{
    UINT64 MemoryBlockPageIndex = 0x6666, MemoryBlockGpaRangeFlags = 0x5555;
    HV_GVA_PAGE_NUMBER GvaPage = 0x4321, GpaPage = 0x1234;
    XMM_ALIGN64 HV_TRANSLATE_GVA_RESULT GvaResult = { 9 };
    PVOID Handler = (PVOID)0x1111;
    MB_HANDLE MemoryBlockHandle, i = (MB_HANDLE)0x2222;
    PVOID MmioContext = (PVOID)0x3333;

    BOOLEAN Ret;

    if (Size < PAGE_SIZE) return FALSE;

    //printf("VidTranslateGvaToGpa was called\n");
    //printf(" VidTranslateGvaToGpa.Va = 0x%llx\n", Va);
    //Va = 0xfffff802bb03b530;
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

    if (Ret == FALSE) {
        printf("VidTranslateGvaToGpa false\n");
        return FALSE;
    }

#if 0
    printf("GvaResult.ResultCode = %d\n", GvaResult.ResultCode);
    printf(" VidTranslateGvaToGpa result: 0x%x\n", Ret);

    /*if (GpaPage != 0) {
        printf("  MmReadPageAtVirtualAddress->Va 0x%p\n", Va);
        printf("  GpaPage = 0x%x\n", GpaPage);
        printf("  MemoryBlockPageIndex = 0x%Ix\n", MemoryBlockPageIndex);
        printf("  GvaResult.ResultCode = %d\n", GvaResult.ResultCode);

    }*/
    printf("  Handler = 0x%p\n", Handler);
    printf("  MemoryBlockGpaRangeFlags = 0x%x\n", MemoryBlockGpaRangeFlags);
    MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MemoryBlockTable[PartitionEntry->MainMemoryBlockIndex].MemoryHandle;
    MemoryBlockHandle = (MB_HANDLE)PartitionEntry->MainMemoryBlockIndex;
    printf("MemoryBlockHandle 0x%x\n", PartitionEntry->MainMemoryBlockIndex);
    Ret = FALSE;
    i = 0;
    while (Ret == FALSE) {
        Ret = VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
            //MemoryBlockHandle,
            (MB_HANDLE)i,
            MemoryBlockPageIndex,
            1ULL,
            Buffer,
            Size);
        i = (UINT64)i + 1;
    }
    for (size_t i = 1; i < 0x10; i++)
    {
        Ret = VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
            //MemoryBlockHandle,
            (MB_HANDLE)i,
            MemoryBlockPageIndex,
            1ULL,
            Buffer,
            Size);
        if (Ret == TRUE) {
            //printf("VidReadMemoryBlockPageRange true, handle = 0%x\n",i);
            if (i != 1) {
                printf("VidReadMemoryBlockPageRange Handle is not equal 1, and i = 0%x\n", i);
            }
            return TRUE;
        }
    }
#endif 

    Ret = VidReadMemoryBlockPageRange(PartitionEntry->PartitionHandle,
        //MemoryBlockHandle,
        (MB_HANDLE)1,
        MemoryBlockPageIndex,
        1ULL,
        Buffer,
        Size);

    return Ret;
}

BOOLEAN
MmReadVirtualAddress(
    _In_ PHVDD_PARTITION PartitionEntry,
    _In_ ULONG64 Va,
    _Out_ PVOID Buffer,
    _In_ ULONG Size
)
{
    ULONG BytesReaded;
    PUCHAR InternalBuffer;
    BOOLEAN Ret;

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