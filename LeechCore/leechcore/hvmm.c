// hvmm.c : implementation of the Hyper-V Virtual Machines based on LiveCloudKd
// Please refer to the hvmm/ folder for more information or its original repository:
// https://github.com/comaeio/LiveCloudKd
//
// (c) Ulf Frisk, 2018
// Author: Ulf Frisk, pcileech@frizk.net
//
// (c) Arthur Khudyaev, 2019
// Author: Arthur Khudyaev, @gerhart_x
//
// (c) Matt Suiche, 2019
// Author: Matt Suiche, msuiche@comae.com
//

#include "device.h"
#include "device_hvmm.h"

READ_MEMORY_METHOD g_MemoryReadInterfaceType = ReadInterfaceUnsupported;
WRITE_MEMORY_METHOD g_MemoryWriteInterfaceType = WriteInterfaceWinHv;
PHVDD_PARTITION g_Partition = NULL;

USHORT
GetConsoleTextAttribute(
	_In_ HANDLE hConsole
)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(hConsole, &csbi);
	return(csbi.wAttributes);
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

BOOL HVMMStart(PDEVICE_CONTEXT_HVMM ctx)
{
    PHVDD_PARTITION Partitions;
    ULONG PartitionCount = 0;

    ULONG i;
    ULONG VmId;

        wprintf(L"      LiveCloudKd plugin 0.1.20190726\n"
        L"      Microsoft Hyper-V Virtual Machine plugin (supports only x64 guest Windows 10 and Windows Server 2019) for MemProcFS (by Ulf Frisk)\n"
        L"      Based on LiveCloudKd of http://www.comae.com" 
        L"      Copyright (C) 2019, Matthieu Suiche (@msuiche)\n"
        L"      Copyright (C) 2019, Comae Technologies DMCC <http://www.comae.com> <support@comae.io>\n"
        L"      All rights reserved.\n\n"

        L"      Contributor:  Arthur Khudyaev (@gerhart_x)\n\n\n"
        L"");


		g_MemoryReadInterfaceType = ReadInterfaceHvmmDrvInternal;
        Partitions = SdkGetPartitions(&PartitionCount, g_MemoryReadInterfaceType, FALSE);

        wprintf(L"   Virtual Machines:\n");
        if (PartitionCount == 0)
        {
            vprintf("ERROR:    --> No virtual machines running.\n");
            return FALSE;
        }

		for (i = 0; i < PartitionCount; i += 1)
		{
			wprintf(L"    --> [%d] %s (PartitionId = 0x%I64X, %s)\n", i, Partitions[i].VidVmInfo.FriendlyName, Partitions[i].VidVmInfo.PartitionId, Partitions[i].VmTypeString);
		}

        VmId = 0;
        while ((VmId < '0') || (VmId > '9'))
        {
            wprintf(L"\n"
                L"   Please select the ID of the virtual machine you want to play with\n"
                L"   > ");
            VmId = _getch();
        }
        VmId = VmId - 0x30;
        wprintf(L"%d\n", VmId);

        if ((VmId + 1) > PartitionCount)
        {
            vprintf("ERROR:    The virtual machine you selected do not exist.\n");
            return FALSE;
        }

        wprintf(L"   You selected the following virtual machine: ");

        Green(L"%s\n", Partitions[VmId].VidVmInfo.FriendlyName);

		g_Partition = &Partitions[VmId];
		
		if (g_MemoryReadInterfaceType == ReadInterfaceVidDll) {

			BOOLEAN Ret = SdkHvmmPatchPsGetCurrentProcess(Partitions[VmId].WorkerPid, Partitions[VmId].CurrentProcess);
			if (!Ret) {
				wprintf(L"Error: Can't fix PsGetCurrentProcess\n");
				return FALSE;
			}
		}

		if (!SdkFillHvddPartitionStructure(&Partitions[VmId])) {
			vprintf("ERROR:    Cannot initialize hvdd structure.\n");
			return FALSE;
		}
			
 
        ctx->Partition = &Partitions[VmId];
        ctx->paMax = Partitions[VmId].KiExcaliburData.MmMaximumPhysicalPage*PAGE_SIZE;

        //
        //Get KPCR for every processor
        //

        for (size_t i = 0; i < Partitions[VmId].KiExcaliburData.NumberProcessors; i++)
        {
           
            ctx->MemoryInfo.KPCR[i].QuadPart = Partitions[VmId].KiExcaliburData.KPCRVa[i];
        }
        
        ctx->MemoryInfo.KDBG = Partitions[VmId].KiExcaliburData.KdDebuggerDataBlockPa;
      
        ctx->MemoryInfo.NumberOfRuns.QuadPart = Partitions[VmId].KiExcaliburData.NumberOfRuns;
        ctx->MemoryInfo.KernBase.QuadPart = Partitions[VmId].KiExcaliburData.KernelBase;
        ctx->MemoryInfo.PfnDataBase = SdkMmGetPhysicalAddress(&Partitions[VmId], Partitions[VmId].KiExcaliburData.MmPfnDatabase);
        ctx->MemoryInfo.PsLoadedModuleList = SdkMmGetPhysicalAddress(&Partitions[VmId], Partitions[VmId].KiExcaliburData.PsLoadedModuleList);
        ctx->MemoryInfo.PsActiveProcessHead = SdkMmGetPhysicalAddress(&Partitions[VmId], Partitions[VmId].KiExcaliburData.PsActiveProcessHead);
        ctx->MemoryInfo.NtBuildNumber.LowPart = Partitions[VmId].KiExcaliburData.NtBuildNumber;
        ctx->MemoryInfo.NtBuildNumberAddr.QuadPart = Partitions[VmId].KiExcaliburData.NtBuildNumberVA;
        ctx->MemoryInfo.CR3.QuadPart = Partitions[VmId].KiExcaliburData.DirectoryTableBase;

        RtlCopyMemory(&ctx->MemoryInfo.Run, Partitions[VmId].KiExcaliburData.Run, Partitions[VmId].KiExcaliburData.NumberOfRuns*sizeof(ULONG64)*3+sizeof(ULONG64)*3);

        //convert pages to address

        for (i = 0; i < Partitions[VmId].KiExcaliburData.NumberOfRuns; i++)
        {
            ctx->MemoryInfo.Run[i].start = ctx->MemoryInfo.Run[i].start * PAGE_SIZE;
			ctx->MemoryInfo.Run[i].length = ctx->MemoryInfo.Run[i].length * PAGE_SIZE;
        }

        return TRUE;
}


BOOLEAN HVMM_ReadFile(PHVDD_PARTITION PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToRead)
{
	BOOLEAN Ret = FALSE;
	
	Ret = SdkHvmmReadPhysicalMemory(PartitionHandle, StartPosition, (ULONG) nNumberOfBytesToRead, lpBuffer,g_MemoryReadInterfaceType);

	return Ret;
}

BOOLEAN HVMM_WriteFile(PHVDD_PARTITION PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToWrite)
{
	BOOLEAN Ret = FALSE;

	Ret = SdkHvmmWritePhysicalMemory(PartitionHandle, StartPosition, nNumberOfBytesToWrite, lpBuffer, g_MemoryWriteInterfaceType);

	return Ret;
}