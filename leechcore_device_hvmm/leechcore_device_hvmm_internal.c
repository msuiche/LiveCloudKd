// leechcore_device_hvmm_internal.c : implementation for Hyper-V memory access using Hyper-V memory access library
// Please refer to the hvmm/ folder for more information or its original repository:
// https://github.com/gerhart01/LiveCloudKd
//
// (c) Ulf Frisk, 2018-2024
// Author: Ulf Frisk, pcileech@frizk.net
//
// (c) Arthur Khudyaev, 2018-2024
// Author: Arthur Khudyaev, @gerhart_x
//
// (c) Matt Suiche, 2018-2022
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

BOOLEAN AsciiToUnicode(PCHAR Asciistring, PWCHAR Unistring, ULONG unistring_size)
{
	if (!Asciistring | !Unistring)
	{
		wprintf(L"hvlib:string param are NULL \n");
		return FALSE;
	}

	ULONG64 len_a = strlen(Asciistring);

	if (len_a > unistring_size)
		len_a = unistring_size;

	for (ULONG i = 0; i < len_a; i++)
		Unistring[i] = Asciistring[i];

	return TRUE;
}

BOOL HVMMStart(_Inout_ PLC_CONTEXT ctxLC)
{
	PULONG64 Partitions;
	ULONG64 PartitionCount = 0;
	VM_OPERATIONS_CONFIG VmOperationsConfig = { 0 };
	WCHAR* FriendlyNameP = NULL;
	ULONG64 VmNameListLen = 0;
	LPWSTR szVmList = NULL;

	ULONG i;
	ULONG VmId;

	PDEVICE_CONTEXT_HVMM ctx = (PDEVICE_CONTEXT_HVMM)ctxLC->hDevice;

	wprintf(L"\n"
		L"   Microsoft Hyper-V Virtual Machine plugin 1.2.20240319(beta) for MemProcFS (by Ulf Frisk).\n"
		L"\n"
		L"   plugin parameters:\n"
		L"      hvmm://id=<vm id number>\n"
		L"      hvmm://id=<vm id number>,unix\n"
		L"      hvmm://listvm\n"
		L"      hvmm://enumguestosbuild\n"
		L"      hvmm://loglevel=<log level number>\n"
		L"   Example: MemProcFS.exe -device hvmm://listvm\n"
		L"\n");

	SdkGetDefaultConfig(&VmOperationsConfig);

	g_MemoryReadInterfaceType = VmOperationsConfig.ReadMethod;
	g_MemoryWriteInterfaceType = VmOperationsConfig.WriteMethod;

	if (ctx->SimpleMemory)
		VmOperationsConfig.SimpleMemory = TRUE;

	if (ctx->EnumGuestOsBuild)
		VmOperationsConfig.EnumGuestOsBuild = TRUE;

	VmOperationsConfig.ReloadDriver = FALSE;

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

	if (ctx->RemoteMode && ctx->ListVm)
	{

		LPWSTR wszUserText = L"Please select the ID of the virtual machine\n";

		VmNameListLen = PartitionCount * 0x200 + PartitionCount * 4 + 0x200 + sizeof(wszUserText); // vm name + \n	 
		ctx->szVmNamesList = malloc(VmNameListLen);
		szVmList = ctx->szVmNamesList;

		if (!szVmList)
		{
			wprintf(L"   ERROR:    --> Memory allocation for vm names are failed.\n");
			return FALSE;
		}

		RtlZeroMemory(szVmList, VmNameListLen);

		lstrcatW(szVmList, wszUserText);
	}

	//_getch();

	if (ctx->LogLevel)
		VmOperationsConfig.LogLevel = ctx->LogLevel;

	for (i = 0; i < PartitionCount; i += 1)
	{
		ULONG64 PartitionId = 0;
		WCHAR* VmTypeString = NULL;
		char* NtBuildLab = NULL;

		SdkGetData(Partitions[i], HvddPartitionFriendlyName, &FriendlyNameP);
		SdkGetData(Partitions[i], HvddPartitionId, &PartitionId);
		SdkGetData(Partitions[i], HvddVmtypeString, &VmTypeString);
		
		if (ctx->EnumGuestOsBuild){
			SdkSelectPartition(Partitions[i]);
			SdkGetData(Partitions[i], HvddBuilLabBuffer, &NtBuildLab);
		}

		if (PartitionId != 0)
		{
			if (ctx->EnumGuestOsBuild)
			{
				WCHAR unistring[0x50] = { 0 };
				if (AsciiToUnicode(NtBuildLab, unistring, 0x50))
					wprintf(L"    --> [id = %d] %s (PartitionId = 0x%I64X, %s, OS build = %s)\n", i, FriendlyNameP, PartitionId, VmTypeString, unistring);
			}	
			else 
			{
				wprintf(L"    --> [id = %d] %s (PartitionId = 0x%I64X, %s)\n", i, FriendlyNameP, PartitionId, VmTypeString);
			}
					
			if (ctx->RemoteMode && ctx->ListVm)
			{
				WCHAR AscciVmId[0x10] = { 0 };
				lstrcatW(szVmList, L"[id = ");
				wnsprintfW(AscciVmId, 0x10, L"%d", (int)i);
				lstrcatW(szVmList, AscciVmId);
				lstrcatW(szVmList, L"] ");
				lstrcatW(szVmList, FriendlyNameP);
				lstrcatW(szVmList, L"\n");
			}
		}
		else {
			wprintf(L"    --> [id = %d] PartitionId is 0. Probably, it is container or not sucessfully deleted partition\n", i);
		}
	}

	if (ctx->ListVm)
	{
		wprintf(L"   ListVM command was executed\n");
		return TRUE;
	}

	VmId = 0;

	if (ctx->VmidPreselected == TRUE)
	{
		VmId = ctx->Vmid;
	}
	else
	{
		if (PartitionCount <= 9)
		{
			while ((VmId < '0') || (VmId > '9'))
			{
				wprintf(L"\n"
					L"   Please, select the ID of the virtual machine you want to play with\n"
					L"   > ");
				VmId = _getch();
			}
			VmId = VmId - 0x30;
		}
		else
		{
			wprintf(L"\n"
				L"   Please, select the ID of the virtual machine you want to play with and press Enter\n"
				L"   > ");

			CHAR cVmId[0x10] = { 0 };
			int a = scanf_s("%s", cVmId, 0x10);

			if (!IsDigital(ctxLC, cVmId, strlen(cVmId)))
				return FALSE;

			VmId = atoi(cVmId);
		}
		Green(L"   %d\n", VmId);
	}

	if (((ULONG64)VmId + 1) > PartitionCount)
	{
		wprintf(L"ERROR: The virtual machine you selected do not exist. Vmid = %d\n", VmId);
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

	ULONG64 NumberOfCPU = 0;

	SdkGetData(g_Partition, HvddNumberOfCPU, &NumberOfCPU);
	SdkGetData(g_Partition, HvddDirectoryTableBase, &ctx->MemoryInfo.CR3.QuadPart);

	GUEST_TYPE GuestOsType;
	GuestOsType = SdkGetData2(g_Partition, HvddGuestOsType);

	if (GuestOsType == MmStandard) 
	{
		//
		// Get KPCR for every processor
		//

		PULONG64 KPCR = NULL;

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

		ctx->MemoryInfo.PfnDataBase.QuadPart = SdkGetPhysicalAddress(g_Partition, MmPfnDatabase, MmVirtualMemory);
		ctx->MemoryInfo.PsLoadedModuleList.QuadPart = SdkGetPhysicalAddress(g_Partition, PsLoadedModuleList, MmVirtualMemory);
		ctx->MemoryInfo.PsActiveProcessHead.QuadPart = SdkGetPhysicalAddress(g_Partition, PsActiveProcessHead, MmVirtualMemory);

		SdkGetData(g_Partition, HvddNtBuildNumber, &ctx->MemoryInfo.NtBuildNumber.LowPart);
		SdkGetData(g_Partition, HvddNtBuildNumberVA, &ctx->MemoryInfo.NtBuildNumberAddr.QuadPart);

		PULONG64 pRun = NULL;
		SdkGetData(g_Partition, HvddRun, &pRun);

		RtlCopyMemory(&ctx->MemoryInfo.Run, pRun, ctx->MemoryInfo.NumberOfRuns.QuadPart * sizeof(ULONG64) * 3 + sizeof(ULONG64) * 3);

		for (i = 0; i < ctx->MemoryInfo.NumberOfRuns.QuadPart; i++)
		{
			ctx->MemoryInfo.Run[i].start = ctx->MemoryInfo.Run[i].start * PAGE_SIZE;
			ctx->MemoryInfo.Run[i].length = ctx->MemoryInfo.Run[i].length * PAGE_SIZE;
		}
	}
	else 
	{
		ctx->MemoryInfo.Run[0].start = 0;
		ctx->MemoryInfo.Run[0].length = ctx->paMax;
		ctx->MemoryInfo.NumberOfRuns.QuadPart = 1;
	}

	return TRUE;
}


BOOLEAN HVMM_ReadFile(ULONG64 PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToRead)
{
	return SdkReadPhysicalMemory(PartitionHandle, StartPosition, (ULONG) nNumberOfBytesToRead, lpBuffer, g_MemoryReadInterfaceType);
}

BOOLEAN HVMM_WriteFile(ULONG64 PartitionHandle, UINT64 StartPosition, PVOID lpBuffer, UINT64 nNumberOfBytesToWrite)
{
	return SdkWritePhysicalMemory(PartitionHandle, StartPosition, nNumberOfBytesToWrite, lpBuffer, g_MemoryWriteInterfaceType);
}