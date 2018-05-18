
## Checksec

The code will be shared later.

```
0:001> !help checksec
Open Source Debug Extensions

!checksec - Check modules ASLR/DEP/SafeSEH settings
```

```
0:001> .load C:\Users\debug\Desktop\checksec\Debug\checksec.dll
0:001> !checksec
Image Base 	Size 		ASLR 	DEP 	Safe SEH 	Module Name 
0x00740000 	0x00030000	Yes	Yes	Yes		notepad.exe 
0x76F30000 	0x00142000	Yes	Yes	No		ntdll.dll 
0x75250000 	0x000D5000	Yes	Yes	Yes		kernel32.dll 
0x74FF0000 	0x0004B000	Yes	Yes	Yes		KERNELBASE.dll 
0x75460000 	0x000A1000	Yes	Yes	Yes		ADVAPI32.dll 
0x76450000 	0x000AC000	Yes	Yes	Yes		msvcrt.dll 
0x75550000 	0x00019000	Yes	Yes	Yes		sechost.dll 
0x763A0000 	0x000A2000	Yes	Yes	Yes		RPCRT4.dll 
0x76280000 	0x0004E000	Yes	Yes	Yes		GDI32.dll 
0x770A0000 	0x000C9000	Yes	Yes	Yes		USER32.dll 
0x77090000 	0x0000A000	Yes	Yes	Yes		LPK.dll 
0x753C0000 	0x0009D000	Yes	Yes	Yes		USP10.dll 
0x75340000 	0x0007B000	Yes	Yes	Yes		COMDLG32.dll 
0x75570000 	0x00057000	Yes	Yes	Yes		SHLWAPI.dll 
0x73CA0000 	0x0019E000	Yes	Yes	Yes		COMCTL32.dll 
0x755D0000 	0x00C4C000	Yes	Yes	Yes		SHELL32.dll 
0x6E4A0000 	0x00051000	Yes	Yes	Yes		WINSPOOL.DRV 
0x76890000 	0x0015D000	Yes	Yes	Yes		ole32.dll 
0x76650000 	0x00091000	Yes	Yes	Yes		OLEAUT32.dll 
0x74240000 	0x00009000	Yes	Yes	Yes		VERSION.dll 
0x75230000 	0x0001F000	Yes	Yes	Yes		IMM32.DLL 
0x762D0000 	0x000CD000	Yes	Yes	Yes		MSCTF.dll 
0x74DF0000 	0x0000C000	Yes	Yes	Yes		CRYPTBASE.dll 
0x73AC0000 	0x00040000	Yes	Yes	Yes		uxtheme.dll 
0x73760000 	0x00013000	Yes	Yes	Yes		dwmapi.dll 

```

## References

- https://blogs.msdn.microsoft.com/sgajjela/2013/03/02/how-to-develop-windbg-extension-dll/
- https://dimitrifourny.github.io/2014/02/28/make-plugin-for-windbg/
- https://github.com/rapid7/metasploit-framework/tree/master/external/source/byakugan
- https://www.codeproject.com/Articles/6522/Debug-Tutorial-Part-Writing-WINDBG-Extensions