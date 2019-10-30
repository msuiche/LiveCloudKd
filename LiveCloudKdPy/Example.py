from LiveCloudKdModule import *

dll_path = 'C:\\Distr\\Test\\WinDBG101903x64\\LiveCloudKdSdk.dll'

a = LiveCloudKdPy(dll_path)

# Set logging level
vm_ops = a.vm_ops
vm_ops.LogLevel = 1

a.EnumPartitions(vm_ops)

print("Please select the ID of the virtual machine")
vm_id = int(input('').split(" ")[0])

a.SelectPartition(vm_id)
buffer1 = a.ReadPhysicalMemoryBlock(0x10000, 0x1000)
KernelBase = a.GetData(HvddInformationClass.HvddKernelBase)
buffer2 = a.ReadVirtualMemoryBlock(KernelBase, 0x1000)
