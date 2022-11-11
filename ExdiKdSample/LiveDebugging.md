# Hyper-V live debugging

[Actual distributive](https://github.com/gerhart01/LiveCloudKd/releases/download/v1.0.22021109/LiveCloudKd.EXDi.debugger.v1.0.22021109.zip)

LiveCloudKd EXDi debugger can be used for debugging Hyper-V guest OS without enable kernel debugging in bootloader.

Can be useful for debug Hyper-V VM with enabled HVCI and securekernel.

Working with guest Windows Server 2022 and Windows 11, including preview builds (on November 2022)

For debugging you need to use Windows Server 2019 (August 2020 updates - Windows image name en_windows_server_2019_updated_aug_2020_x64_dvd_f4bab427.iso).
It is good to use VMware Workstation for it.

# VSM\VBS activating for securekernel debugging

Read official Microsoft document first [Enable virtualization-based protection or code integrity](https://docs.microsoft.com/en-us/windows/security/threat-protection/device-guard/enable-virtualization-based-protection-of-code-integrity)

It was enough for me to enable VBS in group policy editor.

For guest VM don't forget enable SecureBoot option. 
Check Get-VMSecurity -VMName <VMName> output. VirtualizationBasedSecurityOptOut must be $false.
	
Don't enable nested virtualization support for guest OS. VBS in guest Hyper-V VM works without guest hypervisor.

# Installation

EXDi is used for integration custom debugging engines with WinDBG.

LiveCloudKDExdi plugin in live debugging mode works with Hyper-V on Windows Server 2019 and Windows 10 20H1 (19041) as host OS. Guest OS can be various. 

1. Extract all files to WinDBG x64 10.0.22621 install directory (installer can be found in Windows SDK 11 22H2)
2. Install Visual Studio 2022 runtime libraries - https://aka.ms/vs/17/release/vc_redist.x64.exe 
3. Register ExdiKdSample.dll using "regsvr32.exe ExdiKdSample.dll" command
4. Don't forget configure symbols path for WinDBG as usual:

```
mkdir C:\Symbols
compact /c /i /q /s:C:\Symbols
setx /m _NT_SYMBOL_PATH SRV*C:\Symbols*https://msdl.microsoft.com/download/symbols
```

# Start

1. Start WinDBG with EXDi plugin: 

```
windbg -d -v -kx exdi:CLSID={67030926-1754-4FDA-9788-7F731CBDAE42},Kd=Guess
```

It automatically launches WinDBG with EXDi interface in live debugging mode using hvmm.sys driver.

2. You can see working WinDBG and separate logging windows:

![](./images/EXDI6.png)

3. Also you can directly start WinDBG using command

```
windbg.exe -d -v -kx exdi:CLSID={67030926-1754-4FDA-9788-7F731CBDAE42},Kd=Guess
```

but before you need create HKEY_LOCAL_MACHINE\SOFTWARE\LiveCloudKd\Parameters\VmId, type REG_DWORD and enter position number in LiveCloudKd list [0, 1, 2]. You can see that list, if you launch LiveCloudKd without parameters. If you launch 1 VM, that parameter will be 0.

You can use WinDBG Preview with EXDi plugin too. But WinDBG Preview has bug with automatically starting EXDi plugin from command line, therefore it must be start manually.

4. Create HKEY_LOCAL_MACHINE\SOFTWARE\LiveCloudKd\Parameters\VmId, type REG_DWORD and enter position number in LiveCloudKd list [0, 1, 2]. You can see that list, if you launch LiveCloudKd without parameters. If you launch 1 VM, that parameter will be 0.
5. Start WinDBGX, go to File-Start debugging-Attach to Kernel, open EXDi tab and paste string 

```
CLSID={67030926-1754-4FDA-9788-7F731CBDAE42},Kd=Guess
```

to field.

![](./images/EXDI7.png)

# Live debugging usage

1 CPU for guest OS for live debugging is preferrable.
Experimented multi-CPU debugging was added. For successfull debugging you need set Debug-Event Filters->Break instruction exception to Handle->Not Handle, and Execution->Output. 

Set breakpoint using "bp" command, press "Run", wait until breakpoint was triggered. You can set 0x1000 breakpoints now. It is software-like breakpoints, and not limited. You can use single step command.
For debugging securekernel:

1. See securekernel.exe base address in logging output window
2. Execute command in WinDBG:

```
.reload /f securekernel.exe=<securekernel_base_address>
```

3. Make breakpoint (you need enter to securekernel context)

```
bp securekernel!IumInvokeSecureService
```

4. After bp was triggered, execute .reload command. In WinDBG Preview you need press Ctrl+Alt+V for enabling verbose mode (no chance to enable it from cmd line - Dbg.Shell.X doesn't get additional parameters, when it launching in EXDi mode).
Search images load addresses in pattern:

```
The image at <module_base_address> is securekernel.exe
The image at <module_base_address> is SKCI.dll
The image at <module_base_address> is cng.sys 

Also

Found DLL import descriptor for ext-ms-win-ntos-ksr-l1-1-0.dll, function address vector at 0xfffff8068882c5c8
Found DLL import descriptor for ext-ms-win-ntos-vmsvc-l1-1-0.dll, function address vector at 0xfffff8068882c5d8
```

![](./images/EXDI8.png)

5. Reload symbols for all modules, that will be found by WinDBG:

```
.reload /f securekernel.exe=<module_base_address> - no need for WinDBGX
.reload /f SKCI.dll=<module_base_address>
.reload /f cng.sys=<module_base_address>
```

You can load standard address space modules using same commands even you inside securekernel context

```
.reload /f ntkrnlmp.exe=<module_base_address>
```

6. Script idt_securekernel_parse_pykd.py inside archive for demo.


You can see demo video on youtube:

1. Debugging Hyper-V Windows Server 2019 guest OS using LiveCloudKd EXDI plugin - https://youtu.be/_8rQwB-ESlk
2. Microsoft Windows Server 2019 securekernel live debugging using WinDBG EXDi LiveCloudKd plugin - https://youtu.be/tRLQwsJQ-hU
3. Debugging Windows 11 25140 guest OS using LiveCloudKd EXDI plugin - https://www.youtube.com/watch?v=0VIVc0IsfRk

# Settings

There are some settings can be configured through Windows Registry (see file RegParam.reg in distrib). Path HKEY_LOCAL_MACHINE\SOFTWARE\LiveCloudKd\Parameters. All params are dword, can be 0 or 1.

1. VSMScan - enable VSM scanning for guest OS
2. UseDebugApiStopProcess parameter enables DebugActiveProcess\DebugActiveProcessStop functions


# Remarks

1. If you close debugger modules (WinDBG, or output windows, or corresponding dllhost.exe process) VM can be in suspended state. 
	For resuming it without reset start LiveCloudKd with /p option, select VM from list and then select 
	
```
	4 - Resume partition.
```
	
NtSuspendProcess and NtResumeProcess are using for manage of state vmwp.exe process. It is not need for Windows Server 2019 (stopping of virtual cpus is enough), but need for Windows 10 host OS (because of difference in CPU scheduler). If something wrong, process can be resuming using Process Explorer from SysinternalsSuite. Recommend to use Windows Server 2019
	
2. Securekernel debugging in EXDi mode is unexplored feature, there are many problems can be triggered in debugging process, so first make test (you can see example on early mentioned video):

```
bp securekernel!IumAllocateSystemHeap
bp securekernel!IumInvokeSecureService
```

then press F5 (Go command) in WinDBG or WinDBGX, if bp was triggered, repeat it. If it will be successfull, try make simple tracing in securekernel using:

```
bp securekernel!IumAllocateSystemHeap "r rcx;g"
```
command

3. Sometimes (not often) WinDBG can suddenly break in random code, as a usual debugging. It can be caused by some other exception during debugging. When that exception occures, there is no "breakpoint # hit" message.

![](./images/EXDI9.png)

4. You can switch register's context to VTL1, using "wrmsr 0x1111 1" command. "wrmsr 0x1111 0" switch back to VTL0. VTL0 and VTL1 memory is accessible all time.
5. If you want restart VM, but Hyper-V show error about existing partition, see, that LiveCloudKd, WinDBG console message windows are closed. LiveCloudKd duplicate some handles from vmwp.exe. You can manually unload debugger driver, if you kill WinDBG process, becuase some interception message will be handled by driver.

```
net stop hvmm
```
