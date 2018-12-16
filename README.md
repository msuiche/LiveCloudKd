Since Microsoft is now (May 2018) providing [symbols](https://blogs.technet.microsoft.com/srd/2018/05/03/hyper-v-debugging-symbols-are-publicly-available/) for debugging Hyper-V, and encouraging security researchers to [look at](https://blogs.technet.microsoft.com/srd/2018/12/10/first-steps-in-hyper-v-research/) Hyper-V. I figured it would be a good timing to open-source a utility for Hyper-V I wrote back in 2010.

#LiveCloudKd
## Introduction
LiveCloudKd was the first utility to focus on Virtual Machine introspection for memory forensics purposes, it was released in 2010 after some initial research on Hyper-V v1.

This feature was later added into LiveKd 5.0 by Mark Russinovich and Ken Johnson.
https://blogs.technet.microsoft.com/markrussinovich/2010/10/09/livekd-for-virtual-machine-debugging/

## LiveCloudKd (2010)
One of the initial attribute of LiveCloudKd is that the solution was completely user-mode (!!!) due to some design flaws inside vmwp.exe (Virtual Machine Worker's process).
- The process had no isolation so it was possible to read its memory address space from another process running with administrator privileges.
- Memory Block's handles were not indexes inside an object tables but kernel mode addresses pointing to those Memory Block kernel-objects. Yes, you read that correctly. vmwp.exe used to pass kernel-mode pointers to vid.sys 
- No official documentation was available regarding vmwp.exe vid.dll and the drivers winhv.sys and vid.sys BUT an Microsoft open-source project ([Singularity](https://en.wikipedia.org/wiki/Singularity_(operating_system))) that was focusing on experimenting .NET as a foundation for a new Operating System leaked [full headers for Vid.dll (Virtualization Interface Driver)](https://searchcode.com/codesearch/view/10186291/). 

Each Virtual Machine has one vmwp.exe, which has one Partition Handle (PT_HANDLE) - and multiple Memory Block handles (MB_HANDLE), this is particularly true if the target Virtual Machine has the Dynamic Memory (VidDm*) feature enabled. 

### Quest to PT_HANDLE
First, we needed to retrive the original Partition Handle (PT_HANDLE) returned by VidCreatePartition() to the vmwp.exe. Unfortunately, no API was present to retrieve existing partition handles. But since the process was not isolated we could just look for handles within each `vmwp.exe` process with an object name starting with `\\Device\\000000`, and then we could validate each of the retrieved handles with a basic API call such as `VidGetPartitionFriendlyName()`.
More details are available in `[partition.c!IsPartitionHandle()]( https://github.com/comaeio/LiveCloudKd/blob/master/hvdd/partition.c#L141)`:

### Quest to MB_HANDLE[]
Secondly, once we recovered the valid Partition Handles corresponding to each Hyper-V Virtual Machine, we need to retrieve its Memory Block's Handles. This is where I brute-forced the memory address space of each `vmwp.exe` to collect all the kernel pointers before verifying if they were valid Memory Block handles or not. More details can be found in [`memoryblock.c!GetMemoryBlocks()`](https://github.com/comaeio/LiveCloudKd/blob/master/hvdd/memoryblock.c#L106). 
Once we have a PT_HANDLE and a MB_HANDLE we can pass them as arguments to `VidReadMemoryBlockPageRange()`. Overall, LiveCloudKd was using only few Vid.dll functions:
- VidDmMemoryBlockQueryTopology()
- VidQueryMemoryBlockMbpCount()
- VidGetPartitionFriendlyName()
- VidTranslateGvaToGpa()
- VidReadMemoryBlockPageRange()
- VidGetVirtualProcessorState()

### From VidReadMemoryBlockPageRange() to WinDbg
Last but not least, in order to create a `livekd` style image on the fly I would just hook the Export Address Table (EAT) of WinDbg.exe / kd.exe. More details can be found in [`DumpLiveVirtualMachine()`](https://github.com/comaeio/LiveCloudKd/blob/master/hvdd/dump.c#L214)

## LiveCloudKd (2018)
After discussing with [@gerhart_x](https://twitter.com/gerhart_x) on why LiveCloudKd was not working anymore on the current version of Hyper-V, [@gerhart_x](https://twitter.com/gerhart_x) offered to work on an expiremental feature to revive LiveCloudKd again. Unfortunately, this requires a kernel driver.

Thanks to [@aionescu](https://twitter.com/aionescu) who pointed out to me the existence of the Windows Hypervisor Platform API (WHVP) where I noticed the presence of [ReadGuestPhysicalAddress()](https://docs.microsoft.com/en-us/virtualization/api/vm-dump-provider/funcs/readguestphysicaladdress) API which is now publicly available as of Windows 1803 (10.0.17134.48).
[Simpleator](https://github.com/ionescu007/Simpleator) is a great example of an application leveraging those APIs if you want to learn more about it.

## Contributors
- [@gerhart_x](https://twitter.com/gerhart_x)