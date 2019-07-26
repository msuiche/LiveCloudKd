#include "device.h"
#include "device_usb3380.h"
#include "device_file.h"
#include "device_fpga.h"
#include "device_pmem.h"
#include "device_sp605tcp.h"
#include "device_tmd.h"
#include "device_hvsavedstate.h"
#include "device_rawtcp.h"
//#include "device_hvmm.h"
#include "leechrpc.h"

BOOL LeechCore_OpenDevices(PLEECHCORE_CONTEXT ctxDeviceMain)
{
	BOOL result = FALSE;
	if (ctxDeviceMain->cfg.szRemote[0]) {
		if (0 == _strnicmp("rpc://", ctxDeviceMain->cfg.szRemote, 6)) {
			result = LeechRPC_Open(TRUE);
		}
		if (0 == _strnicmp("pipe://", ctxDeviceMain->cfg.szRemote, 7)) {
			result = LeechRPC_Open(FALSE);
		}
	}
	else if (0 == _strnicmp("fpga", ctxDeviceMain->cfg.szDevice, 4)) {
		result = DeviceFPGA_Open();
	}
	else if (0 == _strnicmp("usb3380", ctxDeviceMain->cfg.szDevice, 7)) {
		result = Device3380_Open();
	}
	else if (0 == _strnicmp("sp605tcp://", ctxDeviceMain->cfg.szDevice, 11)) {
		result = Device605_TCP_Open();
	}
	else if (0 == _strnicmp("rawtcp://", ctxDeviceMain->cfg.szDevice, 9)) {
		result = DeviceRawTCP_Open();
	}
	else if (0 == _strnicmp("HvSavedState://", ctxDeviceMain->cfg.szDevice, 15)) {
		result = DeviceHvSavedState_Open();
	}
	else if (0 == _stricmp("totalmeltdown", ctxDeviceMain->cfg.szDevice)) {
		result = DeviceTMD_Open();
	}
	//else if (0 == _strnicmp("hvmm", ctxDeviceMain->cfg.szDevice, 4)) {
	//	result = DeviceHVMM_Open();
	//}
	else if (0 == _strnicmp("pmem", ctxDeviceMain->cfg.szDevice, 4)) {
		result = DevicePMEM_Open();
	}
	else {
		result = DeviceFile_Open();
	}
	return result;
}