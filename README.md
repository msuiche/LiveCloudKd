This is fork of LiveCloudKd early developed by Matt Suiche (@msuiche) - https://github.com/comaeio/LiveCloudKd

## LiveCloudKd (2020).

Memory access to full Hyper-V VM memory is stable enough, therefore LiveCloudKd and Hyper-V Virtual Machine plugin for MemProcFS was released as stable version.
https://github.com/gerhart01/LiveCloudKd/releases/download/v2.0.0.20212211/LiveCloudKd.v2.0.0.20212211-release.zip
https://github.com/gerhart01/LiveCloudKd/releases/download/1.2.20201124/leechcore_hyperv_plugin_24.11.2020.zip

Methods for accessing guest Hyper-V VM Memory: 

	ReadInterfaceWinHv - uses Hyper-V hypercall for reading guest OS memory. Slow, but robust method; 
	ReadInterfaceHvmmDrvInternal - read data directly from kernel memory. Much faster, then ReadInterfaceWinHv, but uses undocument structures). See description of -m option. Default reading method is ReadInterfaceHvmmDrvInternal.
	
	WriteInterfaceWinHv - uses Hyper-V hypercall for writing to guest OS memory.
	WriteInterfaceHvmmDrvInternal - read data directly from kernel memory. Much faster, then ReadInterfaceWinHv, but uses undocument structures). See description of -m option. Default reading method is WriteInterfaceHvmmDrvInternal.
	

Tested on Full VM from in Windows 10, Windows Server 2016 and Windows Server 2019.

For launch:

1. Place LiveCloudKd.exe, LiveCloudKdSdk.dll, hvmm.sys to WinDBG x64 folder (tested on WinDBG from WDK 1809 - 20H1).
2. Launch LiveCloudKd.exe with admin rights (It needs Visual Studio 2019 runtime libraries - https://aka.ms/vs/15/release/vc_redist.x64.exe).
3. Choose virtual machine (Full VM only) for inspection.
