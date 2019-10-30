#  2019. LiveCloudKd.dll python wrapper developed by Arthur Khudyaev (@gerhart_x)

import ctypes
import os
from enum import IntEnum
import sys
import msvcrt
import atexit

# problem with python 3 wprintf additional spaces between each letter
msvcrt.setmode(sys.stdout.fileno(), os.O_TEXT)


# https://gist.github.com/christoph2/9c390e5c094796903097 - python 3 enums fix

class StructureWithEnums(ctypes.Structure):
    """Add missing enum feature to ctypes Structures.
    """
    _map = {}

    def __getattribute__(self, name):
        _map = ctypes.Structure.__getattribute__(self, '_map')
        value = ctypes.Structure.__getattribute__(self, name)
        if name in _map:
            EnumClass = _map[name]
            if isinstance(value, ctypes.Array):
                return [EnumClass(x) for x in value]
            else:
                return EnumClass(value)
        else:
            return value

    def __str__(self):
        result = []
        result.append("struct {0} {{".format(self.__class__.__name__))
        for field in self._fields_:
            attr, attrType = field
            if attr in self._map:
                attrType = self._map[attr]
            value = getattr(self, attr)
            result.append("    {0} [{1}] = {2!r};".format(attr, attrType.__name__, value))
        result.append("};")
        return '\n'.join(result)


class CtypesEnum(IntEnum):
    """A ctypes-compatible IntEnum superclass."""

    @classmethod
    def from_param(cls, obj):
        return int(obj)


class ReadMemoryMethod(IntEnum):
    ReadInterfaceUnsupported = 0
    ReadInterfaceWinHv = 1
    ReadInterfaceHvmmDrvInternal = 2
    ReadInterfaceVidDll = 3
    ReadInterfaceVidAux = 4
    ReadInterfaceVidNative = 5


class WriteMemoryMethod(IntEnum):
    WriteInterfaceUnsupported = 0
    WriteInterfaceWinHv = 1
    WriteInterfaceHvmmDrvInternal = 2
    WriteInterfaceVidDll = 3
    WriteInterfaceVidAux = 4
    WriteInterfaceVidNative = 5


class SuspendResumeMethod(IntEnum):
    SuspendResumeUnsupported = 0
    SuspendResumePowershell = 1
    SuspendResumeWriteSpecRegister = 2


class HvddInformationClass(IntEnum):
    HvddKdbgData = 0
    HvddPartitionFriendlyName = 1
    HvddPartitionId = 2
    HvddVmtypeString = 3
    HvddStructure = 4
    HvddKiProcessorBlock = 5
    HvddMmMaximumPhysicalPage = 6
    HvddKPCR = 7
    HvddNumberOfCPU = 8
    HvddKDBGPa = 9
    HvddNumberOfRuns = 10
    HvddKernelBase = 11
    HvddMmPfnDatabase = 12
    HvddPsLoadedModuleList = 13
    HvddPsActiveProcessHead = 14
    HvddNtBuildNumber = 15
    HvddNtBuildNumberVA = 16
    HvddDirectoryTableBase = 17
    HvddRun = 18
    HvddKdbgDataBlockArea = 19
    HvddVmGuidString = 20
    HvddPartitionHandle = 21
    HvddKdbgContext = 22
    HvddKdVersionBlock = 23
    HvddMmPhysicalMemoryBlock = 23
    HvddNumberOfPages = 24
    HvddIdleKernelStack = 25
    HvddSizeOfKdDebuggerData = 26
    HvddCpuContextVa = 27
    HvddSize = 28
    HvddMemoryBlockCount = 29


class VmStateAction(IntEnum):
    SuspendVm = 0
    ResumeVm = 1


class TrParameter(StructureWithEnums):
    _fields_ = [
        ("ReadMethod", ctypes.c_int),
        ("WriteMethod", ctypes.c_int),
        ("PauseMethod", ctypes.c_int),
        ("LogLevel", ctypes.c_int64),
    ]
    _map = {
        "ReadMethod": ReadMemoryMethod, "WriteMethod": WriteMemoryMethod, "PauseMethod": SuspendResumeMethod,
        "LogLevel": ctypes.c_int64,
    }


class LiveCloudKdPy:

    def __init__(self, dll_path):
        py_dir = os.path.dirname(os.path.abspath(__file__))
        if dll_path == "":
            dll_path = 'C:\\Distr\\Test\\WinDBG101903x64\\LiveCloudKdSdk.dll'
        self.LiveCloudKdSdk = ctypes.CDLL(dll_path)
        self.PartitionArray = []
        self.CurrentPartition = 0
        self.PartitionCount = 0
        self.ArrayOfNames = []

        # BOOLEAN SdkSelectPartition(_In_ ULONG64 EnumPartitionEntryHandle);
        self.LiveCloudKdSdk.SdkGetPreferredMemoryOperations.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkGetPreferredMemoryOperations.argtypes = [ctypes.POINTER(TrParameter)]

        self.LiveCloudKdSdk.SdkEnumPartitions.restype = ctypes.POINTER(ctypes.c_uint64)
        self.LiveCloudKdSdk.SdkEnumPartitions.argtypes = [ctypes.POINTER(ctypes.c_uint64),
                                                                ctypes.POINTER(TrParameter), ctypes.c_bool,
                                                                ctypes.c_bool]

        # BOOLEAN SdkGetData(_In_ ULONG64 PartitionIntHandle, _In_ HVDD_INFORMATION_CLASS HvddInformationClass, _Inout_ PVOID HvddInformation);
        self.LiveCloudKdSdk.SdkGetData.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkGetData.argtypes = [ctypes.c_uint64, ctypes.c_int32, ctypes.c_void_p]

        self.LiveCloudKdSdk.SdkSelectPartition.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkSelectPartition.argtypes = [ctypes.c_uint64]

        self.LiveCloudKdSdk.SdkDestroyPartitions.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkDestroyPartitions.argtypes = []

        # BOOLEAN SdkReadPhysicalMemory(_In_ ULONG64 PartitionEntryHandle, _In_ UINT64 StartPosition, _In_ UINT64 ReadByteCount, _Inout_ PVOID ClientBuffer, _In_ READ_MEMORY_METHOD Method);
        self.LiveCloudKdSdk.SdkReadPhysicalMemory.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkReadPhysicalMemory.argtypes = [ctypes.c_uint64, ctypes.c_uint64, ctypes.c_uint64,
                                                                    ctypes.c_void_p, ctypes.c_uint32]

        # BOOLEAN SdkWritePhysicalMemory(_In_ ULONG64 PartitionEntryHandle, _In_ UINT64 StartPosition, _In_ UINT64 WriteBytesCount, _In_ PVOID ClientBuffer, _In_ WRITE_MEMORY_METHOD Method);
        self.LiveCloudKdSdk.SdkWritePhysicalMemory.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkWritePhysicalMemory.argtypes = [ctypes.c_uint64, ctypes.c_uint64, ctypes.c_uint64,
                                                                     ctypes.c_void_p, ctypes.c_uint32]
        # SdkReadVirtualMemory(_In_ ULONG64 PartitionEntryHandle, _In_ ULONG64 Va, _Out_ PVOID Buffer, _In_ ULONG Size);
        self.LiveCloudKdSdk.SdkReadVirtualMemory.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkReadVirtualMemory.argtypes = [ctypes.c_uint64, ctypes.c_uint64, ctypes.c_void_p,
                                                                    ctypes.c_uint32]

        self.LiveCloudKdSdk.SdkWriteVirtualMemory.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkWriteVirtualMemory.argtypes = [ctypes.c_uint64, ctypes.c_uint64, ctypes.c_void_p,
                                                                     ctypes.c_uint32]

        # BOOLEAN SdkControlVmState(_In_ ULONG64 PartitionEntryHandle, _In_ VM_STATE_ACTION Action, _In_ SUSPEND_RESUME_METHOD ActionMethod);
        self.LiveCloudKdSdk.SdkControlVmState.restype = ctypes.c_bool
        self.LiveCloudKdSdk.SdkControlVmState.argtypes = [ctypes.c_uint64, ctypes.c_uint32, ctypes.c_uint32]

        atexit.register(self.cleanup)
        vm_ops = TrParameter(0, 0, 0);
        self.LiveCloudKdSdk.SdkGetPreferredMemoryOperations(ctypes.pointer(vm_ops))
        self.vm_ops = vm_ops

    def GetPreferredSettings(self):
        VmOps = TrParameter(0, 0, 0)
        bResult = self.LiveCloudKdSdk.SdkGetPreferredMemoryOperations(ctypes.pointer(VmOps))
        if not bResult:
            print("Error in SdkGetPreferredMemoryOperations")
            return False
        return VmOps

    def EnumPartitions(self, vm_ops_param: TrParameter):
        PartitionCount = ctypes.c_uint64(0)
        DrvLoad = ctypes.c_bool()
        DrvLoad.value = True
        ExoScanning = ctypes.c_bool()
        ExoScanning.value = False
        Partitions = self.LiveCloudKdSdk.SdkEnumPartitions(ctypes.pointer(PartitionCount),
                                                                 ctypes.pointer(vm_ops_param),
                                                                 DrvLoad,
                                                                 ExoScanning)
        PartitionArray = []
        PartitionArray = ctypes.cast(Partitions, ctypes.POINTER(ctypes.c_uint64 * PartitionCount.value)).contents
        FriendlyNameP = ctypes.c_wchar_p("N")
        PartitionId = ctypes.c_uint64(0)
        ArrayOfNames = []
        self.vm_ops = vm_ops_param
        self.PartitionCount = PartitionCount.value

        for x in range(0, PartitionCount.value):
            self.LiveCloudKdSdk.SdkGetData(PartitionArray[x], HvddInformationClass.HvddPartitionFriendlyName,
                                           ctypes.pointer(FriendlyNameP))
            ArrayOfNames.append(FriendlyNameP.value)
            self.LiveCloudKdSdk.SdkGetData(PartitionArray[x], HvddInformationClass.HvddPartitionId,
                                           ctypes.pointer(PartitionId))

            print("[", x, "]", FriendlyNameP.value, "PartitionId = ", PartitionId.value)

            print("Active partitions count: ", PartitionCount.value)
        self.PartitionArray = PartitionArray
        self.ArrayOfNames = ArrayOfNames

    def SelectPartition(self, vm_id):
        if vm_id >= self.PartitionCount:
            print("Your value is very big")
        CurrentPartition = self.PartitionArray[vm_id]
        print("You select", self.ArrayOfNames[vm_id])
        self.LiveCloudKdSdk.SdkSelectPartition(CurrentPartition)
        self.CurrentPartition = CurrentPartition

    def GetData(self, info_class: HvddInformationClass):
        wchar_var = ctypes.c_wchar_p("N")
        int_var = ctypes.c_uint64(0)

        if (info_class == HvddInformationClass.HvddPartitionFriendlyName) or (
                info_class == HvddInformationClass.HvddVmtypeString) or (
                info_class == HvddInformationClass.HvddVmGuidString):
            self.LiveCloudKdSdk.SdkGetData(self.CurrentPartition, info_class,
                                           ctypes.pointer(wchar_var))
            return wchar_var.value
        else:
            self.LiveCloudKdSdk.SdkGetData(self.CurrentPartition, info_class,
                                           ctypes.pointer(int_var))
            return int_var.value

    def ReadPhysicalMemoryBlock(self, address, block_size):
        buffer = ctypes.create_string_buffer(block_size)
        bResult = self.LiveCloudKdSdk.SdkReadPhysicalMemory(self.CurrentPartition, address, block_size, buffer,
                                                                  self.vm_ops.ReadMethod)
        if not bResult:
            print("ReadPhysicalMemoryBlock error")
            return 0
        # print in hex
        # binascii.hexlify(bytearray(buffer.raw))
        return buffer

    def ReadVirtualMemoryBlock(self, address, block_size):
        buffer = ctypes.create_string_buffer(block_size)
        bResult = self.LiveCloudKdSdk.SdkReadVirtualMemory(self.CurrentPartition, address, buffer, block_size)
        if not bResult:
            print("ReadVirtualMemoryBlock error")
            return 0
        return buffer

    def cleanup(self):
        self.LiveCloudKdSdk.SdkDestroyPartitions()
        print("Sdk unloaded")
