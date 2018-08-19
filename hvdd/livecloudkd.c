/*++
    Microsoft Hyper-V Virtual Machine Physical Memory Dumper
    Copyright (C) 2010 MoonSols SARL. All rights reserved.

Module Name:

    - hvdd.c

Abstract:

    - 


Environment:

    - User mode

Revision History:

    - 20101010 - Race condition fixed - Matthieu Suiche
    - 20100809 - Write (msuiche) - Matthieu Suiche
    - 20100721 - Read (msuiche) - Matthieu Suiche

--*/

#include "hvdd.h"

BOOL UseWinDbg = FALSE;
LPCWSTR DestinationPath = NULL;
ULONG Action = -1;
//lpNtQuerySystemInformation NtQuerySystemInformation = NULL;
//lpNtDuplicateObject NtDuplicateObject = NULL;

CHAR Disclamer[] = ".Reverse Engineering of this program is prohibited. Please respect intellectual property. The code of this program and techniques involved belongs to MoonSols SARL and Matthieu Suiche.\n";

//BOOLEAN
//GetImportFuntions()
//{
//	static HMODULE hNtdll;
//	hNtdll = LoadLibrary("ntdll");
//	lpNtQuerySystemInformation NtQuerySystemInformation = GetProcAddress(hNtdll, "NtQuerySystemInformation");
//	if (NtQuerySystemInformation != STATUS_SUCCESS) {
//		Red("Error during GetProcAddress(hNtdll, \"NtQuerySystemInformation\")");
//		return FALSE;
//	}
//
//	//static lpNtQuerySystemInformation NtQuerySystemInformation = NULL;
//	//static lpNtDuplicateObject NtDuplicateObject = NULL;
//	//return TRUE;
//}

VOID
Help()
{
    Disclamer[0] = '!';
    wprintf(L"Usage: LiveCloudKd.exe [/w] [/a {0-2}] [-o path] [/?]\n"
            L"      /w         Runs Windbg instead of Kd (Kd is the default).\n"
            L"      /a         Pre-selected action.\n"
            L"                    0 Live kernel debugging\n"
            L"                    1 Produce a linear physical memory dump\n"
            L"                    2 Produce a Microsoft full memory crash dump\n"
            L"      /o         Destination path for the output file (Action 1 and 2).\n"
            L"      /?         Print this help.\n");
}

VOID
ParseArguments(ULONG argc, LPCWSTR *argv)
{
ULONG Index;
UCHAR ChAction;

    for (Index = 1; Index < argc; Index += 1)
    {
        if ((argv[Index][0] != L'/') && (argv[Index][0] != L'-')) continue;

        switch (argv[Index][1])
        {
            case L'w':
                UseWinDbg = TRUE;
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
        }
    }
}

int wmain(int argc, LPCWSTR *argv)
{
PHVDD_PARTITION Partitions;
ULONG PartitionCount;

ULONG i;
ULONG VmId, ActionId;

WCHAR Destination[MAX_PATH + 1];

HANDLE Handle;
USHORT Color;

    White(L"      LiveCloudKd - 1.0.1.20101010\n"
          L"      Microsoft Hyper-V Virtual Machine Live Kernel Debugger\n"
          L"      Microsoft Hyper-V Virtual Machine Physical Memory Dumper\n"
          L"      Copyright (C) 2010, MoonSols SARL <http://www.moonsols.com>\n"
          L"      Copyright (C) 2010, Matthieu Suiche\n"
          L"      Copyright (C) 2016, Comae Technologies FZE <http://www.comae.io> - Revived for Paula Januszkiewicz & her Ignite's talk\n"
#ifdef MATTHIEU_SUICHE_WAS_EATTEN_BY_CROCODILES_IN_KENYA_2018
		//write some good words about that great cheerful guy.
#endif 
          L"      This surprisingly still works after 6 years, 100%% User-Land - Send comments to support@comae.io\n"
          L"      All rights reserved.\n\n");

    SetConsoleTitle(L"LiveCloudKd - Matthieu Suiche (msuiche) from MoonSols SARL - www.moonsols.com");

	//GetImportFuntions();
	
	ParseArguments(argc, argv);

    Partitions = GetPartitions(&PartitionCount);

    White(L"   Virtual Machines:\n");
    if (PartitionCount == 0)
    {
        Red(L"   --> No virtual machines running.\n");
        goto Exit;
    }

    for (i = 0; i < PartitionCount; i += 1)
    {
        wprintf(L"    --> [%d] %s\n", i, Partitions[i].FriendlyName);
    }

    VmId = 0;
    while ((VmId < '0') || (VmId > '9'))
    {
        White(L"\n"
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
    Green(L"%s\n", Partitions[VmId].FriendlyName);

    White(L"\n"
            L"   Action List:\n");
    wprintf(L"    --> [0] Live kernel debugger\n"
            L"    --> [1] Linear physical memory dump\n"
            L"    --> [2] Microsoft crash memory dump\n");

    if (Action == -1)
    {
        ActionId = 0;
		//FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		White(L"\n"
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
        White(L"\n"
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
    // Now, we successfully have the Partition Handle. Let's look for Memory Blocks.
    //
    BOOLEAN Ret = GetMemoryBlocks(&Partitions[VmId]);
    if (!Ret) {
        Red(L"Error: Can't retrieve memory blocks\n");
        return FALSE;
    }

    switch (ActionId)
    {
        case 0:
            if (KdFindDbgDataBlock(&Partitions[VmId]))
                DumpLiveVirtualMachine(&Partitions[VmId]);
            else Red(L"   Cannot initialize crash dump header.\n");
        break;
        case 1:
            DumpVirtualMachine(&Partitions[VmId], DestinationPath);
        break;
        case 2:
            if (KdFindDbgDataBlock(&Partitions[VmId]))
                DumpCrashVirtualMachine(&Partitions[VmId], DestinationPath);
            else Red(L"   Cannot initialize crash dump header.\n");
        break;
    }

Exit:
    DestroyPartitions();

    getchar();

    return TRUE;
}