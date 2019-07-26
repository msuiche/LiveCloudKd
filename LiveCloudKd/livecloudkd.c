/*++
	Microsoft Hyper-V Virtual Machine Physical Memory Dumper
	Copyright (C) Matt Suiche. All rights reserved.

Module Name:

	- LiveCloudKd.c

Abstract:

	- This header file contains definition used by LiveCloudKd (2010) and open-sourced in December 2018 after
	collaborating with Arthur Khudyaev (@gerhart_x) to revive the project.

	More information can be found on the original repository: https://github.com/comaeio/LiveCloudKd

	Original 2010 blogpost: https://blogs.technet.microsoft.com/markrussinovich/2010/10/09/livekd-for-virtual-machine-debugging/

Environment:

	- User mode

Revision History:

	- Arthur Khudyaev (@gerhart_x) - 08-July-2019 - Add injection of vidaux.dll to vmwp.exe
	- Arthur Khudyaev (@gerhart_x) - 01-June-2019 - Add EXDi (kd, WinDBG, WinDBGX) support
	- Arthur Khudyaev (@gerhart_x) - 18-Apr-2019 - Add additional methods (using Microsoft winhv.sys and own hvmm.sys driver) for reading guest memory
	- Arthur Khudyaev (@gerhart_x) - 20-Feb-2019 - Migrate part of code to LiveCloudKd plugin
	- Arthur Khudyaev (@gerhart_x) - 26-Jan-2019 - Migration to MemProcFS/LeechCore
	- Matthieu Suiche (@msuiche) 11-Dec-2018 - Open-sourced LiveCloudKd in December 2018 on GitHub
	- Arthur Khudyaev (@gerhart_x) - 28-Oct-2018 - Add partial Windows 10 support
	- Matthieu Suiche (@msuiche) 09-Dec-2010 - Initial version from LiveCloudKd and presented at BlueHat 2010

--*/

#include "hvdd.h"

BOOLEAN UseWinDbg = FALSE;
BOOLEAN UseWinDbgX = FALSE;
LPCWSTR DestinationPath = NULL;
ULONG Action = -1;
BOOLEAN UseEXDi = FALSE;

CHAR Disclamer[] = ".Reverse Engineering of this program is prohibited. Please respect intellectual property. The code of this program and techniques involved belongs to MoonSols SARL and Matthieu Suiche.\n";


BOOLEAN
WriteEXDiPartitionId(ULONG VmId)
{
	HKEY hDrvKey, hkey;
	LSTATUS regStatus;
	BOOLEAN Ret = FALSE;
	regStatus = RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Services\\hvmm", 0, KEY_ALL_ACCESS, &hDrvKey);
	if (regStatus != ERROR_SUCCESS) {
		{
			wprintf(L"Driver parameter key was not created\n");
			Ret = FALSE;
		}
	}

	regStatus = RegCreateKey(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Services\\hvmm\\Parameters", &hkey);

	if (regStatus == ERROR_SUCCESS)
	{
		regStatus = RegSetValueEx(hkey, L"VmId", 0, REG_DWORD, (const BYTE*)&VmId, sizeof(VmId));
		if (regStatus == ERROR_SUCCESS)
		{
			Ret = TRUE;
		}
		else
		{
			wprintf(L"VmId key was not created\n");
			Ret = FALSE;
		}

	}
	RegCloseKey(hkey);
	RegCloseKey(hDrvKey);
	return Ret;
}

VOID
Help()
{
    Disclamer[0] = '!';
    wprintf(L"Usage: LiveCloudKd.exe [/w] [/wx] [/a {0-2}] [/m {0-2}] [e] [-o path] [/?]\n"
            L"      /w         Run Windbg instead of Kd (Kd is the default).\n"
			L"      /x        Run Windbg Preview instead of Kd (Kd is the default).\n"
            L"      /a         Pre-selected action.\n"
            L"                    0 Live kernel debugging\n"
            L"                    1 Produce a linear physical memory dump\n"
            L"                    2 Produce a Microsoft full memory crash dump\n"
            L"      /o         Destination path for the output file (Action 1 and 2).\n"
			L"      /m         Memory access type.\n"
			L"					  0 - WinHv.sys interface	\n"
			L"					  1 - Raw memory interface (default)	\n"
			L"					  2 - injected vidaux.dll memory interface	\n"
			L"		/e   	   LiveCloudKd will be working using EXDi plugin. See description on github page for more detailes \n"
            L"      /?         Print this help.\n");
}

VOID
ParseArguments(
	_In_ ULONG argc,
	_In_ LPCWSTR *argv
)
{
ULONG Index;
UCHAR ChAction;
BOOLEAN bChoice = FALSE;

    for (Index = 1; Index < argc; Index += 1)
    {
        if ((argv[Index][0] != L'/') && (argv[Index][0] != L'-')) continue;

        switch (argv[Index][1])
        {
            case L'w':
                UseWinDbg = TRUE;
				UseEXDi = TRUE;
            break;
			case L'x':
				UseWinDbgX = TRUE;
				UseEXDi = TRUE;
				break;
            case L'o':
                if ((Index + 1) < argc)
                {
                    DestinationPath = argv[Index + 1];
                    Index += 1;
                }
            break;
            case L'a':
                if ((Index + 1) < argc)
                {
                    ChAction = (UCHAR)argv[Index + 1][0];
                    if ((ChAction >= '0') && (ChAction <= '2'))
                    {
                        Action = ChAction - '0';
                    }
                    Index += 1;
                }
            break;
            case L'?':
                Help();
                getchar();
                exit(1);
            break;
			case L'e':
				UseEXDi = TRUE;
			break;
			case L'm':
				if ((Index + 1) < argc)
				{
					ChAction = (UCHAR)argv[Index + 1][0];
					if (ChAction == '0') 
					{
						g_MemoryReadInterfaceType = ReadInterfaceWinHv;
						bChoice = TRUE;
					}
					if (ChAction == '1')
					{
						g_MemoryReadInterfaceType = ReadInterfaceHvmmDrvInternal;
						bChoice = TRUE;
					}
					if (ChAction == '2')
					{
						g_MemoryReadInterfaceType = ReadInterfaceVidAux;
						bChoice = TRUE;
					}
					if (bChoice == FALSE) {
						Red(L"Unknown memory access type");
					}
					Index += 1;
				}
				
			break;
        }
    }
}

wmain(
	_In_ int argc,
	_In_ LPCWSTR *argv
)
{
PHVDD_PARTITION Partitions;
ULONG PartitionCount = 0;

ULONG i;
ULONG VmId, ActionId;

WCHAR Destination[MAX_PATH + 1];
//WCHAR wVmTypeString[100];

HANDLE Handle;
USHORT Color;

wprintf(L"      LiveCloudKd - 1.2.2.20190726, beta\n"
	L"      Microsoft Hyper-V Virtual Machine  Physical Memory Dumper & Live Kernel Debugger\n"
	L"      Copyright (C) 2010-2019, Matthieu Suiche (@msuiche)\n"
	L"      Copyright (C) 2019, Comae Technologies DMCC <http://www.comae.com> <support@comae.io>\n"
	L"      All rights reserved.\n\n"

	L"      Contributor: Arthur Khudyaev (@gerhart_x)\n\n\n"
	L"");

    SetConsoleTitle(L"LiveCloudKd");

    if (!ImportGlobalFunctions()) goto Exit;

	//printf("PROC_THREAD_ATTRIBUTE_MITIGATION_POLICY = 0x%x", PROC_THREAD_ATTRIBUTE_MITIGATION_POLICY);

	//GetImportFuntions();
	//printf("size of FUNCTION_TABLE is %zx\n", sizeof(FUNCTION_TABLE));
    //printf("size of X64_CONTEXT is %zu\n", sizeof(X64_CONTEXT));
    //printf("size of KDDEBUGGER_DATA64 is %zu\n", sizeof(KDDEBUGGER_DATA64));
	
	ParseArguments(argc, argv);
	
	//
	// Set default g_MemoryInterfaceType (if -m option was not specified)
	//

	if (g_MemoryReadInterfaceType == ReadInterfaceUnsupported) {
		g_MemoryReadInterfaceType = ReadInterfaceHvmmDrvInternal;
		//g_MemoryReadInterfaceType = ReadInterfaceVidAux;
	}
	
	
	switch (g_MemoryReadInterfaceType)
	{
		case ReadInterfaceHvmmDrvInternal:
			wprintf(L"   Memory interface type is raw access\n");
		break;

		case ReadInterfaceWinHv:
			wprintf(L"   Memory interface type is WinHv.sys\n");
		break;

		case ReadInterfaceVidDll:
			wprintf(L"   Memory interface type is vid.dll. Warning, it is must be prepared for special build of vid.sys and only for testing purposes\n");
		break;

		case ReadInterfaceVidAux:
			wprintf(L"   Memory interface type is vidaux.dll (injection in vmwp.exe)\n");
			break;

		default:
			wprintf(L"   Memory interface is unknown\n");
			goto Exit;
		break;
	}
	
    Partitions = SdkGetPartitions(&PartitionCount, g_MemoryReadInterfaceType, TRUE);

	wprintf(L"   Virtual Machines:\n");
    if (PartitionCount == 0)
    {
        Red(L"   --> No virtual machines running.\n");
        goto Exit;
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
        Red(L"   The virtual machine you selected do not exist.\n");
        goto Exit;
    }

    wprintf(L"   You selected the following virtual machine: ");
    Green(L"%s\n", Partitions[VmId].VidVmInfo.FriendlyName);

    wprintf(L"\n"
            L"   Action List:\n");
    wprintf(L"    --> [0] Live kernel debugger\n"
            L"    --> [1] Linear physical memory dump\n"
            L"    --> [2] Microsoft crash memory dump\n");

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

    Green(L"%d\n", ActionId);

    if (ActionId != 0)
    {
        wprintf(L"\n"
                L"   Destination path for the virtual machine physical memory dump\n"
                L"   > ");

        if (DestinationPath == NULL)
        {
            Handle = GetStdHandle(STD_OUTPUT_HANDLE);
            Color = GetConsoleTextAttribute(Handle);
            SetConsoleTextAttribute(Handle, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                _getws_s(Destination, (sizeof(Destination) - sizeof(Destination[0])));
            SetConsoleTextAttribute(Handle, Color);
            DestinationPath = Destination;
        }
        else
        {
            Green(L"%s\n", DestinationPath);
        }
    }

	//
	//if EXDi mode is enabled, we write VmId to register
	//

	if (UseEXDi == TRUE) {
		WriteEXDiPartitionId(VmId);
	}
	//Test
	//PVOID TmpBuf = malloc(PAGE_SIZE);
	//if (!TmpBuf)
	//	goto Exit;

	//SdkHvmmReadVmMemory(&Partitions[VmId],0x1000,PAGE_SIZE, TmpBuf, ReadInterfaceVidAux);

	//SdkResumeVm(Partitions[VmId].VidVmInfo.FriendlyName);


    //
    // Now, we successfully have the Partition Handle. Let's look for Memory Blocks.
    //

	if (g_MemoryReadInterfaceType == ReadInterfaceVidDll) {

		BOOLEAN Ret = SdkHvmmPatchPsGetCurrentProcess(Partitions[VmId].WorkerPid, Partitions[VmId].CurrentProcess);
		if (!Ret) {
			Red(L"Error: Can't fix PsGetCurrentProcess\n");
			return FALSE;
		}
	}

	//SdkControlVmState(&Partitions[VmId], SuspendVm, SuspendResumeWriteSpecRegister);
    switch (ActionId)
    {
        case 0:
			if (SdkFillHvddPartitionStructure(&Partitions[VmId]))
			{
				//SdkControlVmState(&Partitions[VmId], ResumeVm, SuspendResumeWriteSpecRegister);
				DumpLiveVirtualMachine(&Partitions[VmId]);
			}
            else Red(L"   Cannot initialize crash dump header.\n");
        break;
        case 1:
			if (SdkFillHvddPartitionStructure(&Partitions[VmId]))
				DumpVirtualMachine(&Partitions[VmId], DestinationPath);
			else Red(L"   Cannot get internal VM structures.\n");
        break;
        case 2:
            if (SdkFillHvddPartitionStructure(&Partitions[VmId]))
                DumpCrashVirtualMachine(&Partitions[VmId], DestinationPath);
            else Red(L"   Cannot initialize crash dump header.\n");
        break;
    }

Exit:
	wprintf(L"kd.exe was closed. Press enter for closing LiveCloudKd\n");
    SdkDestroyPartitions();
    getchar();

    return TRUE;
}