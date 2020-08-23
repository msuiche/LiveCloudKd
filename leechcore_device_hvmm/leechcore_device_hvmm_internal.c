 // hvmm.c : implementation of the Hyper-V Virtual Machines based on LiveCloudKdSdk
// Please refer to the hvmm/ folder for more information or its original repository:
// https://github.com/comaeio/LiveCloudKd
//
// (c) Ulf Frisk, 2018
// Author: Ulf Frisk, pcileech@frizk.net
//
// (c) Arthur Khudyaev, 2020
// Author: Arthur Khudyaev, @gerhart_x
//
// (c) Matt Suiche, 2019
// Author: Matt Suiche, msuiche@comae.com
//

#include "leechcore_device_hvmm.h"

READ_MEMORY_METHOD g_MemoryReadInterfaceType = ReadInterfaceHvmmDrvInternal;
WRITE_MEMORY_METHOD g_MemoryWriteInterfaceType = WriteInterfaceHvmmDrvInternal;
ULONG64 g_Partition = 0;

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
	PULONG64 Partitions;
    ULONG64 PartitionCount = 0;
	VM_OPERATIONS_CONFIG VmOperationsConfig = { 0 };
	WCHAR* FriendlyNameP = NULL;

    ULONG i;
    ULONG VmId;

        wprintf(L"\n"
				L"   Microsoft Hyper-V Virtual Machine plugin 0.2.20200808 for MemProcFS (by Ulf Frisk).\n"
				L"\n"
				L"   plugin parameters:\n"
				L"      hvmm://id=<vm id number>\n"
				L"      hvmm://listvm\n"
				L"   Example: MemProcFS.exe -device hvmm://listvm\n"	
				L"\n");


		SdkGetDefaultConfig(&VmOperationsConfig);

		g_MemoryReadInterfaceType = VmOperationsConfig.ReadMethod;
		g_MemoryWriteInterfaceType = VmOperationsConfig.WriteMethod;

		VmOperationsConfig.LogLevel = 2;

		Partitions = SdkEnumPartitions(&PartitionCount, &VmOperationsConfig); // driver already was loaded by leechcore

		if (!Partitions)
		{
			wprintf(L"   Unable to get list of partitions\n");
			return FALSE;
		}

        wprintf(L"   Virtual Machines:\n");
        if (PartitionCount == 0)
        {
            wprintf(L"   ERROR:    --> No virtual machines running.\n");
            return FALSE;
        }

		for (i = 0; i < PartitionCount; i += 1)
		{
			ULONG64 PartitionId = 0;
			WCHAR* VmTypeString = NULL;
			SdkGetData(Partitions[i], HvddPartitionFriendlyName, &FriendlyNameP);
			SdkGetData(Partitions[i], HvddPartitionId, &PartitionId);
			SdkGetData(Partitions[i], HvddVmtypeString, &VmTypeString);
			
			wprintf(L"    --> [id = %d] %s (PartitionId = 0x%I64X, %s)\n", i, FriendlyNameP, PartitionId, VmTypeString);
		}

		if (ctx->ListVm)
		{
			wprintf(L"   ListVM command was executed\n");
			return FALSE;
		}

		VmId = 0;

		if (ctx->VmidPreselected == TRUE)
		{
			VmId = ctx->Vmid;
		}
		else
		{
			while ((VmId < '0') || (VmId > '9'))
			{
				wprintf(L"\n"
					L"   Please select the ID of the virtual machine you want to play with\n"
					L"   > ");
				VmId = _getch();
			}
			VmId = VmId - 0x30;
			Green(L"    %d\n", VmId);
		}	

        if (((ULONG64)VmId + 1) > PartitionCount)
        {
            wprintf(L"ERROR:    The virtual machine you selected do not exist. Vmid = %d\n", VmId);
            return FALSE;
        }

        wprintf(L"   You selected the following virtual machine: ");

		SdkGetData(Partitions[VmId], HvddPartitionFriendlyName, &FriendlyNameP);
        Green(L"%s\n", FriendlyNameP);

		g_Partition = Partitions[VmId];

		if (!SdkSelectPartition(g_Partition))
		{
			wprintf(L"ERROR:    Cannot initialize hvdd structure.\n");
			return FALSE;
		};
			
 
        ctx->Partition = g_Partition;

		SdkGetData(g_Partition, HvddMmMaximumPhysicalPage, &ctx->paMax);
        ctx->paMax *= PAGE_SIZE;

        //
        //Get KPCR for every processor
        //

		PULONG64 KPCR = NULL;
		ULONG64 NumberOfCPU = 0;
	
		SdkGetData(g_Partition, HvddNumberOfCPU, &NumberOfCPU);
		SdkGetData(g_Partition, HvddKPCR, &KPCR);

        for (size_t i = 0; i < NumberOfCPU; i++)
        {        			
			ctx->MemoryInfo.KPCR[i].QuadPart = KPCR[i];
        }
        
		SdkGetData(g_Partition, HvddKDBGPa, &ctx->MemoryInfo.KDBG.QuadPart); 
		SdkGetData(g_Partition, HvddNumberOfRuns, &ctx->MemoryInfo.NumberOfRuns.QuadPart);
		SdkGetData(g_Partition, HvddKernelBase, &ctx->MemoryInfo.KernBase.QuadPart); 

		ULONG64 MmPfnDatabase = 0;
		ULONG64 PsLoadedModuleList = 0;
		ULONG64 PsActiveProcessHead = 0;
		SdkGetData(g_Partition, HvddMmPfnDatabase, &MmPfnDatabase);
		SdkGetData(g_Partition, HvddPsLoadedModuleList, &PsLoadedModuleList);
		SdkGetData(g_Partition, HvddPsActiveProcessHead, &PsActiveProcessHead);

        ctx->MemoryInfo.PfnDataBase.QuadPart = SdkGetPhysicalAddress(g_Partition, MmPfnDatabase);
        ctx->MemoryInfo.PsLoadedModuleList.QuadPart = SdkGetPhysicalAddress(g_Partition, PsLoadedModuleList);
        ctx->MemoryInfo.PsActiveProcessHead.QuadPart = SdkGetPhysicalAddress(g_Partition, PsActiveProcessHead);

		SdkGetData(g_Partition, HvddNtBuildNumber, &ctx->MemoryInfo.NtBuildNumber.LowPart);
		SdkGetData(g_Partition, HvddNtBuildNumberVA, &ctx->MemoryInfo.NtBuildNumberAddr.QuadPart);
		SdkGetData(g_Partition, HvddDirectoryTableBase, &ctx->MemoryInfo.CR3.QuadPart);

		PULONG64 pRun = NULL;
		SdkGetData(g_Partition, HvddRun, &pRun);

        RtlCopyMemory(&ctx->MemoryInfo.Run, pRun, ctx->MemoryInfo.NumberOfRuns.QuadPart *sizeof(ULONG64)*3+sizeof(ULONG64)*3);

        //convert pages to address

        for (i = 0; i < ctx->MemoryInfo.NumberOfRuns.QuadPart; i++)
        {
            ctx->MemoryInfo.Run[i].start = ctx->MemoryInfo.Run[i].start * PAGE_SIZE;
			ctx->MemoryInfo.Run[i].length = ctx->MemoryInfo.Run[i].length * PAGE_SIZE;
        }

        return TRUE;
}


BOOLEAN HVMM_ReadFile(ULONG64 PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToRead)
{
	BOOLEAN Ret = FALSE;
	
	Ret = SdkReadPhysicalMemory(PartitionHandle, StartPosition, (ULONG) nNumberOfBytesToRead, lpBuffer, g_MemoryReadInterfaceType);

	return Ret;
}

BOOLEAN HVMM_WriteFile(ULONG64 PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToWrite)
{
	BOOLEAN Ret = FALSE;

	Ret = SdkWritePhysicalMemory(PartitionHandle, StartPosition, nNumberOfBytesToWrite, lpBuffer, g_MemoryWriteInterfaceType);

	return Ret;
}