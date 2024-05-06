#pragma once

#include <conio.h>
#include <stdio.h>

#define HANDLE_TYPE_EXAMPLE

#include "HvlibHandle.h"

#define DUMP_BLOCK_SIZE 1024*1024
#define DUMP_PAGE_SIZE 0x1000

BOOL
CreateDestinationFile(
	LPCWSTR Filename,
	PHANDLE Handle
);

BOOL
WriteFileSynchronous(
	HANDLE Handle,
	PVOID Buffer,
	ULONG NbOfBytesToWrite
);
