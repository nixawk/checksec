/*

0:001> dt -r NT!_PEB
ntdll!_PEB
   +0x000 InheritedAddressSpace : UChar
   +0x001 ReadImageFileExecOptions : UChar
   +0x002 BeingDebugged    : UChar
   +0x003 BitField         : UChar
   +0x003 ImageUsesLargePages : Pos 0, 1 Bit
   +0x003 IsProtectedProcess : Pos 1, 1 Bit
   +0x003 IsLegacyProcess  : Pos 2, 1 Bit
   +0x003 IsImageDynamicallyRelocated : Pos 3, 1 Bit
   +0x003 SkipPatchingUser32Forwarders : Pos 4, 1 Bit
   +0x003 SpareBits        : Pos 5, 3 Bits
   +0x004 Mutant           : Ptr32 Void
   +0x008 ImageBaseAddress : Ptr32 Void
   +0x00c Ldr              : Ptr32 _PEB_LDR_DATA
      +0x000 Length           : Uint4B
      +0x004 Initialized      : UChar
      +0x008 SsHandle         : Ptr32 Void
      +0x00c InLoadOrderModuleList : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x014 InMemoryOrderModuleList : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x01c InInitializationOrderModuleList : _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x024 EntryInProgress  : Ptr32 Void
      +0x028 ShutdownInProgress : UChar
      +0x02c ShutdownThreadId : Ptr32 Void
   +0x010 ProcessParameters : Ptr32 _RTL_USER_PROCESS_PARAMETERS
      +0x000 MaximumLength    : Uint4B
      +0x004 Length           : Uint4B
      +0x008 Flags            : Uint4B
      +0x00c DebugFlags       : Uint4B
      +0x010 ConsoleHandle    : Ptr32 Void
      +0x014 ConsoleFlags     : Uint4B
      +0x018 StandardInput    : Ptr32 Void
      +0x01c StandardOutput   : Ptr32 Void
      +0x020 StandardError    : Ptr32 Void
      +0x024 CurrentDirectory : _CURDIR
         +0x000 DosPath          : _UNICODE_STRING
         +0x008 Handle           : Ptr32 Void
      +0x030 DllPath          : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x038 ImagePathName    : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x040 CommandLine      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x048 Environment      : Ptr32 Void
      +0x04c StartingX        : Uint4B
      +0x050 StartingY        : Uint4B
      +0x054 CountX           : Uint4B
      +0x058 CountY           : Uint4B
      +0x05c CountCharsX      : Uint4B
      +0x060 CountCharsY      : Uint4B
      +0x064 FillAttribute    : Uint4B
      +0x068 WindowFlags      : Uint4B
      +0x06c ShowWindowFlags  : Uint4B
      +0x070 WindowTitle      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x078 DesktopInfo      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x080 ShellInfo        : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x088 RuntimeData      : _UNICODE_STRING
         +0x000 Length           : Uint2B
         +0x002 MaximumLength    : Uint2B
         +0x004 Buffer           : Ptr32 Uint2B
      +0x090 CurrentDirectores : [32] _RTL_DRIVE_LETTER_CURDIR
         +0x000 Flags            : Uint2B
         +0x002 Length           : Uint2B
         +0x004 TimeStamp        : Uint4B
         +0x008 DosPath          : _STRING
      +0x290 EnvironmentSize  : Uint4B
      +0x294 EnvironmentVersion : Uint4B
   +0x014 SubSystemData    : Ptr32 Void
   +0x018 ProcessHeap      : Ptr32 Void
   +0x01c FastPebLock      : Ptr32 _RTL_CRITICAL_SECTION
      +0x000 DebugInfo        : Ptr32 _RTL_CRITICAL_SECTION_DEBUG
         +0x000 Type             : Uint2B
         +0x002 CreatorBackTraceIndex : Uint2B
         +0x004 CriticalSection  : Ptr32 _RTL_CRITICAL_SECTION
         +0x008 ProcessLocksList : _LIST_ENTRY
         +0x010 EntryCount       : Uint4B
         +0x014 ContentionCount  : Uint4B
         +0x018 Flags            : Uint4B
         +0x01c CreatorBackTraceIndexHigh : Uint2B
         +0x01e SpareUSHORT      : Uint2B
      +0x004 LockCount        : Int4B
      +0x008 RecursionCount   : Int4B
      +0x00c OwningThread     : Ptr32 Void
      +0x010 LockSemaphore    : Ptr32 Void
      +0x014 SpinCount        : Uint4B
   +0x020 AtlThunkSListPtr : Ptr32 Void
   +0x024 IFEOKey          : Ptr32 Void
   +0x028 CrossProcessFlags : Uint4B
   +0x028 ProcessInJob     : Pos 0, 1 Bit
   +0x028 ProcessInitializing : Pos 1, 1 Bit
   +0x028 ProcessUsingVEH  : Pos 2, 1 Bit
   +0x028 ProcessUsingVCH  : Pos 3, 1 Bit
   +0x028 ProcessUsingFTH  : Pos 4, 1 Bit
   +0x028 ReservedBits0    : Pos 5, 27 Bits
   +0x02c KernelCallbackTable : Ptr32 Void
   +0x02c UserSharedInfoPtr : Ptr32 Void
   +0x030 SystemReserved   : [1] Uint4B
   +0x034 AtlThunkSListPtr32 : Uint4B
   +0x038 ApiSetMap        : Ptr32 Void
   +0x03c TlsExpansionCounter : Uint4B
   +0x040 TlsBitmap        : Ptr32 Void
   +0x044 TlsBitmapBits    : [2] Uint4B
   +0x04c ReadOnlySharedMemoryBase : Ptr32 Void
   +0x050 HotpatchInformation : Ptr32 Void
   +0x054 ReadOnlyStaticServerData : Ptr32 Ptr32 Void
   +0x058 AnsiCodePageData : Ptr32 Void
   +0x05c OemCodePageData  : Ptr32 Void
   +0x060 UnicodeCaseTableData : Ptr32 Void
   +0x064 NumberOfProcessors : Uint4B
   +0x068 NtGlobalFlag     : Uint4B
   +0x070 CriticalSectionTimeout : _LARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Int4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Int4B
      +0x000 QuadPart         : Int8B
   +0x078 HeapSegmentReserve : Uint4B
   +0x07c HeapSegmentCommit : Uint4B
   +0x080 HeapDeCommitTotalFreeThreshold : Uint4B
   +0x084 HeapDeCommitFreeBlockThreshold : Uint4B
   +0x088 NumberOfHeaps    : Uint4B
   +0x08c MaximumNumberOfHeaps : Uint4B
   +0x090 ProcessHeaps     : Ptr32 Ptr32 Void
   +0x094 GdiSharedHandleTable : Ptr32 Void
   +0x098 ProcessStarterHelper : Ptr32 Void
   +0x09c GdiDCAttributeList : Uint4B
   +0x0a0 LoaderLock       : Ptr32 _RTL_CRITICAL_SECTION
      +0x000 DebugInfo        : Ptr32 _RTL_CRITICAL_SECTION_DEBUG
         +0x000 Type             : Uint2B
         +0x002 CreatorBackTraceIndex : Uint2B
         +0x004 CriticalSection  : Ptr32 _RTL_CRITICAL_SECTION
         +0x008 ProcessLocksList : _LIST_ENTRY
         +0x010 EntryCount       : Uint4B
         +0x014 ContentionCount  : Uint4B
         +0x018 Flags            : Uint4B
         +0x01c CreatorBackTraceIndexHigh : Uint2B
         +0x01e SpareUSHORT      : Uint2B
      +0x004 LockCount        : Int4B
      +0x008 RecursionCount   : Int4B
      +0x00c OwningThread     : Ptr32 Void
      +0x010 LockSemaphore    : Ptr32 Void
      +0x014 SpinCount        : Uint4B
   +0x0a4 OSMajorVersion   : Uint4B
   +0x0a8 OSMinorVersion   : Uint4B
   +0x0ac OSBuildNumber    : Uint2B
   +0x0ae OSCSDVersion     : Uint2B
   +0x0b0 OSPlatformId     : Uint4B
   +0x0b4 ImageSubsystem   : Uint4B
   +0x0b8 ImageSubsystemMajorVersion : Uint4B
   +0x0bc ImageSubsystemMinorVersion : Uint4B
   +0x0c0 ActiveProcessAffinityMask : Uint4B
   +0x0c4 GdiHandleBuffer  : [34] Uint4B
   +0x14c PostProcessInitRoutine : Ptr32     void 
   +0x150 TlsExpansionBitmap : Ptr32 Void
   +0x154 TlsExpansionBitmapBits : [32] Uint4B
   +0x1d4 SessionId        : Uint4B
   +0x1d8 AppCompatFlags   : _ULARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Uint4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
      +0x000 QuadPart         : Uint8B
   +0x1e0 AppCompatFlagsUser : _ULARGE_INTEGER
      +0x000 LowPart          : Uint4B
      +0x004 HighPart         : Uint4B
      +0x000 u                : <unnamed-tag>
         +0x000 LowPart          : Uint4B
         +0x004 HighPart         : Uint4B
      +0x000 QuadPart         : Uint8B
   +0x1e8 pShimData        : Ptr32 Void
   +0x1ec AppCompatInfo    : Ptr32 Void
   +0x1f0 CSDVersion       : _UNICODE_STRING
      +0x000 Length           : Uint2B
      +0x002 MaximumLength    : Uint2B
      +0x004 Buffer           : Ptr32 Uint2B
   +0x1f8 ActivationContextData : Ptr32 _ACTIVATION_CONTEXT_DATA
   +0x1fc ProcessAssemblyStorageMap : Ptr32 _ASSEMBLY_STORAGE_MAP
   +0x200 SystemDefaultActivationContextData : Ptr32 _ACTIVATION_CONTEXT_DATA
   +0x204 SystemAssemblyStorageMap : Ptr32 _ASSEMBLY_STORAGE_MAP
   +0x208 MinimumStackCommit : Uint4B
   +0x20c FlsCallback      : Ptr32 _FLS_CALLBACK_INFO
   +0x210 FlsListHead      : _LIST_ENTRY
      +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
      +0x004 Blink            : Ptr32 _LIST_ENTRY
         +0x000 Flink            : Ptr32 _LIST_ENTRY
         +0x004 Blink            : Ptr32 _LIST_ENTRY
   +0x218 FlsBitmap        : Ptr32 Void
   +0x21c FlsBitmapBits    : [4] Uint4B
   +0x22c FlsHighIndex     : Uint4B
   +0x230 WerRegistrationData : Ptr32 Void
   +0x234 WerShipAssertPtr : Ptr32 Void
   +0x238 pContextData     : Ptr32 Void
   +0x23c pImageHeaderHash : Ptr32 Void
   +0x240 TracingFlags     : Uint4B
   +0x240 HeapTracingEnabled : Pos 0, 1 Bit
   +0x240 CritSecTracingEnabled : Pos 1, 1 Bit
   +0x240 SpareTracingBits : Pos 2, 30 Bits
*/

typedef struct _PEB32 {
  UCHAR                          InheritedAddressSpace;
  BYTE                          ReadImageFileExecOptions;
  BYTE                          BeingDebugged;
  BYTE                          BitField;
  PVOID                         Mutant;
  PVOID                         ImageBaseAddress;
  PPEB_LDR_DATA                 Ldr;
  DWORD							ProcessParameters;
  BYTE                          Reserved4[104];
  PVOID                         Reserved5[52];
  DWORD							PostProcessInitRoutine;
  BYTE                          Reserved6[128];
  PVOID                         Reserved7[1];
  ULONG                         SessionId;
} PEB32, *PPEB32;
