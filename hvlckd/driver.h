
//#define DBG 0

#include "ntddk.h"

#define DBG_PRINT_LEVEL DPFLTR_ERROR_LEVEL
#define DbgLog(format, value) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%-50s [%08X]\n", format, value ); } 
#define DbgLog16(format, value) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%-50s [%016I64X]\n", format, value ); } 
#define DbgTraceLog(value) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%08X:\n", value ); } 
#define DbgPrintString(value)  { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%s \n", value ); } 
#define DbgPrintUStringString(value1,value2)  { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%s %wZ \n", value1, value2); } 

BOOLEAN VidGetFriendlyPartitionName(PCHAR pBuffer, ULONG len);

#define IOCTL_GET_FRIENDLY_PARTIION_NAME CTL_CODE(\
	FILE_DEVICE_UNKNOWN, 0x820, METHOD_BUFFERED, FILE_ANY_ACCESS)