This is MemProcFs plugin for reading Hyper-V Memory using LiveCloudKdSdk

Sources was taken from https://github.com/ufrisk/LeechCore-plugin

- MemProcFs can be found on https://github.com/ufrisk/MemProcFS by @ulfrisk

- LiveCloudKd (original version) https://github.com/comaeio/LiveCloudKd by @msuiche

For starting copy leechcore_device_hvmm.dll with LiveCloudKdSdk.dll and hvmm.sys to MemProcFs folder

start MemProcFs:

```
.\MemProcFS.exe -device hvmm -v
```

you must see something like that:

![](./images/1.png)

Next you can go to M: driver and use pypykatz plugin, f.e.

![](./images/2.png)






