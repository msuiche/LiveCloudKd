
#include "hv.h"
extern PVOID pHvlpInterruptCallbackOrig;
extern PVOID pWinHVOnInterruptOrig;

NTSTATUS DeviceControlRoutine( IN PDEVICE_OBJECT fdo, IN PIRP Irp );
VOID     UnloadRoutine(IN PDRIVER_OBJECT DriverObject);
NTSTATUS Create_File_IRPprocessing(IN PDEVICE_OBJECT fdo, IN PIRP Irp);
NTSTATUS Close_HandleIRPprocessing(IN PDEVICE_OBJECT fdo, IN PIRP Irp);
NTSTATUS ReadWrite_IRPhandler(IN PDEVICE_OBJECT fdo, IN PIRP Irp);

KSPIN_LOCK MySpinLock;

NTSTATUS DriverEntry( IN PDRIVER_OBJECT DriverObject,
                      IN PUNICODE_STRING RegistryPath  )
{
	NTSTATUS status = STATUS_SUCCESS;
	PDEVICE_OBJECT  fdo;
	UNICODE_STRING  devName;
	PEXAMPLE_DEVICE_EXTENSION dx;
	UNICODE_STRING symLinkName;
	UNREFERENCED_PARAMETER(RegistryPath);

	DriverObject->DriverUnload = UnloadRoutine;
	DriverObject->MajorFunction[IRP_MJ_CREATE]= Create_File_IRPprocessing;
	DriverObject->MajorFunction[IRP_MJ_CLOSE] = Close_HandleIRPprocessing;
	DriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL]= DeviceControlRoutine;
    DriverObject->MajorFunction[IRP_MJ_READ] = ReadWrite_IRPhandler;
    DriverObject->MajorFunction[IRP_MJ_WRITE] = ReadWrite_IRPhandler;

	RtlInitUnicodeString( &devName, L"\\Device\\hvlckd" );

	status = IoCreateDevice(DriverObject,
                            sizeof(EXAMPLE_DEVICE_EXTENSION),
                            &devName, 
                            FILE_DEVICE_UNKNOWN,
                            FILE_DEVICE_SECURE_OPEN,
                            FALSE, 
                            &fdo);
	if(!NT_SUCCESS(status)) return status;

	dx = (PEXAMPLE_DEVICE_EXTENSION)fdo->DeviceExtension;
	dx->fdo = fdo;  

	#define   SYM_LINK_NAME   L"\\DosDevices\\hvlckd"

	RtlInitUnicodeString( &symLinkName, SYM_LINK_NAME );
	dx->ustrSymLinkName = symLinkName;
	
	status = IoCreateSymbolicLink( &symLinkName, &devName );
	if (!NT_SUCCESS(status))
	{ 
		DbgLog("Error IoCreateSymbolicLink", status);
        IoDeleteDevice( fdo );
		return status;
    } 
	DbgPrintString("hvlckd was loaded succesfully");
    return status;
}

NTSTATUS CompleteIrp( PIRP Irp, NTSTATUS status, ULONG info)
{
	Irp->IoStatus.Status = status;
	Irp->IoStatus.Information = info;
	IoCompleteRequest(Irp,IO_NO_INCREMENT);
	return status;
}

NTSTATUS ReadWrite_IRPhandler( IN PDEVICE_OBJECT fdo, IN PIRP Irp )
{
	ULONG BytesTxd = 0;
	NTSTATUS status = STATUS_SUCCESS; 
	UNREFERENCED_PARAMETER(fdo);
	return CompleteIrp(Irp,status,BytesTxd);
}

NTSTATUS Create_File_IRPprocessing(IN PDEVICE_OBJECT fdo,IN PIRP Irp)
{
	UNREFERENCED_PARAMETER(fdo);
	return CompleteIrp(Irp,STATUS_SUCCESS,0); 
}

NTSTATUS Close_HandleIRPprocessing(IN PDEVICE_OBJECT fdo,IN PIRP Irp)
{
	UNREFERENCED_PARAMETER(fdo);
	return CompleteIrp(Irp,STATUS_SUCCESS,0);
}

NTSTATUS DeviceControlRoutine( IN PDEVICE_OBJECT fdo, IN PIRP Irp )
{
	NTSTATUS status = STATUS_SUCCESS;
	ULONG BytesTxd =0; 
	UNREFERENCED_PARAMETER(fdo);
	PCHAR pInputBuffer, pOutputBuffer;
	PIO_STACK_LOCATION IrpStack=IoGetCurrentIrpStackLocation(Irp);
	ULONG uOutBufLen;
	ULONG ControlCode =	IrpStack->Parameters.DeviceIoControl.IoControlCode;

	pInputBuffer = Irp->AssociatedIrp.SystemBuffer;
	pOutputBuffer = Irp->AssociatedIrp.SystemBuffer;
	uOutBufLen = IrpStack->Parameters.DeviceIoControl.OutputBufferLength;
	if (uOutBufLen > 0x200)
		uOutBufLen = 0x200;

	DbgLog("IOCTL", ControlCode);
	switch(ControlCode) {
	case IOCTL_GET_FRIENDLY_PARTIION_NAME:
	{
		if (VidGetFriendlyPartitionName(pInputBuffer, uOutBufLen) == TRUE) {
			BytesTxd = uOutBufLen;
		}
		else {
			BytesTxd = 0;
		}
		break;
	} 
	default: status = STATUS_INVALID_DEVICE_REQUEST;
	}

return CompleteIrp(Irp,status,BytesTxd); 
}


VOID UnloadRoutine(IN PDRIVER_OBJECT pDriverObject)
{
	PDEVICE_OBJECT	pNextDevObj;
	int i;

	pNextDevObj = pDriverObject->DeviceObject;

	for(i=0; pNextDevObj!=NULL; i++)
	{
		PEXAMPLE_DEVICE_EXTENSION dx =
				(PEXAMPLE_DEVICE_EXTENSION)pNextDevObj->DeviceExtension;
		UNICODE_STRING *pLinkName = & (dx->ustrSymLinkName);
		pNextDevObj = pNextDevObj->NextDevice;
		IoDeleteSymbolicLink(pLinkName);
		IoDeleteDevice(dx->fdo);
	}
}