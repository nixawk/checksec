#ifndef __CHECKSEC
#define __CHECKSEC

#include <windows.h>
#include <imagehlp.h>
#include <wdbgexts.h>
#include <dbgeng.h>
#include <extsfns.h>

// Only for 32bit now.

typedef DWORD PROCESSINFOCLASS;

typedef NTSTATUS (WINAPI* pNtQueryInformationProcess)(
  _In_      HANDLE           ProcessHandle,
  _In_      PROCESSINFOCLASS ProcessInformationClass,
  _Out_     PVOID            ProcessInformation,
  _In_      ULONG            ProcessInformationLength,
  _Out_opt_ PULONG           ReturnLength
);

typedef struct _LSA_UNICODE_STRING {
  USHORT Length;
  USHORT MaximumLength;
  PWSTR  Buffer;
} LSA_UNICODE_STRING, *PLSA_UNICODE_STRING, UNICODE_STRING, *PUNICODE_STRING;

typedef struct _LDR_DATA_TABLE_ENTRY
{
     LIST_ENTRY InLoadOrderLinks;
     LIST_ENTRY InMemoryOrderLinks;
     LIST_ENTRY InInitializationOrderLinks;
     PVOID DllBase;
     PVOID EntryPoint;
     ULONG SizeOfImage;
     UNICODE_STRING FullDllName;
     UNICODE_STRING BaseDllName;
     ULONG Flags;
     WORD LoadCount;
     WORD TlsIndex;
     union
     {
          LIST_ENTRY HashLinks;
          struct
          {
               PVOID SectionPointer;
               ULONG CheckSum;
          };
     };
     union
     {
          ULONG TimeDateStamp;
          PVOID LoadedImports;
     };
     _ACTIVATION_CONTEXT * EntryPointActivationContext;
     PVOID PatchInformation;
     LIST_ENTRY ForwarderLinks;
     LIST_ENTRY ServiceTagLinks;
     LIST_ENTRY StaticLinks;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;

typedef struct _PEB_LDR_DATA {
	ULONG Length;
	BOOLEAN Initialized;
	HANDLE SsHandle;
	LIST_ENTRY InLoadOrderModuleList;
	LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
	PVOID EntryInProgress;
	BOOLEAN ShutdownInProgress;
	HANDLE ShutdownThreadId;
} PEB_LDR_DATA, *PPEB_LDR_DATA;


typedef struct _PEB {
  UCHAR                          InheritedAddressSpace;     // PEB + 0x00
  UCHAR                          ReadImageFileExecOptions;  // PEB + 0x01
  UCHAR                          BeingDebugged;             // PEB + 0x02
  UCHAR                          BitField;                  // PEB + 0x03
  PVOID                          Mutant;                    // PEB + 0x04
  PVOID                          ImageBaseAddress;          // PEB + 0x08
  PPEB_LDR_DATA                  Ldr;                       // PEB + 0x0C
  PVOID							 ProcessParameters;         // PEB + 0x10
  PVOID                          SubSystemData;             // PEB + 0x14
  PVOID                          ProcessHeap;               // PEB + 0x18
  PVOID                          FastPebLock;               // PEB + 0x1C
  PVOID                          AtlThunkSListPtr;          // PEB + 0x20
  PVOID                          IFEOKey;                   // PEB + 0x24
  DWORD                          CrossProcessFlags;         // PEB + 0x28
  PVOID                          KernelCallbackTable;       // PEB + 0x2C
  BYTE                           Reserved1[284];
  DWORD							 PostProcessInitRoutine;    // PEB + 0x14C
  BYTE                           Reserved2[128];
  PVOID                          Reserved3[1];
  ULONG                          SessionId;
} PEB, *PPEB;

typedef struct _PROCESS_BASIC_INFORMATION {
    PVOID Reserved1;
    PPEB PebBaseAddress;
    PVOID Reserved2[2];
    ULONG_PTR UniqueProcessId;
    PVOID Reserved3;
} PROCESS_BASIC_INFORMATION;

#endif