/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - partition.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - Matthieu Suiche

--*/

#include "hvdd.h"

PHVDD_PARTITION PartitionTable = NULL;
ULONG PartitionCount = 0;
ULONG MaxPartitionCount = 64;

typedef LONG NTSTATUS, *PNTSTATUS;
#define STATUS_SUCCESS (0x00000000)
typedef NTSTATUS(WINAPI* RtlGetVersionPtr)(PRTL_OSVERSIONINFOW);


RTL_OSVERSIONINFOW GetRealOSVersion() {
		HMODULE hMod = GetModuleHandleW(L"ntdll.dll");
		if (hMod) {
			RtlGetVersionPtr fxPtr = GetProcAddress(hMod, "RtlGetVersion");
			if (fxPtr != NULL) {
				RTL_OSVERSIONINFOW rovi = { 0 };
				rovi.dwOSVersionInfoSize = sizeof(rovi);
				if (fxPtr(&rovi) == STATUS_SUCCESS) {
					printf("rovi.dwBuildNumber : %08d\n", rovi.dwBuildNumber);
					printf("rovi.dwMajorVersion : %08d\n", rovi.dwMajorVersion);
					printf("rovi.dwMinorVersion : %08d\n", rovi.dwMinorVersion);
					return rovi;
				}
			}
		}
	RTL_OSVERSIONINFOW rovi = { 0 };	
	return rovi;
}



BOOL

HvlckdGetPartitionFriendlyName(PHVDD_PARTITION PartitionEntry,
	HANDLE PartitionHandle)
{
	LPCWSTR wszPath = L"\\\\.\\hvlckd";
	HANDLE hDevice = INVALID_HANDLE_VALUE;  // handle to the drive to be examined 
	BOOL bResult = FALSE;                 // results flag
	DWORD junk = 0;                     // discard results
	PVOID pOutBuf = NULL;
	DWORD dwOutBufSize = 0x200; //Vid.sys info
	ULONG bytesReturned;

	GetRealOSVersion();
	pOutBuf = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, dwOutBufSize);
	if (!pOutBuf) {
		wprintf(L"HvlckdGetPartitionFriendlyName HeapAlloc error\n");
		return FALSE;
	}
	hDevice = CreateFileW(wszPath,          // drive to open
		GENERIC_READ|GENERIC_WRITE,                
		FILE_SHARE_READ | // share mode
		FILE_SHARE_WRITE,
		NULL,             // default security attributes
		OPEN_EXISTING,    // disposition
		FILE_ATTRIBUTE_NORMAL,                // file attributes
		0);            // do not copy file attributes

	if (!hDevice)    // cannot open the drive
	{
		printf("Error in CreateFile : %x\n", GetLastError());
		return FALSE;
	}

	bResult = DeviceIoControl(hDevice,                       // device to be queried
		IOCTL_GET_FRIENDLY_PARTIION_NAME, // operation to perform
		&PartitionHandle, 
		sizeof(PartitionHandle),                       
		pOutBuf, 
		dwOutBufSize,            // output buffer
		&bytesReturned,                         // # bytes returned
		NULL);          // synchronous I/O
	if (!bResult)
		{
			printf("Error in DeviceIoControl : %08X\n", GetLastError());
			return FALSE;
		}
	printf("Bytes returned : %08X\n", bytesReturned);
	if (bytesReturned > 0) {
		PartitionEntry->PartitionHandle = PartitionHandle;
		RtlCopyMemory(PartitionEntry->FriendlyName, pOutBuf, dwOutBufSize*2);
		//wprintf("VMName: \n", &PartitionEntry->FriendlyName);
		CloseHandle(hDevice);
		return TRUE;
	}
	CloseHandle(hDevice);
	return FALSE;
}



BOOL
GetPartitionFriendlyName(PHVDD_PARTITION PartitionEntry,
                         HANDLE PartitionHandle)
{
BOOL Ret;

    Ret = FALSE;
    RtlZeroMemory(PartitionEntry->FriendlyName, sizeof(PartitionEntry->FriendlyName));

    //Ret = VidGetPartitionFriendlyName(PartitionHandle,
    //                                  PartitionEntry->FriendlyName,
     //                                 sizeof(PartitionEntry->FriendlyName));

    if (Ret == TRUE)
    {
        PartitionEntry->PartitionHandle = PartitionHandle;
    }
	White("You use unfriendly Windows version, where VidGetPartitionFriendlyName is denied\n");

    return Ret;
} 

BOOL
IsPartitionHandle(PHVDD_PARTITION PartitionEntry,
                  HANDLE Handle)
{
POBJECT_TYPE_INFORMATION pObjectTypeInformation;
POBJECT_NAME_INFORMATION pObjectNameInformation;

NTSTATUS NtStatus;
HANDLE DuplicatedHandle;

ULONG BytesRet;

BOOL Ret;

    Ret = FALSE;
    pObjectTypeInformation = NULL;
    pObjectNameInformation = NULL;
    DuplicatedHandle = INVALID_HANDLE_VALUE;

    NtStatus = NtDuplicateObject(PartitionEntry->WorkerHandle, Handle, GetCurrentProcess(),
                                 &DuplicatedHandle, 0, FALSE, DUPLICATE_SAME_ACCESS);

    if (NtStatus != STATUS_SUCCESS)
    {
        goto Exit;
    }

    NtStatus = NtQueryObject(DuplicatedHandle, ObjectTypeInformation, pObjectTypeInformation,
                             0, &BytesRet);
    if (NtStatus != STATUS_INFO_LENGTH_MISMATCH) goto Exit;

    pObjectTypeInformation = (POBJECT_TYPE_INFORMATION)malloc(BytesRet);
    if (pObjectTypeInformation == NULL) goto Exit;

    NtStatus = NtQueryObject(DuplicatedHandle, ObjectTypeInformation, pObjectTypeInformation,
                             BytesRet, &BytesRet);
    if (NtStatus != STATUS_SUCCESS) goto Exit;

    if (lstrcmpW(pObjectTypeInformation->TypeName.Buffer, L"File") == 0)
    {
        NtStatus = NtQueryObject(DuplicatedHandle, ObjectNameInformation, pObjectNameInformation,
                                 0, &BytesRet);
        if (NtStatus != STATUS_INFO_LENGTH_MISMATCH) goto Exit;

        pObjectNameInformation = (POBJECT_NAME_INFORMATION)malloc(BytesRet);
        if (pObjectNameInformation == NULL) goto Exit;

        NtStatus = NtQueryObject(DuplicatedHandle, ObjectNameInformation, pObjectNameInformation,
                                 BytesRet, &BytesRet);
        if (NtStatus != STATUS_SUCCESS) goto Exit;

        if (memcmp(pObjectNameInformation->Name.Buffer, L"\\Device\\000000", sizeof(L"\\Device\\000000") - sizeof(WCHAR)) == 0)
        {
            //
            // GetPartitionFriendlyName() fill PartitionEntry with the PartitionHandle
            // and with the friendly name.
            //
            //if (GetPartitionFriendlyName(PartitionEntry, DuplicatedHandle) == TRUE)
            //{
            //    Ret = TRUE;
            //}
			//HvlckdGetPartitionFriendlyName(PartitionEntry, DuplicatedHandle);
			wprintf(L"DuplicatedHandle - %d\n", (ULONG) DuplicatedHandle);
			if (HvlckdGetPartitionFriendlyName(PartitionEntry, DuplicatedHandle) == TRUE)
			{
				Ret = TRUE;
			}
        }
    }

Exit:
    if (pObjectNameInformation) free(pObjectNameInformation);
    if (pObjectTypeInformation) free(pObjectTypeInformation);
	//too many handle for WDAG vmwp.exe. Probably, uncomment for release 
	//if (Ret == FALSE){
	//	CloseHandle(DuplicatedHandle);
	//}
	return Ret;
}

BOOL
GetPartitionInformation(
    PHVDD_PARTITION PartitionEntry
)
{
    PSYSTEM_HANDLE_INFORMATION pSystemHandleInformation;

    ULONG HandleCount;

    ULONG Size;

    NTSTATUS NtStatus;
    SIZE_T BytesRet;

    SIZE_T NumberOfEntries;

    ULONG Index;

    BOOL Ret;

    Ret = FALSE;
    pSystemHandleInformation = NULL;

    if (PartitionEntry->WorkerPid == 0) goto Exit;

    if (!EnablePrivilege(L"SeDebugPrivilege"))
    {
        wprintf(L"RetrieveVidHandle() - Cannot set debug privilege\n");
        goto Exit;
    }

    HandleCount = GetHandleCount();
    if (HandleCount == 0)
    {
        wprintf(L"Error: RetrieveVidHandle - Count = 0\n");
        goto Exit;
    }

    Size = HandleCount * sizeof(SYSTEM_HANDLE_INFORMATION);
    pSystemHandleInformation = (PSYSTEM_HANDLE_INFORMATION)malloc(Size);
    if (pSystemHandleInformation == NULL)
    {
        wprintf(L"RetrieveVidHandle - malloc(%d) NOT ENOUGH MEMORY\n", Size);
        goto Exit;
    }

    BytesRet = 0;
    NtStatus = NtQuerySystemInformation(SystemHandleInformation,
                                        pSystemHandleInformation,
                                        Size,
                                        &BytesRet);
    if (NtStatus != STATUS_SUCCESS)
    {
        wprintf(L"NtQuerySystemInformation(SystemHandleInformation) Error = %x (%x vs %I64Xx)\n",
                NtStatus, Size, BytesRet);
        goto Exit;
    }

    NumberOfEntries = pSystemHandleInformation->NumberOfHandles;

    PartitionEntry->WorkerHandle = OpenProcessWithId(PartitionEntry->WorkerPid);
    if (PartitionEntry->WorkerHandle == INVALID_HANDLE_VALUE) goto Exit;

    //
    // This loop look for the Partition Handle, and retrieve the Friendly name at the same
    // time.
    //
    for (Index = 0; Index < NumberOfEntries; Index += 1)
    {
        if (pSystemHandleInformation->Handles[Index].UniqueProcessId == PartitionEntry->WorkerPid)
        {
            if (IsPartitionHandle(PartitionEntry,
                                 (HANDLE)pSystemHandleInformation->Handles[Index].HandleValue) == TRUE)
            {
                //
                // if IsPartitionHandle() returns TRUE. PartitionEntry is automatically filled with
                // the duplicated handle.
                //
                break;
            }
        }
    }

    Ret = TRUE;

    if (PartitionEntry->PartitionHandle == INVALID_HANDLE_VALUE) goto Exit;

Exit:
    if (PartitionEntry->WorkerHandle != INVALID_HANDLE_VALUE)
    {
        CloseHandle(PartitionEntry->WorkerHandle);
        PartitionEntry->WorkerHandle = INVALID_HANDLE_VALUE;
    }

    if (pSystemHandleInformation) free(pSystemHandleInformation);

    if (Ret == FALSE)
    {
        RtlZeroMemory(PartitionEntry, sizeof(*PartitionEntry));
    }

    return Ret;
}

PHVDD_PARTITION
GetPartitions(PULONG PartitionTableCount)
{
HANDLE SnapshotHandle = NULL;
PROCESSENTRY32 ProcessEntry;

BOOL Ret;

    Ret = FALSE;

    if (PartitionTable != NULL)
    {
            *PartitionTableCount = PartitionCount;
            return PartitionTable;
    }

    PartitionTable = (PHVDD_PARTITION)malloc(MaxPartitionCount * sizeof(HVDD_PARTITION));
    if (PartitionTable == NULL) goto Exit;
    RtlZeroMemory(PartitionTable, MaxPartitionCount * sizeof(HVDD_PARTITION));


    SnapshotHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if (SnapshotHandle == INVALID_HANDLE_VALUE)
    {
        wprintf(L"EnumPartitions - CreateToolhelp32Snapshot(Error = %d)\n",
                GetLastError());
        goto Exit;
    }

    ProcessEntry.dwSize = sizeof(PROCESSENTRY32);

    if (!Process32First(SnapshotHandle, &ProcessEntry))
    {
        wprintf(L"EnumPartitions - Process32First(Error = %d)\n",
                GetLastError());
        goto Exit;
    }

    while (Process32Next(SnapshotHandle,&ProcessEntry) != 0 )
    {
        if(_wcsicmp(ProcessEntry.szExeFile, L"vmwp.exe") == 0)
        {
            PartitionTable[PartitionCount].WorkerPid = ProcessEntry.th32ProcessID;
            PartitionTable[PartitionCount].PartitionHandle = INVALID_HANDLE_VALUE;
            PartitionTable[PartitionCount].WorkerHandle = INVALID_HANDLE_VALUE;

            if (GetPartitionInformation(&PartitionTable[PartitionCount]) == TRUE)
            {
                PartitionCount += 1;
                if (PartitionCount == MaxPartitionCount)
                {
                    wprintf(L"WARNING: Too many virtual machines !\n");
                    break;
                }
            }
        }
    }

    Ret = TRUE;

Exit:
    if (SnapshotHandle != INVALID_HANDLE_VALUE) CloseHandle(SnapshotHandle);

    if (PartitionCount)
    {
        *PartitionTableCount = PartitionCount;
        return PartitionTable;
    }

    return NULL;
}

BOOL
DestroyPartitions()
{
ULONG i;

    for (i = 0; i < PartitionCount; i += 1)
    {
        free(PartitionTable[i].MemoryBlockTable);
        CloseHandle(PartitionTable[i].PartitionHandle);
    }

    free(PartitionTable);

    return TRUE;
}