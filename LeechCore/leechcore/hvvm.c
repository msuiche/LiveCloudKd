/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) Matt Suiche. All rights reserved.

Module Name:

    - hvvm.c

Abstract:

    - This header file contains definition used by LiveCloudKd (2010) and open-sourced in December 2018 after
    collaborating with Arthur Khudyaev (@gerhart_x) to revive the project.

    More information can be found on the original repository: https://github.com/comaeio/LiveCloudKd

    Original 2010 blogpost: https://blogs.technet.microsoft.com/markrussinovich/2010/10/09/livekd-for-virtual-machine-debugging/

Environment:

    - User mode

Revision History:

    - Arthur Khudyaev (@gerhart_x) - 26-Jan-2019 - Migration to MemProcFS/LeechCore
    - Matthieu Suiche (@msuiche) 11-Dec-2018 - Open-sourced LiveCloudKd in December 2018 on GitHub
    - Arthur Khudyaev (@gerhart_x) - 28-Oct-2018 - Add partial Windows 10 support
    - Matthieu Suiche (@msuiche) 09-Dec-2010 - Initial version from LiveCloudKd and presented at BlueHat 2010

--*/

//#include "hvvm_hvdd.h"
#include "device.h"
#include "device_hvvm.h"

READ_MEMORY_METHOD g_MemoryInterfaceType = ReadInterfaceUnsupported;
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

BOOL HVVMStart(PDEVICE_CONTEXT_HVVM ctx)
{
    PHVDD_PARTITION Partitions;
    ULONG PartitionCount;
    ULONG64 uMemoryAddressVA;

    ULONG i;
    ULONG VmId;

        wprintf(L"      LiveCloudKd plugin 0.1.20190125\n"
        L"      Microsoft Hyper-V Virtual Machine plugin (supports only x64 guest Win 10) for MemProcFS (by Ulf Frisk)\n"
        L"      Based on LiveCloudKd of http://www.comae.com" 
        L"      Copyright (C) 2019, Matthieu Suiche (@msuiche)\n"
        L"      Copyright (C) 2019, Comae Technologies DMCC <http://www.comae.com> <support@comae.io>\n"
        L"      All rights reserved.\n\n"

        L"      Contributor:  Arthur Khudyaev (@gerhart_x)\n\n\n"
        L"");

        //if (!ImportGlobalFunctions())
        //{
        //    return FALSE;
        //}

		g_MemoryInterfaceType = ReadInterfaceHvmmDrvInternal;
        Partitions = SdkGetPartitions(&PartitionCount, g_MemoryInterfaceType);

        wprintf(L"   Virtual Machines:\n");
        if (PartitionCount == 0)
        {
            vprintf("ERROR:    --> No virtual machines running.\n");
            return FALSE;
        }

        for (i = 0; i < PartitionCount; i += 1)
        {
            wprintf(L"    --> [%d] %s (0x%I64X)\n", i, Partitions[i].VidVmInfo.FriendlyName, Partitions[i].VidVmInfo.PartitionId);
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
		
		if (g_MemoryInterfaceType == ReadInterfaceVidDll) {

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
            
            uMemoryAddressVA = 0;
            if (SdkMmReadVirtualAddress(&Partitions[VmId], Partitions[VmId].KiExcaliburData.KiProcessorBlock, &uMemoryAddressVA, sizeof(ULONG64)) == FALSE)
            {
                vprintf("ERROR: MmReadVirtualAddress(PartitionEntry, PartitionEntry->KiExcaliburData.MmPhysicalMemoryBlock, &hMemDescriptor failed\n");
                return FALSE;
            }

            uMemoryAddressVA = uMemoryAddressVA - Partitions[VmId].KiExcaliburData.OffsetPcrContainedPrcb; //HACK
            ctx->MemoryInfo.KPCR[i].QuadPart = uMemoryAddressVA;
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

		//if (g_MemoryInterfaceType == ReadInterfaceVidDll) {
		//	if (!SdkHvmmRestorePsGetCurrentProcess())	
		//	{
		//		wprintf(L"Error: Can't restore PsGetCurrentProcess\n");
		//		return FALSE;
		//	}
		//}

        RtlCopyMemory(&ctx->MemoryInfo.Run, Partitions[VmId].KiExcaliburData.Run, Partitions[VmId].KiExcaliburData.NumberOfRuns*sizeof(ULONG64)*3+sizeof(ULONG64)*3);

        //convert pages to address

        for (i = 0; i < Partitions[VmId].KiExcaliburData.NumberOfRuns; i++)
        {
            ctx->MemoryInfo.Run[i].start = ctx->MemoryInfo.Run[i].start * PAGE_SIZE;
			ctx->MemoryInfo.Run[i].length = ctx->MemoryInfo.Run[i].length * PAGE_SIZE;
        }

        return TRUE;
}


BOOLEAN HVVM_ReadFile(PHVDD_PARTITION PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToRead)
{
	BOOLEAN Ret = FALSE;
	
	//if (g_MemoryInterfaceType == ReadInterfaceVidDll) {

	//	BOOLEAN Ret = SdkHvmmPatchPsGetCurrentProcess(g_Partition->WorkerPid, g_Partition->CurrentProcess);
	//	if (!Ret) {
	//		wprintf(L"Error: Can't fix PsGetCurrentProcess\n");
	//		return FALSE;
	//	}
	//}
	
	Ret = SdkHvmmReadVmMemory(PartitionHandle, StartPosition, (ULONG) nNumberOfBytesToRead, lpBuffer,g_MemoryInterfaceType);

	//if (g_MemoryInterfaceType == ReadInterfaceVidDll) {
	//	if (!SdkHvmmRestorePsGetCurrentProcess())
	//	{
	//		wprintf(L"Error: Can't restore PsGetCurrentProcess\n");
	//		return FALSE;
	//	}
	//}

	return Ret;
}