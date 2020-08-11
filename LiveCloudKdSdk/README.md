# LiveCloudKdSdk v0.2.0

LiveCloudSDK is plugin for working with Microsoft Hyper-V virtual machines memory. It was developed during 
Microsoft Windows Defender Application Guard research and therefore support Windows 10, build 1803 and above 
(Windows Sandbox was tested too in Windows 10 Preview build 18362.19h1_release and Windows Server 2019 march 2019 updates).
Part of code was taken from LiveCloudKd project https://github.com/comaeio/LiveCloudKd by Matt Suiche (@msuiche).

So it was developed, because Microsoft broke vid.dll API (probably, because of one careless report to MSRC). 
Therefore some part of code is not open-sourced because, it use some internal vid.sys structures and code from other not open-sourced utilities.

### LiveCloudSDK supports 3 methods of reading Hyper-V Memory and 1 writing.

1. ReadInterfaceWinHv\WriteInterfaceWinHv - uses Hypercalls HvReadGpa for memory reading\HvWriteGpa for writing. According Hyper-V TLFS HvReadGpa\HvWriteGpa can read\write only 
maximum 0x10 bytes per call, therefore it slowest method (but robust - Sysinternals LiveKD uses it). Containers doesn't support it.  
                
2. ReadInterfaceHvmmDrvInternal - hvmm.sys directly read memory blocks from kernel mode. It uses internals vid.sys structures 
and different methods for FullVM and Hyper-V Containers (WDAG and Windows Sandbox, docker containers, launching with --isolation=hyperv option). 
Of course, it can be broken during every patch of vid.sys, but now it works with new version of vid.sys without patching.

3. ReadInterfaceVidAux - uses vidaux.dll, which is injected to vmwp.exe.

ReadInterfaceVidDll\WriteInterfaceVidDll - only for testing purposes!! Do not use it real environment. Method patch windows kernel for removing PsGetCurrentProcess check,
which blocks every query for every process excluding parent vmwp.exe process. It need special hvmm.sys assembly for concrete build vid.sys.

Solution was built with Visual Studio 2019.		 

Examples of using LiveCloudSDK you can see in LiveCloudKd projects and MemProcsFs plugin project. If shortly you need

1. Get list of running Virtual Machines or Hyper-V containers using SdkGetPartitions function. g_MemoryInterfaceType is globally set 
for all project, but method can be specified during SdkHvmmReadVmMemory call

	g_MemoryInterfaceType = ReadInterfaceHvmmDrvInternal;//could be read from cmd parameters
    Partitions = SdkGetPartitions(&PartitionCount, g_MemoryInterfaceType);

2. Next call SdkFillHvddPartitionStructure(&Partitions[VmId])) with selected partition object as parameter
3. Use Sdk functions, which you need (see LiveCloudKdSdkPublic.h for description). Use LiveCloudKdSdkPublicHandle.h for more simple type functions. See LiveCloudKdExample Demo2 for more detailes.
4. Call SdkDestroyPartitions(), when your program is closing.


For using it you hade to:
1. Include header file LiveCloudKdSdkPublic.h in your project. It contains all public function definitions with small descriptions.
2. Include library LiveCloudKdSdk.lib in Visual Studio: Linker-All Options-Additional Dependencies
3. Place LiveCloudKdSdk.dll, hvmm.sys and vidaux.dll in one place with your exe file.

Functions description:

```c

Example:
See more examples in LiveCloudKdExample project.
	
```

#SdkControlVmState

Resume or suspending VM (Action is SuspendVm or ResumeVm).
ActionMethod is SuspendResumePowershell or SuspendResumeWriteSpecRegister.

```c
BOOLEAN
SdkControlVmState(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ VM_STATE_ACTION Action,
	_In_ SUSPEND_RESUME_METHOD ActionMethod
);

Example:

SdkControlVmState(g_CurrentPartition, SuspendVm, SuspendResumePowershell);

SdkControlVmState(g_CurrentPartition, ResumeVm, SuspendResumePowershell);

```

# SdkGetMachineType
Get architecture of guest VM (x86 or AMD64). Plugin support only AMD64 guest VMs

```c

MACHINE_TYPE
SdkGetMachineType(
	_In_ PHVDD_PARTITION PartitionEntry
);


Example:

    if (SdkGetMachineType(PartitionEntry) == MACHINE_X86)
    {
        wprintf(L"MACHINE_X86 is not supported\n");
		Ret = FALSE;
    }
    else if (SdkGetMachineType(PartitionEntry) == MACHINE_AMD64)
    {
		Ret = TRUE;
    }

	
```

# SdkDestroyPartitions
Close and free all objects. Simple call this function, when your program is closing.

```c

Example:

    BOOLEAN
    SdkDestroyPartitions();
	
```
# SdkGetPartitions

Enumerate active Hyper-V partitions.

```c

PHVDD_PARTITION
SdkGetPartitions(
	_Inout_ PULONG PartitionTableCount,
	_In_ READ_MEMORY_METHOD Method
);

Example:
	
    PHVDD_PARTITION Partitions;
	ULONG PartitionCount = 0;

	READ_MEMORY_METHOD g_MemoryInterfaceType = ReadInterfaceHvmmDrvInternal

    Partitions = SdkGetPartitions(&PartitionCount, g_MemoryInterfaceType);

	wprintf(L"   Virtual Machines:\n");
    if (PartitionCount == 0)
    {
        Red(L"   --> No virtual machines running.\n");
        goto Exit;
    }

    for (i = 0; i < PartitionCount; i += 1)
    {
        wprintf(L"    --> [%d] %s (PartitionId = 0x%I64X)\n", i, Partitions[i].VidVmInfo.FriendlyName, Partitions[i].VidVmInfo.PartitionId);
    }

	
```

# SdkFillHvddPartitionStructure
Read KDBG and other useful information form guest Windows kernel and write it to HVDD_PARTITION structure. Input is  PHVDD_PARTITION PartitionEntry with nonempty VidVmInfo field (it filled when SdkGetPartitions->SdkHvmmGetPartitionFriendlyName executed)

```c

BOOLEAN
SdkFillHvddPartitionStructure(
	_Inout_ PHVDD_PARTITION PartitionEntry
);

Example:
    PHVDD_PARTITION Partitions;

	if (SdkFillHvddPartitionStructure(&Partitions[VmId]))
	    DumpCrashVirtualMachine(&Partitions[VmId], DestinationPath);
	else wprintf(L"   Cannot initialize crash dump header.\n");

	
```

# SdkMmGetPhysicalAddress
Get physical address for specifying GVA

```c

PHYSICAL_ADDRESS
SdkMmGetPhysicalAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va
);

Example:

PHYSICAL_ADDRESS ContextPa;
ULONG64 ContextVa;
PHVDD_PARTITION PartitionEntry;

ContextPa = SdkMmGetPhysicalAddress(PartitionEntry, ContextVa);

	
```

# SdkMmReadVirtualAddress

Read bytes from guest virtual address (Va) to (Buffer)

```c

BOOLEAN
SdkMmReadVirtualAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va,
	_Out_ PVOID Buffer,
	_In_ ULONG Size //in bytes
);

Example:

PHVDD_PARTITION PartitionEntry;
PUCHAR Buffer = NULL;

Buffer = malloc(sizeof(CONTEXT));
    if (Buffer == NULL) {
        printf("malloc (CONTEXT) failed\n");
        return FALSE;
    } 

Ret = SdkMmReadVirtualAddress(PartitionEntry,
        (ULONG64)PartitionEntry->KiExcaliburData.Context, // it contains GVA of CONTEXT structure from KiProcessorBlock
        Buffer,
		sizeof(CONTEXT));

```

# SdkMmWriteVirtualAddress
Write bytes to guest address space, sarting from (Va), data gets from (Buffer)

```c

BOOLEAN
SdkMmWriteVirtualAddress(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ ULONG64 Va,
	_Out_ PVOID Buffer,
	_In_ ULONG Size
);

Example (See EXDiKdSample project for demo):

bWriteMemmory = SdkMmWriteVirtualAddress(g_Partition, address, pRawBuffer, (ULONG)size);


```

# SdkHvmmReadPhysicalMemory


Common function for reading memory. In dependency of Method read guest Hyper-V memory using different  variants
	- ReadInterfaceWinHv,                  
	- ReadInterfaceHvmmDrvInternal,		 
	- ReadInterfaceVidDll (only for testing purposes)	
	- ReadInterfaceVidAux

```c

BOOLEAN
SdkHvmmReadPhysicalMemory(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 ReadByteCount,
	_Inout_ PVOID ClientBuffer,
	_In_ READ_MEMORY_METHOD Method
);

Example:
		
    #define BLOCK_SIZE (1024 * 1024)
    PHVDD_PARTITION PartitionEntry;
    ULONG64 Index; //GPA, f.e. 0x164000 (some CR3 value)
    READ_MEMORY_METHOD g_MemoryInterfaceType = ReadInterfaceHvmmDrvInternal;
        
    Buffer = malloc(sizeof(BLOCK_SIZE));
    if (Buffer == NULL) {
        printf("malloc (BLOCK_SIZE) failed\n");
        return FALSE;
    } 

	Ret = SdkHvmmReadPhysicalMemory(PartitionEntry,
		Index,
		BLOCK_SIZE,
		Buffer,	
		g_MemoryInterfaceType
	);
	
```

# SdkHvmmWritePhysicalMemory

Common function for writing physical memory. In dependency of Method read guest Hyper-V memory using different variants
		WriteInterfaceWinHv  
		
```c

BOOLEAN
SdkHvmmWritePhysicalMemory(
	_In_ PHVDD_PARTITION PartitionEntry,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 WrittenBytesCount,
	_In_ PVOID ClientBuffer,
	_In_ WRITE_MEMORY_METHOD Method
);

Example (See EXDiKdSample project for demo):

BOOLEAN bResult = FALSE;	
bResult = SdkHvmmWritePhysicalMemory(g_Partition, Address, bufferSize, pRawBuffer, g_MemoryWriteInterfaceType);


	
```

# SdkHvmmReadVpRegister

Read register from guest OS. 

```c

BOOLEAN
SdkHvmmReadVpRegister(ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_REGISTER_NAME RegisterCode,
	_Inout_ PHV_REGISTER_VALUE RegisterValue
);

Example:

	HV_REGISTER_NAME RegisterCode;
    HV_REGISTER_VALUE RegisterValue;
    BOOLEAN bGetVirtualProcessorState;
    
    RegisterCode = HvX64RegisterTr;

	bGetVirtualProcessorState = SdkHvmmReadVpRegister(
		PartitionEntry->VidVmInfo.PartitionId, 
        0, 
        RegisterCode, 
        &RegisterValue);

	
```

# SdkHvmmWriteVpRegister
Write guest OS registers.

```c

BOOLEAN
SdkHvmmWriteVpRegister(
	_In_ ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_REGISTER_NAME RegisterCode,
	_In_ ULONG64 RegisterValue
);

Example (see EXDiKdSample project for demo):

BOOLEAN bGetVirtualProcessorState;

	bGetVirtualProcessorState = SdkHvmmWriteVpRegister(g_Partition->VidVmInfo.PartitionId, 0, RegisterName, RegisterValue);

	
```


# SdkHvmmHvTranslateVA

Translate guest virtual address (GVA) to guest physical address (GPA)

```c

BOOLEAN 
SdkHvmmHvTranslateVA(
	_In_ ULONG64 PartitionId,
	_In_ HV_VP_INDEX VpIndex,
	_In_ HV_TRANSLATE_GVA_CONTROL_FLAGS ControlFlags,
	_In_ HV_GVA_PAGE_NUMBER GvaPage,
	_Inout_ PTRANSLATE_VA_RESULT TranslateResult
);

Example:

	TRANSLATE_VA_RESULT TranslateResult;
    XMM_ALIGN16 HV_GVA_PAGE_NUMBER GvaPage;
    ULONG64 Va;    
    
    GvaPage = Va / PAGE_SIZE; // PAGE_SIZE eq 0x1000
    
      
	Ret = SdkHvmmHvTranslateVA(PartitionEntry->VidVmInfo.PartitionId,
		0,
		HV_TRANSLATE_GVA_VALIDATE_READ,
		GvaPage,
		&TranslateResult);
	
```

# SdkKeFindDbgDataBlock

Return GVA of guest OS KDBG structure and decyphered KDBG block to OutDbgBlock

```c

ULONG64 
SdkKeFindDbgDataBlock(
    _Inout_ PHVDD_PARTITION PartitionEntry,  
    _Inout_ PVOID OutDbgBlock
);

Example:

	PVOID KdbgPage = NULL;
    
    KdbgPage = malloc(PAGE_SIZE);
	RtlZeroMemory(KdbgPage, PAGE_SIZE);

	Va = SdkKeFindDbgDataBlock(PartitionEntry, KdbgPage);
	
```

# SdkHvmmInternalReadMemory

Read guest OS memory using raw access


```c

BOOLEAN SdkHvmmInternalReadMemory(
	_In_ HANDLE PartitionHandle,
	_In_ MB_PAGE_INDEX StartPosition,
	_In_ UINT64 ReadByteCount,
	_Inout_ PVOID ClientBuffer
);

Example:

Same as SdkHvmmReadVmMemory without Method param
	
```

# SdkHvmmHvReadGPA

Read guest OS memory using winhvr.sys access

```c

BOOLEAN SdkHvmmHvReadGPA(
    _In_ ULONG64 PartitionId,
    _In_ MB_PAGE_INDEX StartPosition, 
    _In_ UINT64 ReadByteCount,
    _Inout_ PVOID ClientBuffer
);

Example:

Same as SdkHvmmReadVmMemory without Method param
	
```

# SdkHvmmHvWriteGPA

Write guest OS memory using winhvr.sys interface

```c

BOOLEAN SdkHvmmHvWriteGPA(
	_In_ ULONG64 PartitionId,
	_In_ MB_PAGE_INDEX StartPosition, 
	_In_ UINT64 WrittenBytesCount,
	_In_ PVOID ClientBuffer
);


Example:

	PVOID Buffer = malloc(PAGE_SIZE);
    RtlZeroMemory(Buffer, PAGE_SIZE);
    

	*(PUINT64)(Buffer) = 0x1234567887654321ULL;
	*(PUINT64)((PUINT64)Buffer + 1) = 0x1234567887654321ULL;
	*(PUINT32)((PUINT64)Buffer + 2) = 0x6666;

	Ret = SdkHvmmHvWriteGPA(PartitionEntry->VidVmInfo.PartitionId,
	0x10000,/
	0x24,
	Buffer);

	
```

# SdkHvmmGetPartitionFriendlyName

Get friendly name of virtual machine partition object. For Full VM it equivalent to VM name. For WDAG and Windows Sandbox - 'Virtual machine'

```c

BOOLEAN
SdkHvmmGetPartitionFriendlyName(
    _Inout_ PHVDD_PARTITION PartitionEntry,
    _In_ HANDLE PartitionHandle
);

Example:

 NtStatus = g_NtDll.NtQueryObject(DuplicatedHandle, ObjectNameInformation, pObjectNameInformation,
                                 0, &BytesRet);
        if (NtStatus != STATUS_INFO_LENGTH_MISMATCH) goto Exit;

        pObjectNameInformation = (POBJECT_NAME_INFORMATION)malloc(BytesRet);
        if (pObjectNameInformation == NULL) goto Exit;

        NtStatus = g_NtDll.NtQueryObject(DuplicatedHandle, ObjectNameInformation, pObjectNameInformation,
                                 BytesRet, &BytesRet);
        if (NtStatus != STATUS_SUCCESS) goto Exit;

        if (memcmp(pObjectNameInformation->Name.Buffer, L"\\Device\\000000", sizeof(L"\\Device\\000000") - sizeof(WCHAR)) == 			0)
        {
			//wprintf(L"DuplicatedHandle - %llx\n", (UINT64)DuplicatedHandle);
			if (SdkHvmmGetPartitionFriendlyName(PartitionEntry, DuplicatedHandle) == TRUE)
			{
				Ret = TRUE;
			}
        }
	
```

## function wrapper with Partition internal handle using (see LiveCloudKdExample project for detailes)

# SdkQueryInformation
Get information form Partition object, using handle.

```c

typedef enum _HVDD_INFORMATION_CLASS {
	HvddKdbgData,					//0. Return pointer to PKDDEBUGGER_DATA64
	HvddPartitionFrienldyName,		//1. Return pointer to WCHAR Partition friendly name
	HvddPartitionId,				//2. Return pointer to ULONG64 PartitionId
	HvddVmtypeString,				//3. Return pointer to WCHAR VmTypeString
	HvddStructure,					//4. Return pointer to PHVDD_PARTITION
	HvddKiProcessorBlock,			//5. Return pointer to ULONG64 PHVDD_PARTITION-EXCALIBUR_DATA.KiProcessorBlock
	HvddMmMaximumPhysicalPage		//6. Return pointer to ULONG64 PHVDD_PARTITION-EXCALIBUR_DATA.MmMaximumPhysicalPage
} HVDD_INFORMATION_CLASS;

BOOLEAN SdkQueryInformation(
	_In_ ULONG64 PartitionIntHandle,
	_In_ HVDD_INFORMATION_CLASS HvddInformationClass,
	_Inout_ PVOID HvddInformation
);

Example:

	ULONG64 PartitionId = 0;
	WCHAR* FriendlyNameP = NULL;	
	PULONG64 Partitions;
	ULONG PartitionCount = 0;

	Partitions = SdkGetPartitionsHandle(&PartitionCount, g_InterfaceType, TRUE);

	SdkQueryInformation(Partitions[i], HvddPartitionFrienldyName, &FriendlyNameP);
	SdkQueryInformation(Partitions[i], HvddPartitionId, &PartitionId);
	
```


# SdkGetPartitionsHandle
# SdkFillHvddPartitionStructureHandle
# SdkHvmmReadPhysicalMemoryHandle
# SdkMmReadVirtualAddressHandle
# SdkControlVmStateHandle

Same functionality as function without handle postfix

```c

PULONG64 SdkGetPartitionsHandle(_Inout_ PULONG PartitionTableCount,	_In_ READ_MEMORY_METHOD Method,	_In_ BOOLEAN LoadDriver);
BOOLEAN SdkFillHvddPartitionStructureHandle(_In_ ULONG64 PartitionIntHandle);
BOOLEAN SdkHvmmReadPhysicalMemoryHandle(_In_ ULONG64 PartitionIntHandle, _In_ UINT64 StartPosition, _In_ UINT64 ReadByteCount, _Inout_ PVOID ClientBuffer, _In_ READ_MEMORY_METHOD Method);
BOOLEAN SdkMmReadVirtualAddressHandle(_In_ ULONG64 PartitionIntHandle, _In_ ULONG64 Va, _Out_ PVOID Buffer, _In_ ULONG Size);
BOOLEAN SdkControlVmStateHandle(_In_ ULONG64 PartitionIntHandle, _In_ VM_STATE_ACTION Action, _In_ SUSPEND_RESUME_METHOD ActionMethod);


Example:

See in Demo2 function in LiveCloudKdExample project
	
```