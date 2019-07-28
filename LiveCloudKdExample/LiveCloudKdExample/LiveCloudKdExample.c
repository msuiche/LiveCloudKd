// LiveCloudKdExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LiveCloudKdExample.h"

ULONG64 g_CurrentPartitionIntHandle = 0;
READ_MEMORY_METHOD g_InterfaceType = ReadInterfaceWinHv;

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



BOOLEAN
DumpVirtualMachineHandle(
	_In_ ULONG64 PartitionIntHandle,
	_In_ LPCWSTR DestinationFile
)
{
	HANDLE FileHandle = INVALID_HANDLE_VALUE;

	PVOID Buffer = NULL;

	UINT64 Index;
	BOOLEAN Ret = FALSE;

	ULONG64 lPageCountTotal = 0;
	//GPAR_BLOCK_INFO BlockIndexInfo = { 0 };

	SdkQueryInformation(PartitionIntHandle, HvddMmMaximumPhysicalPage, &lPageCountTotal);

	if (CreateDestinationFile(DestinationFile, &FileHandle) == FALSE) goto Exit;

	Buffer = malloc(DUMP_BLOCK_SIZE);
	if (Buffer == NULL) goto Exit;

	wprintf(L"PageCountTotal = 0x%llx\n", lPageCountTotal);
	wprintf(L"\n"
		L"   Total Size: %d MB\n", (ULONG)(((ULONG)lPageCountTotal * DUMP_PAGE_SIZE) / (1024 * 1024)));
	wprintf(L"   Starting... \n");

	for (Index = 0;
		Index < (ULONG)lPageCountTotal;
		Index += (DUMP_BLOCK_SIZE / DUMP_PAGE_SIZE))
	{
		if (Index % (10 * 1024) == 0) {
			wprintf(L"%I64d MBs... \n", (Index * DUMP_PAGE_SIZE) / (1024 * 1024));
		}


		Ret = SdkHvmmReadPhysicalMemoryHandle(PartitionIntHandle,
			Index,
			DUMP_BLOCK_SIZE,
			Buffer,
			g_InterfaceType
		);
		if (Ret == TRUE) {
			WriteFileSynchronous(FileHandle, Buffer, DUMP_BLOCK_SIZE);
		}
		else
		{
			RtlZeroMemory(Buffer, DUMP_BLOCK_SIZE);
			WriteFileSynchronous(FileHandle, Buffer, DUMP_BLOCK_SIZE);
		}
		//printf("Index = 0x%I64x\n", Index);
	}

	wprintf(L"Done.\n");

	Ret = TRUE;
Exit:
	if (FileHandle != INVALID_HANDLE_VALUE) CloseHandle(FileHandle);

	return Ret;
}


BOOLEAN Demo2()
{
	PULONG64 Partitions;
	ULONG PartitionCount = 0;
	ULONG i;
	ULONG VmId;
	BOOLEAN Ret = FALSE;
	LPCWSTR DestinationPath = NULL;
	WCHAR Destination[MAX_PATH + 1];
	ULONG ActionId = 0;
	ULONG Action = -1;
	ULONG64 PartitionId = 0;
	WCHAR* FriendlyNameP = NULL;

	Partitions = SdkGetPartitionsHandle(&PartitionCount, g_InterfaceType, TRUE);

	wprintf(L"   Virtual Machines:\n");
	if (PartitionCount == 0)
	{
		wprintf(L"   --> No virtual machines running.\n");
		return FALSE;
	}

	for (i = 0; i < PartitionCount; i += 1)
	{
		
		SdkQueryInformation(Partitions[i], HvddPartitionFrienldyName, &FriendlyNameP);

		SdkQueryInformation(Partitions[i], HvddPartitionId, &PartitionId);
		wprintf(L"    --> [%d] %s (PartitionId = 0x%I64X)\n", i, FriendlyNameP, PartitionId);
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
		wprintf(L"ERROR:    The virtual machine you selected do not exist.\n");
		return FALSE;
	}

	wprintf(L"   You selected the following virtual machine: ");

	SdkQueryInformation(Partitions[VmId], HvddPartitionFrienldyName, &FriendlyNameP);

	wprintf(L"%s\n", FriendlyNameP);

	wprintf(L"\n"
		L"   Action List (enter 1 for demo):\n");
	wprintf(L"    --> [1] Linear physical memory dump\n"); // Enter 1 for testing purposes. Save path looks like C:\Distr\Test\Example\test.raw

	if (Action == -1)
	{
		ActionId = 0;
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		wprintf(L"\n"
			L"   Please select the Action ID\n"
			L"   > ");
		while ((ActionId < '0') || (ActionId > '2'))
		{
			ActionId = _getch();
		}

		ActionId = ActionId - 0x30;
	}
	else
	{
		ActionId = Action;
	}

	wprintf(L"%d\n", ActionId);


	if (ActionId != 0)
	{
		wprintf(L"\n"
			L"   Destination path for the virtual machine physical memory dump\n"
			L"   > ");

		if (DestinationPath == NULL)
		{
			_getws_s(Destination, (sizeof(Destination) - sizeof(Destination[0])));
			DestinationPath = Destination;
		}
		else
		{
			wprintf(L"%s\n", DestinationPath);
		}
	}

	g_CurrentPartitionIntHandle = Partitions[VmId];
	//
	//need only for getting value of g_CurrentPartition->KiExcaliburData.KiProcessorBlock for reading API example. Long time proc if g_InterfaceType = ReadInterfaceWinHv. Undocumented ReadInterfaceHvmmDrvInternal is faster and works with Windows Containers.
	//

	if (!SdkFillHvddPartitionStructureHandle(g_CurrentPartitionIntHandle)) {
		wprintf(L"ERROR:    Cannot initialize hvdd structure.\n");
		return FALSE;
	}

	//
	// Reading physical memory
	//

	UINT64 Address = 0;
	ULONG nNumberOfBytesToRead = 4;
	PVOID lpBuffer = malloc(0x1000);

	if (!lpBuffer)
		return FALSE;

	Ret = SdkHvmmReadPhysicalMemoryHandle(g_CurrentPartitionIntHandle, Address, (ULONG)nNumberOfBytesToRead, lpBuffer, g_InterfaceType);

	free(lpBuffer);

	//
	// Reading virtual memory (KiProcessorBlock area)
	//
	ULONG64 Va = 0;
	SdkQueryInformation(g_CurrentPartitionIntHandle, HvddKiProcessorBlock, &Va);
	//ULONG64 Va = 0xFFFFF90012345678ULL;

	lpBuffer = malloc(0x1000);

	if (!lpBuffer)
		return FALSE;

	if (SdkMmReadVirtualAddressHandle(g_CurrentPartitionIntHandle, Va, lpBuffer, sizeof(ULONG64)) == FALSE) {
		wprintf(L"MmReadVirtualAddress failed\n");
		return FALSE;
	}

	printf("_KPROCESSOR_STATE[0]  0x%llx \n", *((PULONG64)lpBuffer));

	free(lpBuffer);

	//
	//Suspend virtual machine
	//

	SdkControlVmStateHandle(g_CurrentPartitionIntHandle, SuspendVm, SuspendResumePowershell);

	//
	//Resume virtual machine
	//

	SdkControlVmStateHandle(g_CurrentPartitionIntHandle, ResumeVm, SuspendResumePowershell);

	//
	//dump VM to file
	//

	if (DestinationPath == NULL)
		return FALSE;

	DumpVirtualMachineHandle(g_CurrentPartitionIntHandle, DestinationPath);

	return TRUE;
}



int main()
{
	//
	//Demo1 uses full PHVDD_PARTITION structure for working with partition. 
	//Demo2 using more simple HANDLE for using with non-C languages.
	//
	
	//Demo1(); 
	Demo2(); 
	getchar();
}
