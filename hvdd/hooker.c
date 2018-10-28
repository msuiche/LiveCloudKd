#include "hvdd.h"

/*
Files that help describe the problem:
  C:\Users\msuiche\AppData\Local\Temp\WER1DF5.tmp.WERInternalMetadata.xml
  C:\Users\msuiche\AppData\Local\Temp\WERCBD1.tmp.appcompat.txt
  C:\Users\msuiche\AppData\Local\Temp\WERD083.tmp.mdmp

Read our privacy statement online:
  http://go.microsoft.com/fwlink/?linkid=104288&clcid=0x0409

If the online privacy statement is not available, please read our privacy statement offline:
  C:\Windows\system32\en-US\erofflps.txt

*/
FUNCTION_TABLE FunctionTable =  {0};

#define PtrFromRva(Base, Rva) (((PBYTE) Base) + Rva )

BOOL
PatchIAT(PVOID ModuleBase,
         LPSTR ImporteModuleName,
         LPSTR FunctionName,
         ULONG64 Address)
{
PIMAGE_DOS_HEADER DosHeader;
PIMAGE_NT_HEADERS NtHeader;
PIMAGE_IMPORT_DESCRIPTOR ImportDescriptor;

ULONG Index;

    DosHeader = (PIMAGE_DOS_HEADER)ModuleBase;

    NtHeader = (PIMAGE_NT_HEADERS)PtrFromRva(DosHeader, DosHeader->e_lfanew);

    if (NtHeader->Signature != IMAGE_NT_SIGNATURE) return FALSE;

    ImportDescriptor = (PIMAGE_IMPORT_DESCRIPTOR)PtrFromRva(DosHeader,
                                                    NtHeader->OptionalHeader.DataDirectory
                                                    [IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

    for (Index = 0;
         ImportDescriptor[Index].Characteristics != 0;
         Index += 1)
    {
        PSTR dllName = (PSTR)PtrFromRva(DosHeader, ImportDescriptor[Index].Name);

        if (_strcmpi(dllName, ImporteModuleName) == 0)
        {
            PIMAGE_THUNK_DATA Thunk;
            PIMAGE_THUNK_DATA OrigThunk;
            PIMAGE_IMPORT_BY_NAME import;

            if (!ImportDescriptor[Index].FirstThunk || !ImportDescriptor[ Index ].OriginalFirstThunk)
            {
                return FALSE;
            }

            Thunk = (PIMAGE_THUNK_DATA )PtrFromRva(DosHeader, ImportDescriptor[Index].FirstThunk);
            OrigThunk = (PIMAGE_THUNK_DATA)PtrFromRva(DosHeader, ImportDescriptor[Index].OriginalFirstThunk);

            for (; OrigThunk->u1.Function != (DWORD)NULL; OrigThunk++, Thunk++)
            {
                if (OrigThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG ) continue;
                import = (PIMAGE_IMPORT_BY_NAME)PtrFromRva( DosHeader, OrigThunk->u1.AddressOfData);

                if (strcmp(FunctionName, (PCHAR)import->Name) ==  0)
                {
                    *((PULONG64)Thunk) = Address;
                    goto Exit;
                }
            }
        }
    }

Exit:
    return TRUE;
}

BOOL
HookKd(HANDLE ProcessHandle, ULONG ProcessId)
{
HANDLE ModuleSnapshot;
MODULEENTRY32 me32;

BOOL Ret;

// HANDLE FileHandle;

    Ret = FALSE;

    ModuleSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, ProcessId);
    if (ModuleSnapshot == INVALID_HANDLE_VALUE) goto Exit;

    me32.dwSize = sizeof(MODULEENTRY32);

    if (!Module32First(ModuleSnapshot, &me32))
    {
        CloseHandle(ModuleSnapshot);
        goto Exit;
    }

    while (Module32Next(ModuleSnapshot, &me32))
    {
        if(_wcsicmp(me32.szModule, L"dbgeng.dll") == 0)
        {
			SIZE_T size;

			PUCHAR Buffer, ModBase, Page;
			ULONG Rights;
			NTSTATUS NtStatus;
			BOOL Status;

			size = (4 * PAGE_SIZE) + FunctionTable.HeaderSize;
			//Buffer = (PUCHAR)0x1;
			Buffer = (PUCHAR)TABLE_OFFSET;
			NtStatus = NtAllocateVirtualMemory(ProcessHandle, &Buffer, 0,
				&size, MEM_RESERVE | MEM_COMMIT | MEM_TOP_DOWN,
				PAGE_EXECUTE_READWRITE);
			if (NtStatus != STATUS_SUCCESS) goto Exit;

			Buffer = (PUCHAR)TABLE_OFFSET;
			Status = WriteProcessMemory(ProcessHandle, Buffer + 4 * PAGE_SIZE, FunctionTable.Header,
				FunctionTable.HeaderSize, &size);
			if (Status != TRUE) goto Exit;

			FunctionTable.Header = (PUCHAR)(Buffer + 4 * PAGE_SIZE);
			Status = WriteProcessMemory(ProcessHandle, TABLE_OFFSET, &FunctionTable, sizeof(FUNCTION_TABLE), &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"CREATEFILE_OFFSET: %08X-%08X\n", (ULONG)CREATEFILE_OFFSET, (ULONG)CREATEFILE_OFFSET + 0x300);
			Status = WriteProcessMemory(ProcessHandle, CREATEFILE_OFFSET, &MyCreateFile, 0x300, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"CREATEFILEMAPPINGA_OFFSET: %08X-%08X\n", (ULONG)CREATEFILEMAPPINGA_OFFSET, (ULONG)CREATEFILEMAPPINGA_OFFSET + 0x100);
			Status = WriteProcessMemory(ProcessHandle, CREATEFILEMAPPINGA_OFFSET, &MyCreateFileMappingA, 0x100, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"CREATEFILEMAPPINGW_OFFSET: %08X-%08X\n", (ULONG)CREATEFILEMAPPINGW_OFFSET, (ULONG)CREATEFILEMAPPINGW_OFFSET + 0x100);
			Status = WriteProcessMemory(ProcessHandle, CREATEFILEMAPPINGW_OFFSET, &MyCreateFileMappingW, 0x100, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"MAPVIEWOFFILE_OFFSET: %08X-%08X\n", (ULONG)MAPVIEWOFFILE_OFFSET, (ULONG)MAPVIEWOFFILE_OFFSET + 0xA00);
			Status = WriteProcessMemory(ProcessHandle, MAPVIEWOFFILE_OFFSET, &MyMapViewOfFile, 0xA00, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"UNMAPVIEWOFFILE_OFFSET: %08X-%08X\n", (ULONG)UNMAPVIEWOFFILE_OFFSET, (ULONG)UNMAPVIEWOFFILE_OFFSET + 0x100);
			Status = WriteProcessMemory(ProcessHandle, UNMAPVIEWOFFILE_OFFSET, &MyUnmapViewOfFile, 0x100, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"GETFILESIZE_OFFSET: %08X-%08X\n", (ULONG)GETFILESIZE_OFFSET, (ULONG)GETFILESIZE_OFFSET + 0x100);
			Status = WriteProcessMemory(ProcessHandle, GETFILESIZE_OFFSET, &MyGetFileSize, 0x100, &size);
			if (Status != TRUE) goto Exit;
			 wprintf(L"VIRTUALPROTECT_OFFSET: %08X-%08X\n", (ULONG)VIRTUALPROTECT_OFFSET, (ULONG)VIRTUALPROTECT_OFFSET + 0x700);
			Status = WriteProcessMemory(ProcessHandle, VIRTUALPROTECT_OFFSET, &MyVirtualProtect, 0x700, &size);
			// Status = WriteProcessMemory(ProcessHandle, VIRTUALPROTECT_OFFSET, "\xCC", 1, &size);
			if (Status != TRUE) goto Exit;

            Page = malloc(me32.modBaseSize);
            if (Page == NULL) goto Exit;

            ModBase = (PUCHAR)me32.modBaseAddr;
            Status = ReadProcessMemory(ProcessHandle, ModBase, Page, me32.modBaseSize, &size);
            if (Status != TRUE)
            {
                free(Page);
                goto Exit;
            }

        /*    PatchIAT(Page, "kernel32.dll", "CreateFileW", (ULONG64)(Buffer+CREATEFILE_OFFSET));
            PatchIAT(Page, "kernel32.dll", "CreateFileMappingA", (ULONG64)(Buffer + CREATEFILEMAPPINGA_OFFSET));
            PatchIAT(Page, "kernel32.dll", "CreateFileMappingW", (ULONG64)(Buffer + CREATEFILEMAPPINGW_OFFSET));
            PatchIAT(Page, "kernel32.dll", "MapViewOfFile", (ULONG64)(Buffer + MAPVIEWOFFILE_OFFSET));
            PatchIAT(Page, "kernel32.dll", "UnmapViewOfFile", (ULONG64)(Buffer + UNMAPVIEWOFFILE_OFFSET));
            PatchIAT(Page, "kernel32.dll", "GetFileSize", (ULONG64)(Buffer + GETFILESIZE_OFFSET));
            PatchIAT(Page, "kernel32.dll", "VirtualProtect", (ULONG64)(Buffer + VIRTUALPROTECT_OFFSET));*/

			PatchIAT(Page, "kernel32.dll", "CreateFileW", (ULONG64)CREATEFILE_OFFSET);
			PatchIAT(Page, "kernel32.dll", "CreateFileMappingA", (ULONG64)CREATEFILEMAPPINGA_OFFSET);
			PatchIAT(Page, "kernel32.dll", "CreateFileMappingW", (ULONG64)CREATEFILEMAPPINGW_OFFSET);
			PatchIAT(Page, "kernel32.dll", "MapViewOfFile", (ULONG64)MAPVIEWOFFILE_OFFSET);
			PatchIAT(Page, "kernel32.dll", "UnmapViewOfFile", (ULONG64)UNMAPVIEWOFFILE_OFFSET);
			PatchIAT(Page, "kernel32.dll", "GetFileSize", (ULONG64)GETFILESIZE_OFFSET);
			PatchIAT(Page, "kernel32.dll", "VirtualProtect", (ULONG64)VIRTUALPROTECT_OFFSET);

            size = 0;
            Status = VirtualProtectEx(ProcessHandle, ModBase, me32.modBaseSize, PAGE_EXECUTE_READWRITE, &Rights);
            if (Status != TRUE)
            {
                free(Page);
                goto Exit;
            }

            Status = WriteProcessMemory(ProcessHandle, ModBase, Page, (SIZE_T)me32.modBaseSize, &size);
            if (Status != TRUE)
            {
                free(Page);
                goto Exit;
            }

            // VirtualProtectEx(ProcessHandle, ModBase, me32.modBaseSize, Rights, &Rights);
#if 0

            Status = ReadProcessMemory(ProcessHandle, NULL, Page, 2 * PAGE_SIZE, &size);
            CreateDestinationFile(L"I:\\Code\\vs2010\\hvdd\\x64\\Release\\LOOL", &FileHandle);
            WriteFileSynchronous(FileHandle, Page, PAGE_SIZE);
            CloseHandle(FileHandle);
#endif
            free (Page);
            Ret = TRUE;
        }
    }

Exit:
    return Ret;
}

HANDLE WINAPI MyCreateFile(
  __in      LPCWSTR lpFileName,
  __in      DWORD dwDesiredAccess,
  __in      DWORD dwShareMode,
  __in_opt  LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  __in      DWORD dwCreationDisposition,
  __in      DWORD dwFlagsAndAttributes,
  __in_opt  HANDLE hTemplateFile
)
{
PFUNCTION_TABLE FT;
#if 0
WCHAR DllName[11];
#endif
ULONG Index;

HANDLE FileHandle;

    //FT = (PFUNCTION_TABLE)NULL;
	FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    for (Index = 0; lpFileName[Index] != L'\0'; Index += 1);

    FileHandle = FT->_CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes,
                                  dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);

    if ((lpFileName[Index - 1] == L'p') &&
        (lpFileName[Index - 2] == L'm') &&
        (lpFileName[Index - 3] == L'd') &&
        (lpFileName[Index - 4] == L'.') &&
        (lpFileName[Index - 5] == L'd') &&
        (lpFileName[Index - 6] == L'd') &&
        (lpFileName[Index - 7] == L'v') &&
        (lpFileName[Index - 8] == L'h'))
    {
#if 0
        DllName[0] = L'u';
        DllName[1] = L's';
        DllName[2] = L'e';
        DllName[3] = L'r';
        DllName[4] = L'3';
        DllName[5] = L'2';
        DllName[6] = L'.';
        DllName[7] = L'd';
        DllName[8] = L'l';
        DllName[9] = L'l';
        DllName[10] = L'\0';

        FT->_LoadLibrary(DllName);
        FT->_MessageBoxW(0, lpFileName, lpFileName, 0);
#endif

        FT->CrashDumpHandle = FileHandle;
    }

    return FileHandle;
}

LPVOID WINAPI MyMapViewOfFile(
  __in  HANDLE hFileMappingObject,
  __in  DWORD dwDesiredAccess,
  __in  DWORD dwFileOffsetHigh,
  __in  DWORD dwFileOffsetLow,
  __in  SIZE_T dwNumberOfBytesToMap
)
{
PFUNCTION_TABLE FT;

WCHAR DllName[8];

PUCHAR Buffer;
LARGE_INTEGER Offset;
ULONG Index;
ULONG i, j;

HMODULE Module;

ULONG64 Position;
ULONG64 NumberOfPages, SizeToMap;

#if 0
WCHAR Str1[9];
WCHAR Str2[9];
WCHAR Alpha[0x11];
ULONG lol;
#endif

PUCHAR C;
PX86_CONTEXT Context32;
PX64_CONTEXT Context64;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

#if 0
    Alpha[0] = L'0';
    Alpha[1] = L'1';
    Alpha[2] = L'2';
    Alpha[3] = L'3';
    Alpha[4] = L'4';
    Alpha[5] = L'5';
    Alpha[6] = L'6';
    Alpha[7] = L'7';
    Alpha[8] = L'8';
    Alpha[9] = L'9';
    Alpha[0xA] = L'a';
    Alpha[0xB] = L'b';
    Alpha[0xC] = L'c';
    Alpha[0xD] = L'd';
    Alpha[0xE] = L'e';
    Alpha[0xF] = L'f';
    Alpha[0x10] = L'\0';
#endif

    if (hFileMappingObject == (HANDLE)0x1337)
    {
		//FT->_MessageBoxW(0, 0, 0, 0);
		if ((dwNumberOfBytesToMap % PAGE_SIZE) != 0)
        {
            return NULL;
        }

        // FT->_MessageBoxW(0, 0, 0, 0);

        Buffer = (PUCHAR)FT->_VirtualAlloc(NULL, dwNumberOfBytesToMap, MEM_COMMIT, PAGE_READWRITE);
        if (Buffer == NULL) return NULL;

        Offset.LowPart = dwFileOffsetLow;
        Offset.HighPart = dwFileOffsetHigh;
        Index = 0;

        if ((Offset.QuadPart == 0ULL) && (dwNumberOfBytesToMap >= FT->HeaderSize))
        {
            for (i = Index; i < FT->HeaderSize; i += 1) Buffer[i] = FT->Header[i];
            Index += FT->HeaderSize;
        }

        DllName[0] = L'v';
        DllName[1] = L'i';
        DllName[2] = L'd';
        DllName[3] = L'.';
        DllName[4] = L'd';
        DllName[5] = L'l';
        DllName[6] = L'l';
        DllName[7] = L'\0';

        Module = FT->_LoadLibrary(DllName);

        Position = (Offset.QuadPart + Index - FT->HeaderSize);
        SizeToMap = dwNumberOfBytesToMap - Index;

        NumberOfPages = SizeToMap / PAGE_SIZE;
        Position /= PAGE_SIZE;

#if 0
		//lol = (ULONG)C; //messagebox dialog box text
		lol = (ULONG)dwFileOffsetLow;
		Str1[7] = Alpha[(UCHAR)(lol & 0xF)];
		Str1[6] = Alpha[(UCHAR)((lol >> 4) & 0xF)];
		Str1[5] = Alpha[(UCHAR)((lol >> 8) & 0xF)];
		Str1[4] = Alpha[(UCHAR)((lol >> 12) & 0xF)];
		Str1[3] = Alpha[(UCHAR)((lol >> 16) & 0xF)];
		Str1[2] = Alpha[(UCHAR)((lol >> 20) & 0xF)];
		Str1[1] = Alpha[(UCHAR)((lol >> 24) & 0xF)];
		Str1[0] = Alpha[(UCHAR)((lol >> 28) & 0xF)];
		Str1[8] = L'\0';

		//lol = (ULONG)Buffer; // messagebox dialogbox title
		lol = (ULONG)dwFileOffsetHigh;
		Str2[7] = Alpha[(UCHAR)(lol & 0xF)];
		Str2[6] = Alpha[(UCHAR)((lol >> 4) & 0xF)];
		Str2[5] = Alpha[(UCHAR)((lol >> 8) & 0xF)];
		Str2[4] = Alpha[(UCHAR)((lol >> 12) & 0xF)];
		Str2[3] = Alpha[(UCHAR)((lol >> 16) & 0xF)];
		Str2[2] = Alpha[(UCHAR)((lol >> 20) & 0xF)];
		Str2[1] = Alpha[(UCHAR)((lol >> 24) & 0xF)];
		Str2[0] = Alpha[(UCHAR)((lol >> 28) & 0xF)];
		Str2[8] = L'\0';

		FT->_MessageBoxW(0, Str1, Str2, 0);
#endif

		if (FT->_VidReadMemoryBlockPageRange(FT->PartitionHandle,
											//FT->MemoryHandle,
											(MB_HANDLE)1,
                                             Position,
                                             NumberOfPages,
                                             Buffer + Index,
                                             SizeToMap))
        {
			
			if ((FT->ContextPageIndex >= Position) &&
                ((FT->ContextPageIndex < (Position + NumberOfPages))))
            {
                C = Buffer + Index + ((FT->ContextPageIndex - (ULONG)Position)  * PAGE_SIZE);
                C += FT->ContextOffsetLow & (PAGE_SIZE - 1);

                if (FT->MachineType == MACHINE_X86)
                {
                    Context32 = (PX86_CONTEXT)C;
                    Context32->SegCs = KGDT_R0_CODE;
                    Context32->SegDs = (KGDT_R3_DATA | RPL_MASK);
                    Context32->SegEs = (KGDT_R3_DATA | RPL_MASK);
                    Context32->SegFs = KGDT_R0_PCR;
                    Context32->SegGs = 0;
                    Context32->SegSs = KGDT_R0_DATA;
                }
                else
                {
                    Context64 = (PX64_CONTEXT)C;
                    Context64->SegCs = KGDT64_R0_CODE;
                    Context64->SegDs = (KGDT64_R3_DATA | RPL_MASK);
                    Context64->SegEs = (KGDT64_R3_DATA | RPL_MASK);
                    Context64->SegFs = (KGDT64_R3_CMTEB | RPL_MASK);
                    Context64->SegGs = 0;
                    Context64->SegSs = KGDT64_R0_DATA;
                }
            }
        }

        for (j = 0; j < 20; j += 1)
        {
            if ((FT->MapFile[j].Va == 0) && (FT->MapFile[j].Pa.QuadPart == 0)) break;
        }

        if (j < 20)
        {
            FT->MapFile[j].Pa.QuadPart = Position * PAGE_SIZE - Index;
            FT->MapFile[j].Va = Buffer;
            FT->MapFile[j].Size = (ULONG)SizeToMap;
        }

        return Buffer;
    }
    else
    {
        return FT->_MapViewOfFile(hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
    }

}

HANDLE WINAPI MyCreateFileMappingA(
  __in      HANDLE hFile,
  __in_opt  LPSECURITY_ATTRIBUTES lpAttributes,
  __in      DWORD flProtect,
  __in      DWORD dwMaximumSizeHigh,
  __in      DWORD dwMaximumSizeLow,
  __in_opt  LPCSTR lpName
)
{
PFUNCTION_TABLE FT;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    if (hFile == FT->CrashDumpHandle)
    {
        return (HANDLE)0x1337;
    }

    return FT->_CreateFileMappingA(hFile, lpAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
}

HANDLE WINAPI MyCreateFileMappingW(
  __in      HANDLE hFile,
  __in_opt  LPSECURITY_ATTRIBUTES lpAttributes,
  __in      DWORD flProtect,
  __in      DWORD dwMaximumSizeHigh,
  __in      DWORD dwMaximumSizeLow,
  __in_opt  LPCWSTR lpName
)
{
PFUNCTION_TABLE FT;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    if (hFile == FT->CrashDumpHandle)
    {
        return (HANDLE)0x1337;
    }

    return FT->_CreateFileMappingW(hFile, lpAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
}

BOOL WINAPI MyUnmapViewOfFile(
  __in  LPCVOID lpBaseAddress
)
{
PFUNCTION_TABLE FT;
ULONG i;
BOOL Status;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    for (i = 0; i < 20; i += 1)
    {
        if (FT->MapFile[i].Va == lpBaseAddress)
        {
            FT->MapFile[i].Va = NULL;
            FT->MapFile[i].Pa.QuadPart = 0;
            FT->MapFile[i].Size = 0;

            Status = FT->_VirtualFree((LPVOID )lpBaseAddress, 0, MEM_RELEASE);
        }
    }

    if (i == 20) Status = FT->_UnmapViewOfFile(lpBaseAddress);

    return Status;
}

DWORD WINAPI MyGetFileSize(
  __in       HANDLE hFile,
  __out_opt  LPDWORD lpFileSizeHigh
)
{
PFUNCTION_TABLE FT;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    if (hFile == FT->CrashDumpHandle)
    {
        if (lpFileSizeHigh) *lpFileSizeHigh = FT->FileSize.HighPart;
        return FT->FileSize.LowPart;
    }

    return FT->_GetFileSize(hFile, lpFileSizeHigh);
}

BOOL WINAPI MyReadFile(
  __in         HANDLE hFile,
  __out        LPVOID lpBuffer,
  __in         DWORD nNumberOfBytesToRead,
  __out_opt    LPDWORD lpNumberOfBytesRead,
  __inout_opt  LPOVERLAPPED lpOverlapped
)
{
PFUNCTION_TABLE FT;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    return FT->_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}

BOOL WINAPI MyVirtualProtect(
  __in   LPVOID lpAddress,
  __in   SIZE_T dwSize,
  __in   DWORD flNewProtect,
  __out  PDWORD lpflOldProtect
)
{
PFUNCTION_TABLE FT;
ULONG i, j;
ULONG Offset;
PUCHAR Page, Source;
BOOL Status;

#if 1
PUCHAR x;
WCHAR Str1[9];
WCHAR Alpha[0x11];
ULONG lol;
#endif

PULONGLONG RegEsp;

//FT = (PFUNCTION_TABLE)NULL;
FT = (PFUNCTION_TABLE)TABLE_OFFSET;

    //
    // Even if __fastcall is the 64-bits convention, arguments are saved in the stack.
    // Using this method we can retrieve the initial RSP address in a generic way.
    //
    RegEsp = (PULONGLONG)((PUCHAR)&lpAddress - sizeof(PVOID) + 0x80);
    // rsp + 0x80 = dbgeng!DbsDemandMappedFile::Write RSP

    Status = FALSE;
    Page = NULL;

#if 1
     FT->_MessageBoxW(0, 0, 0, 0);

    Alpha[0] = L'0';
    Alpha[1] = L'1';
    Alpha[2] = L'2';
    Alpha[3] = L'3';
    Alpha[4] = L'4';
    Alpha[5] = L'5';
    Alpha[6] = L'6';
    Alpha[7] = L'7';
    Alpha[8] = L'8';
    Alpha[9] = L'9';
    Alpha[0xA] = L'a';
    Alpha[0xB] = L'b';
    Alpha[0xC] = L'c';
    Alpha[0xD] = L'd';
    Alpha[0xE] = L'e';
    Alpha[0xF] = L'f';
    Alpha[0x10] = L'\0';

    x = (PUCHAR)lpAddress;
    x[0x10] = 0x41;

    lol = (ULONG)RegEsp;
    Str1[7] = Alpha[(UCHAR)(lol & 0xF)];
    Str1[6] = Alpha[(UCHAR)((lol >> 4) & 0xF)];
    Str1[5] = Alpha[(UCHAR)((lol >> 8) & 0xF)];
    Str1[4] = Alpha[(UCHAR)((lol >> 12) & 0xF)];
    Str1[3] = Alpha[(UCHAR)((lol >> 16) & 0xF)];
    Str1[2] = Alpha[(UCHAR)((lol >> 20) & 0xF)];
    Str1[1] = Alpha[(UCHAR)((lol >> 24) & 0xF)];
    Str1[0] = Alpha[(UCHAR)((lol >> 28) & 0xF)];
    Str1[8] = L'\0';

   // s = RegEsp[3];
    FT->_MessageBoxA(0, (PUCHAR)(RegEsp[3]), (PUCHAR)RegEsp[3], 0);

#endif

    if (RegEsp[4] != dwSize)
    {
        return FT->_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
    }

    for (i = 0; i < 20; i += 1)
    {
        if ((lpAddress >= FT->MapFile[i].Va) &&
            ((PUCHAR)lpAddress < ((PUCHAR)FT->MapFile[i].Va + FT->MapFile[i].Size)) &&
            (((PUCHAR)lpAddress + dwSize) < ((PUCHAR)FT->MapFile[i].Va + FT->MapFile[i].Size)))
        {
            Offset = (ULONG)((PUCHAR)lpAddress - (ULONG)FT->MapFile[i].Va);

            Page = (PUCHAR)FT->_VirtualAlloc(0, ROUND_PAGE(dwSize), MEM_COMMIT, PAGE_READWRITE);

            if (FT->_VidReadMemoryBlockPageRange(FT->PartitionHandle,
                                                    //FT->MemoryHandle,
													(MB_HANDLE)1,
                                                    (FT->MapFile[i].Pa.QuadPart + Offset) / PAGE_SIZE,
                                                    ROUND_PAGE(dwSize) / PAGE_SIZE,
                                                    Page,
                                                    ROUND_PAGE(dwSize)) == FALSE)
            {
                goto Exit;
            }

            Source = (PUCHAR)RegEsp[3];

            //
            // Refresh the cached page at the same time.
            //
            for (j = 0; j < dwSize; j += 1) Page[(Offset & (PAGE_SIZE - 1)) + j] = Source[j];
            (ULONG)lpAddress &= ~(PAGE_SIZE - 1);
            for (j = 0; j < ROUND_PAGE(dwSize); j += 1) ((PUCHAR)lpAddress)[j] = Page[j];

            // for (j = 0; j < dwSize; j += 1) ((PUCHAR)lpAddress)[j] = Source[j];

            if (FT->_VidWriteMemoryBlockPageRange(FT->PartitionHandle,
                                                //FT->MemoryHandle,
												(MB_HANDLE)1,
                                                (FT->MapFile[i].Pa.QuadPart + Offset) / PAGE_SIZE,
                                                ROUND_PAGE(dwSize) / PAGE_SIZE,
                                                Page,
                                                ROUND_PAGE(dwSize)) == FALSE)
            {
                goto Exit;
            }
             else FT->_MessageBoxW(0, 0, 0, 0);

            Status = TRUE;
        }
    }

Exit:
    if (Page) FT->_VirtualFree(Page, 0, MEM_RELEASE);
    return Status;
}