This is fork of LiveCloudKd early developed by Matt Suiche (@msuiche) - https://github.com/comaeio/LiveCloudKd

## LiveCloudKd (2020).

Memory access to full Hyper-V VM memory is stable. Hyper-V Virtual Machine plugin for MemProcFS was released at 24.11.2020.
https://github.com/gerhart01/LiveCloudKd/releases/download/1.2.20201124/leechcore_hyperv_plugin_24.11.2020.zip

Methods for accessing guest Hyper-V VM Memory: 

	ReadInterfaceWinHv - uses Hyper-V hypercall for reading guest OS memory. Slow, but robust method; 
	ReadInterfaceHvmmDrvInternal - read data directly from kernel memory. Much faster, then ReadInterfaceWinHv, but uses undocument structures). See description of -m option. Default reading method is ReadInterfaceHvmmDrvInternal.
	
	WriteInterfaceWinHv - uses Hyper-V hypercall for writing to guest OS memory. Use EXDi interface for it (/x or /w options). See ExdiKdSample README for more details.
	WriteInterfaceHvmmDrvInternal - read data directly from kernel memory. Much faster, then ReadInterfaceWinHv, but uses undocument structures). See description of -m option. Default reading method is ReadInterfaceHvmmDrvInternal.
	
ReadInterfaceHvmmDrvInternal was tested on Windows Server 2016, Windows Server 2019 (november 2020 updates), Windows 10 x64 1803, 1809, 18362. 20H1, 21H1, build 20262.
ReadInterfaceVidNative was tested on Windows Server 2012, Windows Server 2012 R2, Windows Server 2016.

Tested on Full VM, docker container with Hyper-V isolation, Windows Defender Application Guard and Windows Sandbox in Windows 10 18362.

For launch:
1. hvmm.sys driver is not signed, therefore start host OS with TESTSIGNING option (Bcdedit /set TESTSIGNING ON). Driver is not used with ReadInterfaceVidNative interface (/m 3 option)
2. Place LiveCloudKd.exe, LiveCloudKdSdk.dll, hvmm.sys, vidaux.dll, ExdiKdSample.dll to WinDBG x64 folder (tested on WinDBG from WDK 1809 and WDK 1903).
3. Launch LiveCloudKd.exe with admin rights (It needs Visual Studio 2019 runtime libraries - https://aka.ms/vs/15/release/vc_redist.x64.exe).
4. Choose virtual machine (it can be Full Vm or Hyper-V container) for attaching.
