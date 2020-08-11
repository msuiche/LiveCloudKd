#pragma once
#include <stdarg.h>

#define DBG_PRINT_LEVEL DPFLTR_ERROR_LEVEL
#define DbgLog(format, ...) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%-50s [%08X]\n", format, __VA_ARGS__ ); } 
#define DbgLog16(format, value) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%-50s [%016I64X]\n", format, value ); } 
//#define DbgTraceLog(value) { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%08X:\n", value ); } 
#define DbgPrintString(value)  { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%s \n", value ); } 
#define DbgPrintUStringString(value1,value2)  { DbgPrintEx(DPFLTR_IHVDRIVER_ID, DBG_PRINT_LEVEL,"%s %wZ \n", value1, value2); } 

//
//Enable additional debug logs
//

#define DBG_PRINT_STRINGS

__forceinline void KDbgPrintString(PCSTR value) {
	/* print_##type will be replaced with print_int or print_double */
#ifdef DBG_PRINT_STRINGS
	DbgPrintString(value);
#else
	UNREFERENCED_PARAMETER(value);
#endif
}


//__forceinline void KDbgLog(PCSTR format, ...) {
//#ifdef DBG_PRINT_STRINGS
//	va_list vl;
//	va_start(vl, format);
//	DbgLog(format, vl);
//	//va_end(vl);
//#else
//	UNREFERENCED_PARAMETER(format);
//#endif
//}

__forceinline void KDbgLog(PCSTR format, ULONG value) {
#ifdef DBG_PRINT_STRINGS
	DbgLog(format, value);
	//va_end(vl);
#else
	UNREFERENCED_PARAMETER(format);
	UNREFERENCED_PARAMETER(value);
#endif
}

__forceinline void KDbgLog16(PCSTR format, ULONG64 value) {
#ifdef DBG_PRINT_STRINGS
	DbgLog16(format, value);
	//va_end(vl);
#else
	UNREFERENCED_PARAMETER(format);
	UNREFERENCED_PARAMETER(value);
#endif
}


//__forceinline void KDbgLog16(PCSTR format, ...) {
//#ifdef DBG_PRINT_STRINGS
//	va_list vl;
//	va_start(vl, format);
//	DbgLog16(format, vl);
//	//va_end(vl);
//#else
//	UNREFERENCED_PARAMETER(format);
//#endif
//}