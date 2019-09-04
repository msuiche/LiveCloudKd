#include "hvmm.h"

//https://github.com/Zer0Mem0ry/KernelBhop/blob/master/Driver/Driver.c
//https://github.com/Zer0Mem0ry/KernelReadWriteMemory/blob/master/ReadWrite.c



NTSTATUS KeReadProcessMemory(PEPROCESS Process, PVOID SourceAddress, PVOID TargetAddress, SIZE_T Size)
{
	NTSTATUS Status;
	// Since the process we are reading from is the input process, we set
	// the source process variable for that.
	PEPROCESS SourceProcess = Process;
	// Since the "process" we read the output to is this driver
	// we set the target process as the current module.
	PEPROCESS TargetProcess = PsGetCurrentProcess();
	SIZE_T Result;

	Status = MmCopyVirtualMemory(SourceProcess, SourceAddress, TargetProcess, TargetAddress, Size, KernelMode, &Result);

	return Status;
	//if (NT_SUCCESS())
	//	return STATUS_SUCCESS; // operation was successful
	//else
	//	return STATUS_ACCESS_DENIED;
}

//http://alter.org.ua/en/docs/nt_kernel/procaddr/
PVOID
KernelGetProcAddress(
    PVOID ModuleBase,
    PCHAR pFunctionName
)
{
    PVOID pFunctionAddress = NULL;

    __try
    {
        ULONG                 size = 0;
        PIMAGE_EXPORT_DIRECTORY exports = (PIMAGE_EXPORT_DIRECTORY)
            RtlImageDirectoryEntryToData(ModuleBase, TRUE, IMAGE_DIRECTORY_ENTRY_EXPORT, &size);

		PUCHAR                 addr = (PUCHAR)((ULONG64)exports - (ULONG64)ModuleBase);
        PULONG functions = (PULONG)((ULONG64)ModuleBase + exports->AddressOfFunctions);
        PSHORT ordinals = (PSHORT)((ULONG64)ModuleBase + exports->AddressOfNameOrdinals);
        PULONG names = (PULONG)((ULONG64)ModuleBase + exports->AddressOfNames);
        ULONG  max_name = exports->NumberOfNames;
        ULONG  max_func = exports->NumberOfFunctions;

        ULONG i;

        for (i = 0; i < max_name; i++)
        {
            ULONG ord = ordinals[i];
            if (i >= max_name || ord >= max_func) {
                return NULL;
            }
            if (functions[ord] < (ULONG64)addr || functions[ord] >= (ULONG64)addr + size)
            {
                if (strcmp((PCHAR)ModuleBase + names[i], pFunctionName) == 0)
                {
                    pFunctionAddress = (PVOID)((PCHAR)ModuleBase + functions[ord]);
                    break;
                }
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        pFunctionAddress = NULL;
    }

    return pFunctionAddress;
} // end KernelGetProcAddress()


PVOID FindDrvBaseAddress(PCHAR pModuleName)
{
    ULONG i, ModuleCount;
    PSYSTEM_MODULE_INFORMATION pSystemModuleInformation = NULL;
    ULONG Len = 0;
    PVOID pBuffer;
    PVOID pRet = NULL;
    PVOID pBaseAddress = NULL;
    //const char *sDriverName = "winhv.sys";
    ZwQuerySystemInformation(SystemModuleInformation, &pSystemModuleInformation, 0, &Len);
    KDbgLog("Length ", Len);
    pBuffer = MmAllocateNonCachedMemory(Len);
    KDbgLog16("pBuffer ", (ULONG64)pBuffer);
    if (!pBuffer)
    {
		KDbgPrintString("WindowsGetDriverCodeSection. pBuffer allocation failed");
        return pRet;
    }

    if (ZwQuerySystemInformation(SystemModuleInformation, pBuffer, Len, &Len)) {
		KDbgPrintString("WindowsGetDriverCodeSection. ZwQuerySystemInformation failed");
        MmFreeNonCachedMemory(pBuffer, Len);
        return pRet;
    }

    ModuleCount = *(UINT32*)pBuffer;
    KDbgLog("ModuleCount ", ModuleCount);
    pSystemModuleInformation = (PSYSTEM_MODULE_INFORMATION)((unsigned char*)pBuffer + sizeof(size_t));
    for (i = 0; i < ModuleCount; i++) {
        //DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"pSystemModuleInformation->ImageName = %s\n",pSystemModuleInformation->Module->ImageName);
        if (strstr(pSystemModuleInformation->Module->ImageName, pModuleName)) //driver name is case-sensitive
        {
            DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL, "Driver found = %s\n", pSystemModuleInformation->Module->ImageName);
            pBaseAddress = pSystemModuleInformation->Module->Base;
            KDbgLog16("Base address is ", (ULONG64)pBaseAddress);
            pRet = pBaseAddress;
            break;
        }
        pSystemModuleInformation++;
    }
    MmFreeNonCachedMemory(pBuffer, Len);
    return pRet;
}