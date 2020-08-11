//#include "distorm/include/distorm.h" 

#define IS_GUEST

#define IMAGE_DIRECTORY_ENTRY_EXPORT 0
#define HV_PARTITION_ID_INVALID	0x0000000000000000UI64
#define HV_STATUS_SUCCESS  0x0000	
#define HV_STATUS_INVALID_HYPERCALL_CODE  0x0002	
#define HV_STATUS_INVALID_HYPERCALL_INPUT  0x0003	
#define HV_STATUS_INVALID_ALIGNMENT  0x0004	
#define HV_STATUS_INVALID_PARAMETER  0x0005	
#define HV_STATUS_ACCESS_DENIED  0x0006	
#define HV_STATUS_INVALID_PARTITION_STATE  0x0007	
#define HV_STATUS_OPERATION_DENIED  0x0008	
#define HV_STATUS_UNKNOWN_PROPERTY  0x0009	
#define HV_STATUS_PROPERTY_VALUE_OUT_OF_RANGE  0x000A	
#define HV_STATUS_INSUFFICIENT_MEMORY  0x000B	
#define HV_STATUS_PARTITION_TOO_DEEP  0x000C	
#define HV_STATUS_INVALID_PARTITION_ID  0x000D	
#define HV_STATUS_INVALID_VP_INDEX  0x000E	


#define HV_INTERCEPT_ACCESS_MASK_NONE	0
#define HV_INTERCEPT_ACCESS_MASK_READ	1
#define HV_INTERCEPT_ACCESS_MASK_WRITE	2
#define HV_INTERCEPT_ACCESS_MASK_EXECUTE	4
#define WIN_HV_ON_INTERRUPT_OFFSET	0x1AE0 //Warning!! Hardcode constant
#define HV_SYNIC_SINT_COUNT 	16

#define VID_IOCTL_HANDLER_PATCH_OFFSET 0x123AC //Warning!! Hardcode constant, build 1803, build 17134.1 (22.05.2018)

#define HV_X64_MSR_SIMP 0x40000083
#define HV_X64_MSR_SIEFP 0x40000082
#define HV_X64_MSR_EOM 0x40000084
#define HV_X64_MSR_SINT0 0x40000090

#define MAX_PROCESSOR_COUNT 32

typedef UINT16 HV_STATUS;
typedef UINT64 HV_PARTITION_ID;
typedef UINT64 HV_GPA;
typedef UINT64 HV_ADDRESS_SPACE_ID; 
typedef HV_PARTITION_ID *PHV_PARTITION_ID;
typedef UINT64 HV_NANO100_TIME;
typedef HV_NANO100_TIME *PHV_NANO100_TIME;
typedef UINT64 HV_PARTITION_PROPERTY;
typedef HV_PARTITION_PROPERTY *PHV_PARTITION_PROPERTY;
typedef UINT8 HV_INTERCEPT_ACCESS_TYPE_MASK;
typedef UINT32 HV_VP_INDEX;

typedef struct _UINT128 {
    UINT64 lower;
    UINT64 upper;
} UINT128,
*PUINT128;



int InitWinHV(VOID);
int SignalEvent(VOID);
int PostMessage(VOID);
int ConnectPort(VOID);
int SetupInterception(VOID);
int RegisterInterrupt(VOID);
BOOLEAN PatchVidIOCtlHandler(VOID);
SIZE_T EnumActivePartitionID(VOID);
BOOLEAN VidPatchPsGetCurrentProcess(PCHAR pBuffer, ULONG len);
VOID ParseHvMessage(VOID);
VOID PrintIO_PORT_INTERCEPT_MESSAGE(VOID);
int SendMessageToHost(VOID); 
int GetActivePartitionsId();
int fHvConnectPort(VOID);


size_t ModCR0(VOID);


typedef enum _HV_REGISTER_NAME
{
    // Suspend Registers
    HvRegisterExplicitSuspend = 0x00000000,
    HvRegisterInterceptSuspend = 0x00000001,

    // Pending Interruption Register
    HvX64RegisterPendingInterruption = 0x00010002,

    // Guest Crash Registers 
    HvRegisterGuestCrashP0 = 0x00000210,
    HvRegisterGuestCrashP1 = 0x00000211,
    HvRegisterGuestCrashP2 = 0x00000212,
    HvRegisterGuestCrashP3 = 0x00000213,
    HvRegisterGuestCrashP4 = 0x00000214,
    HvRegisterGuestCrashCtl = 0x00000215,

    // Interrupt State register
    HvX64RegisterInterruptState = 0x00010003,

    // User-Mode Registers
    HvX64RegisterRax = 0x00020000,
    HvX64RegisterRcx = 0x00020001,
    HvX64RegisterRdx = 0x00020002,
    HvX64RegisterRbx = 0x00020003,
    HvX64RegisterRsp = 0x00020004,
    HvX64RegisterRbp = 0x00020005,
    HvX64RegisterRsi = 0x00020006,
    HvX64RegisterRdi = 0x00020007,
    HvX64RegisterR8 = 0x00020008,
    HvX64RegisterR9 = 0x00020009,
    HvX64RegisterR10 = 0x0002000A,
    HvX64RegisterR11 = 0x0002000B,
    HvX64RegisterR12 = 0x0002000C,
    HvX64RegisterR13 = 0x0002000D,
    HvX64RegisterR14 = 0x0002000E,
    HvX64RegisterR15 = 0x0002000F,
    HvX64RegisterRip = 0x00020010,
    HvX64RegisterRflags = 0x00020011,

    // Floating Point and Vector Registers
    HvX64RegisterXmm0 = 0x00030000,
    HvX64RegisterXmm1 = 0x00030001,
    HvX64RegisterXmm2 = 0x00030002,
    HvX64RegisterXmm3 = 0x00030003,
    HvX64RegisterXmm4 = 0x00030004,
    HvX64RegisterXmm5 = 0x00030005,
    HvX64RegisterXmm6 = 0x00030006,
    HvX64RegisterXmm7 = 0x00030007,
    HvX64RegisterXmm8 = 0x00030008,
    HvX64RegisterXmm9 = 0x00030009,
    HvX64RegisterXmm10 = 0x0003000A,
    HvX64RegisterXmm11 = 0x0003000B,
    HvX64RegisterXmm12 = 0x0003000C,
    HvX64RegisterXmm13 = 0x0003000D,
    HvX64RegisterXmm14 = 0x0003000E,
    HvX64RegisterXmm15 = 0x0003000F,
    HvX64RegisterFpMmx0 = 0x00030010,
    HvX64RegisterFpMmx1 = 0x00030011,
    HvX64RegisterFpMmx2 = 0x00030012,
    HvX64RegisterFpMmx3 = 0x00030013,
    HvX64RegisterFpMmx4 = 0x00030014,
    HvX64RegisterFpMmx5 = 0x00030015,
    HvX64RegisterFpMmx6 = 0x00030016,
    HvX64RegisterFpMmx7 = 0x00030017,
    HvX64RegisterFpControlStatus = 0x00030018,
    HvX64RegisterXmmControlStatus = 0x00030019,

    // Control Registers
    HvX64RegisterCr0 = 0x00040000,
    HvX64RegisterCr2 = 0x00040001,
    HvX64RegisterCr3 = 0x00040002,
    HvX64RegisterCr4 = 0x00040003,
    HvX64RegisterCr8 = 0x00040004,

    // Debug Registers
    HvX64RegisterDr0 = 0x00050000,
    HvX64RegisterDr1 = 0x00050001,
    HvX64RegisterDr2 = 0x00050002,
    HvX64RegisterDr3 = 0x00050003,
    HvX64RegisterDr6 = 0x00050004,
    HvX64RegisterDr7 = 0x00050005,

    // Segment Registers
    HvX64RegisterEs = 0x00060000,
    HvX64RegisterCs = 0x00060001,
    HvX64RegisterSs = 0x00060002,
    HvX64RegisterDs = 0x00060003,
    HvX64RegisterFs = 0x00060004,
    HvX64RegisterGs = 0x00060005,
    HvX64RegisterLdtr = 0x00060006,
    HvX64RegisterTr = 0x00060007,

    // Table Registers
    HvX64RegisterIdtr = 0x00070000,
    HvX64RegisterGdtr = 0x00070001,

    // Virtualized MSRs
    HvX64RegisterTsc = 0x00080000,
    HvX64RegisterEfer = 0x00080001,
    HvX64RegisterKernelGsBase = 0x00080002,
    HvX64RegisterApicBase = 0x00080003,
    HvX64RegisterPat = 0x00080004,
    HvX64RegisterSysenterCs = 0x00080005,
    HvX64RegisterSysenterEip = 0x00080006,
    HvX64RegisterSysenterEsp = 0x00080007,
    HvX64RegisterStar = 0x00080008,
    HvX64RegisterLstar = 0x00080009,
    HvX64RegisterCstar = 0x0008000A,
    HvX64RegisterSfmask = 0x0008000B,
    HvX64RegisterInitialApicId = 0x0008000C,

    //
    // Cache control MSRs
    //
    HvX64RegisterMsrMtrrCap = 0x0008000D,
    HvX64RegisterMsrMtrrDefType = 0x0008000E,
    HvX64RegisterMsrMtrrPhysBase0 = 0x00080010,
    HvX64RegisterMsrMtrrPhysBase1 = 0x00080011,
    HvX64RegisterMsrMtrrPhysBase2 = 0x00080012,
    HvX64RegisterMsrMtrrPhysBase3 = 0x00080013,
    HvX64RegisterMsrMtrrPhysBase4 = 0x00080014,
    HvX64RegisterMsrMtrrPhysBase5 = 0x00080015,
    HvX64RegisterMsrMtrrPhysBase6 = 0x00080016,
    HvX64RegisterMsrMtrrPhysBase7 = 0x00080017,
    HvX64RegisterMsrMtrrPhysMask0 = 0x00080040,
    HvX64RegisterMsrMtrrPhysMask1 = 0x00080041,
    HvX64RegisterMsrMtrrPhysMask2 = 0x00080042,
    HvX64RegisterMsrMtrrPhysMask3 = 0x00080043,
    HvX64RegisterMsrMtrrPhysMask4 = 0x00080044,
    HvX64RegisterMsrMtrrPhysMask5 = 0x00080045,
    HvX64RegisterMsrMtrrPhysMask6 = 0x00080046,
    HvX64RegisterMsrMtrrPhysMask7 = 0x00080047,
    HvX64RegisterMsrMtrrFix64k00000 = 0x00080070,
    HvX64RegisterMsrMtrrFix16k80000 = 0x00080071,
    HvX64RegisterMsrMtrrFix16kA0000 = 0x00080072,
    HvX64RegisterMsrMtrrFix4kC0000 = 0x00080073,
    HvX64RegisterMsrMtrrFix4kC8000 = 0x00080074,
    HvX64RegisterMsrMtrrFix4kD0000 = 0x00080075,
    HvX64RegisterMsrMtrrFix4kD8000 = 0x00080076,
    HvX64RegisterMsrMtrrFix4kE0000 = 0x00080077,
    HvX64RegisterMsrMtrrFix4kE8000 = 0x00080078,
    HvX64RegisterMsrMtrrFix4kF0000 = 0x00080079,
    HvX64RegisterMsrMtrrFix4kF8000 = 0x0008007A,

    // Hypervisor-defined MSRs (Misc)
    HvX64RegisterHypervisorPresent = 0x00090000,
    HvX64RegisterHypercall = 0x00090001,
    HvX64RegisterGuestOsId = 0x00090002,
    HvX64RegisterVpIndex = 0x00090003,
    HvX64RegisterVpRuntime = 0x00090004,

    // Hypervisor-defined MSRs (Synic)
    HvX64RegisterSint0 = 0x000A0000,
    HvX64RegisterSint1 = 0x000A0001,
    HvX64RegisterSint2 = 0x000A0002,
    HvX64RegisterSint3 = 0x000A0003,
    HvX64RegisterSint4 = 0x000A0004,
    HvX64RegisterSint5 = 0x000A0005,
    HvX64RegisterSint6 = 0x000A0006,
    HvX64RegisterSint7 = 0x000A0007,
    HvX64RegisterSint8 = 0x000A0008,
    HvX64RegisterSint9 = 0x000A0009,
    HvX64RegisterSint10 = 0x000A000A,
    HvX64RegisterSint11 = 0x000A000B,
    HvX64RegisterSint12 = 0x000A000C,
    HvX64RegisterSint13 = 0x000A000D,
    HvX64RegisterSint14 = 0x000A000E,
    HvX64RegisterSint15 = 0x000A000F,
    HvX64RegisterSynicBase = 0x000A0010,
    HvX64RegisterSversion = 0x000A0011,
    HvX64RegisterSifp = 0x000A0012,
    HvX64RegisterSipp = 0x000A0013,
    HvX64RegisterEom = 0x000A0014,

    // Hypervisor-defined MSRs (Synthetic Timers)
    HvX64RegisterStimer0Config = 0x000B0000,
    HvX64RegisterStimer0Count = 0x000B0001,
    HvX64RegisterStimer1Config = 0x000B0002,
    HvX64RegisterStimer1Count = 0x000B0003,
    HvX64RegisterStimer2Config = 0x000B0004,
    HvX64RegisterStimer2Count = 0x000B0005,
    HvX64RegisterStimer3Config = 0x000B0006,
    HvX64RegisterStimer3Count = 0x000B0007

} HV_REGISTER_NAME, *PHV_REGISTER_NAME;

typedef struct DECLSPEC_ALIGN(16) _HV_UINT128 {

    UINT64  Low64;
    UINT64  High64;

} HV_UINT128, *PHV_UINT128;

typedef struct { 
    UINT64 Mantissa; 
    UINT64 BiasedExponent : 15; 
    UINT64 Sign : 1; 
    UINT64 Reserved : 48; 
} HV_X64_FP_REGISTER;

typedef struct { 
    UINT16 FpControl; 
    UINT16 FpStatus; 
    UINT8 FpTag; 
    UINT8 IgnNe : 1; 
    UINT8 Reserved : 7;
    UINT16 LastFpOp; 
    union 
        { 
        UINT64 LastFpRip; 
        struct 
            { 
                UINT32 LastFpEip; 
                UINT16 LastFpCs; 
            }; 
        }; 
} HV_X64_FP_CONTROL_STATUS_REGISTER; 

typedef struct _HV_X64_SEGMENT_REGISTER
{
    UINT64 Base;
    UINT32 Limit;
    UINT16 Selector;
    union
    {
        struct
        {
            UINT16 SegmentType : 4;
            UINT16 NonSystemSegment : 1;
            UINT16 DescriptorPrivilegeLevel : 2;
            UINT16 Present : 1;
            UINT16 Reserved : 4;
            UINT16 Available : 1;
            UINT16 Long : 1;
            UINT16 Default : 1;
            UINT16 Granularity : 1;
        };
        UINT16 Attributes;
    };

} HV_X64_SEGMENT_REGISTER, *PHV_X64_SEGMENT_REGISTER;

typedef struct { 
    union 
        { 
            UINT64 LastFpRdp; 
            struct 
                { 
                    UINT32 LastFpDp; 
                    UINT16 LastFpDs; 
                }; 
        }; 
     UINT32 XmmStatusControl; 
     UINT32 XmmStatusControlMask; 
 } HV_X64_XMM_CONTROL_STATUS_REGISTER, *PHV_X64_XMM_CONTROL_STATUS_REGISTER;


typedef struct _HV_X64_TABLE_REGISTER
{
    UINT16     Pad[3];
    UINT16     Limit;
    UINT64     Base;
} HV_X64_TABLE_REGISTER, *PHV_X64_TABLE_REGISTER;

typedef union _HV_X64_FP_MMX_REGISTER
{
    HV_UINT128          AsUINT128;
    HV_X64_FP_REGISTER  Fp;
    UINT64              Mmx;
} HV_X64_FP_MMX_REGISTER, *PHV_X64_FP_MMX_REGISTER;

typedef DECLSPEC_ALIGN(16) union _HV_X64_FX_REGISTERS
{
    struct
    {
        HV_X64_FP_CONTROL_STATUS_REGISTER   FpControlStatus;
        HV_X64_XMM_CONTROL_STATUS_REGISTER  XmmControlStatus;
        HV_X64_FP_MMX_REGISTER              FpMmx[8];
        HV_UINT128                          Xmm[16];
    };

    //
    // The FX Save Area is defined to be 512 bytes in size
    //
    UINT8 FxSaveArea[512];

} HV_X64_FX_REGISTERS, *PHV_X64_FX_REGISTERS;

typedef struct
{
    UINT64 	Suspended : 1;
    UINT64 	Reserved : 63;
} HV_EXPLICIT_SUSPEND_REGISTER;

typedef struct
{
    UINT64 	Suspended : 1;
    UINT64	TlbFlushInhibit : 1;
    UINT64 	Reserved : 62;
} HV_INTERCEPT_SUSPEND_REGISTER;

typedef struct
{
    UINT64 	InterruptShadow : 1;
    UINT64	NmiMasked : 1;
    UINT64	Reserved : 62;
} HV_X64_INTERRUPT_STATE_REGISTER;

typedef struct
{
    UINT32 	InterruptionPending : 1;
    UINT32	InterruptionType : 3;
    UINT32	DeliverErrorCode : 1;
    UINT32	Reserved1 : 11;
    UINT32	InterruptionVector : 16;
    UINT32	ErrorCode;
} HV_X64_PENDING_INTERRUPTION_REGISTER;



typedef union _HV_REGISTER_VALUE
{
    HV_UINT128                              Reg128;
    UINT64                                  Reg64;
    UINT32                                  Reg32;
    UINT16                                  Reg16;
    UINT8                                   Reg8;
    HV_X64_FP_REGISTER                      Fp;
    HV_X64_FP_CONTROL_STATUS_REGISTER       FpControlStatus;
    HV_X64_XMM_CONTROL_STATUS_REGISTER      XmmControlStatus;
    HV_X64_SEGMENT_REGISTER                 Segment;
    HV_X64_TABLE_REGISTER                   Table;
    HV_EXPLICIT_SUSPEND_REGISTER            ExplicitSuspend;
    HV_INTERCEPT_SUSPEND_REGISTER           InterceptSuspend;
    HV_X64_INTERRUPT_STATE_REGISTER         InterruptState;
    HV_X64_PENDING_INTERRUPTION_REGISTER    PendingInterruption;
} HV_REGISTER_VALUE, *PHV_REGISTER_VALUE;

typedef HV_REGISTER_VALUE *PHV_REGISTER_VALUE;

typedef const HV_REGISTER_VALUE *PCHV_REGISTER_VALUE;
typedef const HV_REGISTER_NAME *PCHV_REGISTER_NAME;

typedef enum
{
	HvUnsupportedFeatureIntercept		= 1,
	HvUnsupportedFeatureTaskSwitchTss			= 2	
} HV_UNSUPPORTED_FEATURE_CODE;


typedef enum  { 
  HvPartitionPropertyPrivilegeFlags          = 0x00010000,
  HvPartitionPropertyCpuReserve              = 0x00020001,
  HvPartitionPropertyCpuCap                  = 0x00020002,
  HvPartitionPropertyCpuWeight               = 0x00020003,
  HvPartitionPropertyEmulatedTimerPeriod     = 0x00030000,
  HvPartitionPropertyEmulatedTimerControl    = 0x00030001,
  HvPartitionPropertyPmTimerAssist           = 0x00030002,
  HvPartitionPropertyDebugChannelId          = 0x00040000,
  HvPartitionPropertyVirtualTlbPageCount     = 0x00050000,
  HvPartitionPropertyProcessorVendor         = 0x00060000,
  HvPartitionPropertyProcessorFeatures       = 0x00060001,
  HvPartitionPropertyProcessorXsaveFeatures  = 0x00060002,
  HvPartitionPropertyProcessorCLFlushSize    = 0x00060003
} HV_PARTITION_PROPERTY_CODE, *PHV_PARTITION_PROPERTY_CODE;

typedef UINT16 HV_X64_IO_PORT;

typedef enum _HV_INTERCEPT_TYPE { 
  HvInterceptTypeX64IoPort     = 0x00000000,
  HvInterceptTypeX64Msr        = 0x00000001,
  HvInterceptTypeX64Cpuid      = 0x00000002,
  HvInterceptTypeX64Exception  = 0x00000003
} HV_INTERCEPT_TYPE, *PHV_INTERCEPT_TYPE;

typedef union _HV_INTERCEPT_PARAMETERS {
  UINT64         AsUINT64;
  HV_X64_IO_PORT IoPort;
  UINT32         CpuidIndex;
  UINT16         ExceptionVector;
} HV_INTERCEPT_PARAMETERS, *PHV_INTERCEPT_PARAMETERS;


typedef struct _HV_INTERCEPT_DESCRIPTOR {
  HV_INTERCEPT_TYPE       Type;
  HV_INTERCEPT_PARAMETERS Parameters;
} HV_INTERCEPT_DESCRIPTOR, *PHV_INTERCEPT_DESCRIPTOR;



typedef enum _HV_MESSAGE_TYPE { 
  HvMessageTypeNone                    = 0x00000000,
  HvMessageTypeUnmappedGpa             = 0x80000000,
  HvMessageTypeGpaIntercept            = 0x80000001,
  HvMessageTimerExpired                = 0x80000010,
  HvMessageTypeInvalidVpRegisterValue  = 0x80000020,
  HvMessageTypeUnrecoverableException  = 0x80000021,
  HvMessageTypeUnsupportedFeature      = 0x80000022,
  HvMessageTypeEventLogBufferComplete  = 0x80000040,
  HvMessageTypeX64IoPortIntercept      = 0x80010000,
  HvMessageTypeX64MsrIntercept         = 0x80010001,
  HvMessageTypeX64CpuidIntercept       = 0x80010002,
  HvMessageTypeX64ExceptionIntercept   = 0x80010003,
  HvMessageTypeX64ApicEoi              = 0x80010004,
  HvMessageTypeX64LegacyFpError        = 0x80010005
} HV_MESSAGE_TYPE, *PHV_MESSAGE_TYPE;


typedef union
{
	UINT32 AsUint32;
	struct
	{
	    UINT32 Id:24;
	    UINT32 Reserved:8;
	};
} HV_CONNECTION_ID;

typedef union
{
	UINT32 AsUint32;
	struct
	{
	    UINT32 Id:24;
	    UINT32 Reserved:8;
	};
} HV_PORT_ID;

typedef enum _HV_PORT_TYPE { 
  HvPortTypeMessage  = 1,
  HvPortTypeEvent    = 2,
  HvPortTypeMonitor  = 3
} HV_PORT_TYPE, *PHV_PORT_TYPE;


typedef struct _HV_CONNECTION_INFO {
  HV_PORT_TYPE PortType;
  UINT32       Padding;
  union {
    struct {
      UINT64 RsvdZ;
    } MessageConnectionInfo;
    struct {
      UINT64 RsvdZ;
    } EventConnectionInfo;
    struct {
      HV_GPA MonitorAddress;
    } MonitorConnectionInfo;
  };
} HV_CONNECTION_INFO, *PHV_CONNECTION_INFO;

#define HV_MESSAGE_SIZE  	256
#define HV_MESSAGE_MAX_PAYLOAD_BYTE_COUNT	240
#define HV_MESSAGE_MAX_PAYLOAD_QWORD_COUNT	30

typedef struct
{
	UINT8 MessagePending:1;
	UINT8 Reserved:7;
} HV_MESSAGE_FLAGS;


typedef struct
{
	HV_MESSAGE_TYPE	MessageType; 
	UINT16	Reserved; 
	HV_MESSAGE_FLAGS	MessageFlags; 
	UINT8	PayloadSize; 
	union 
	{
        UINT64		OriginationId;
		HV_PARTITION_ID		Sender;
		HV_PORT_ID		Port;
	};
} HV_MESSAGE_HEADER;

typedef struct
{
	HV_MESSAGE_HEADER	Header;
	UINT64	Payload[HV_MESSAGE_MAX_PAYLOAD_QWORD_COUNT];
} HV_MESSAGE, *PHV_MESSAGE;

typedef union _HV_X64_IO_PORT_ACCESS_INFO {
  UINT8  AsUINT8;
  struct {
    UINT8 AccessSize  :3;
    UINT8 StringOp  :1;
    UINT8 RepPrefix  :1;
    UINT8 Reserved  :3;
  };
} HV_X64_IO_PORT_ACCESS_INFO, *PHV_X64_IO_PORT_ACCESS_INFO;

typedef union _HV_X64_VP_EXECUTION_STATE {
  UINT16 AsUINT16;
  struct {
    UINT16 Cpl  :2;
    UINT16 Cr0Pe  :1;
    UINT16 Cr0Am  :1;
    UINT16 EferLma  :1;
    UINT16 DebugActive  :1;
    UINT16 InterruptionPending  :1;
    UINT16 Reserved  :9;
  };
} HV_X64_VP_EXECUTION_STATE, *PHV_X64_VP_EXECUTION_STATE;


typedef struct {
  HV_VP_INDEX               VpIndex;
  UINT8                     InstructionLength;
  HV_INTERCEPT_ACCESS_TYPE_MASK  InterceptAccessType;//in original undefined type HV_INTERCEPT_ACCESS_TYPE - A bitwise OR combination of HV_INTERCEPT_ACCESS_TYPE_MASK 
  HV_X64_VP_EXECUTION_STATE ExecutionState;
  HV_X64_SEGMENT_REGISTER   CsSegment;
  UINT64                    Rip;
  UINT64                    Rflags;
} HV_X64_INTERCEPT_MESSAGE_HEADER;


typedef struct _HV_X64_IO_PORT_INTERCEPT_MESSAGE {
  HV_X64_INTERCEPT_MESSAGE_HEADER Header;
  UINT16                          PortNumber;
  HV_X64_IO_PORT_ACCESS_INFO      AccessInfo;
  UINT8                           InstructionByteCount;
  UINT32                          Reserved;
  UINT64                          Rax;
  //UINT64                          InstructionBytes0;
  //UINT64                          InstructionBytes1;
  UINT8                           InstructionBytes[16];
  HV_X64_SEGMENT_REGISTER         DsSegment;
  HV_X64_SEGMENT_REGISTER         EsSegment;
  UINT64                          Rcx;
  UINT64                          Rsi;
  UINT64                          Rdi;
} HV_X64_IO_PORT_INTERCEPT_MESSAGE, *PHV_X64_IO_PORT_INTERCEPT_MESSAGE;


typedef struct _HV_X64_CPUID_INTERCEPT_MESSAGE {
  HV_X64_INTERCEPT_MESSAGE_HEADER Header;
  UINT64                          Rax;
  UINT64                          Rcx;
  UINT64                          Rdx;
  UINT64                          Rbx;
  UINT64                          DefaultResultRax;
  UINT64                          DefaultResultRcx;
  UINT64                          DefaultResultRdx;
  UINT64                          DefaultResultRbx;
} HV_X64_CPUID_INTERCEPT_MESSAGE, *PHV_X64_CPUID_INTERCEPT_MESSAGE;

typedef struct _HV_X64_MSR_INTERCEPT_MESSAGE {
  HV_X64_INTERCEPT_MESSAGE_HEADER Header;
  UINT32                          MsrNumber;
  UINT32                          Reserved;
  UINT64                          Rdx;
  UINT64                          Rax;
} HV_X64_MSR_INTERCEPT_MESSAGE, *PHV_X64_MSR_INTERCEPT_MESSAGE;

typedef union _HV_X64_EXCEPTION_INFO {
  UINT8  AsUINT8;
  struct {
    UINT8 ErrorCodeValid  :1;
    UINT8 Reserved  :7;
  };
} HV_X64_EXCEPTION_INFO, *PHV_X64_EXCEPTION_INFO;

typedef UINT32 HV_MAP_GPA_FLAGS;

#define HV_MAP_GPA_READABLE             0x1
#define HV_MAP_GPA_WRITABLE             0x2
#define HV_MAP_GPA_EXECUTABLE           0x4
#define HV_MAP_GPA_PERMISSIONS_MASK     0x7

#define HV_MAP_GPA_NOT_PRESENT          0x8
#define HV_MAP_GPA_FLAGS_MASK           0xF 



typedef enum
{
    HvCacheTypeX64Uncached = 0,
    HvCacheTypeX64WriteCombining = 1,
    HvCacheTypeX64WriteThrough = 4,
    HvCacheTypeX64WriteProtected = 5,
    HvCacheTypeX64WriteBack = 6
} HV_CACHE_TYPE;


typedef union {
  UINT64 AsUINT64; 
  struct {
        UINT8 CacheType:8; // Cache type for access 
        UINT8 InputVtl:8; 
        UINT16 ReservedZ0; 
        UINT32 ReservedZ1; 
   }; 
} HV_ACCESS_GPA_CONTROL_FLAGS;


//typedef struct
//{
//    UINT64	CacheType : 8;	// Cache type for access
//    UINT64	Reserved : 56;
//} HV_ACCESS_GPA_CONTROL_FLAGS;

typedef enum
{
    HvAccessGpaSuccess = 0,

    // GPA access failures
    HvAccessGpaUnmapped = 1,
    HvAccessGpaReadIntercept = 2,
    HvAccessGpaWriteIntercept = 3,
    HvAccessGpaIllegalOverlayAccess = 4
} HV_ACCESS_GPA_RESULT_CODE;

typedef struct
{
    HV_ACCESS_GPA_RESULT_CODE	ResultCode;
    UINT32	Reserved;
} HV_ACCESS_GPA_RESULT;

typedef HV_ACCESS_GPA_RESULT *PHV_ACCESS_GPA_RESULT;

typedef UINT64 HV_SPA_PAGE_NUMBER;
typedef UINT64 HV_GPA_PAGE_NUMBER;
typedef UINT64 HV_GVA_PAGE_NUMBER;

typedef HV_GPA_PAGE_NUMBER *PHV_GPA_PAGE_NUMBER;
typedef const HV_GPA_PAGE_NUMBER *PCHV_GPA_PAGE_NUMBER;
typedef const HV_GVA_PAGE_NUMBER *PCHV_GVA_PAGE_NUMBER;


typedef struct _HV_X64_EXCEPTION_INTERCEPT_MESSAGE {
  HV_X64_INTERCEPT_MESSAGE_HEADER Header;
  UINT16                          ExceptionVector;
  HV_X64_EXCEPTION_INFO           ExceptionInfo;
  UINT8                           InstructionByteCount;
  UINT32                          ErrorCode;
  UINT64                          ExceptionParameter;
  UINT64                          Reserved;
  UINT8                           InstructionBytes[16];
  HV_X64_SEGMENT_REGISTER         DsSegment;
  HV_X64_SEGMENT_REGISTER         SsSegment;
  UINT64                          Rax;
  UINT64                          Rcx;
  UINT64                          Rdx;
  UINT64                          Rbx;
  UINT64                          Rsp;
  UINT64                          Rbp;
  UINT64                          Rsi;
  UINT64                          Rdi;
  UINT64                          R8;
  UINT64                          R9;
  UINT64                          R10;
  UINT64                          R11;
  UINT64                          R12;
  UINT64                          R13;
  UINT64                          R14;
  UINT64                          R15;
} HV_X64_EXCEPTION_INTERCEPT_MESSAGE, *PHV_X64_EXCEPTION_INTERCEPT_MESSAGE;


typedef UINT64 HV_TRANSLATE_GVA_CONTROL_FLAGS;

#define HV_TRANSLATE_GVA_VALIDATE_READ	0x0001
#define HV_TRANSLATE_GVA_VALIDATE_WRITE	0x0002
#define HV_TRANSLATE_GVA_VALIDATE_EXECUTE	0x0004
#define HV_TRANSLATE_GVA_PRIVILEGE_EXEMPT	0x0008
#define HV_TRANSLATE_GVA_SET_PAGE_TABLE_BITS	0x0010
#define HV_TRANSLATE_GVA_TLB_FLUSH_INHIBIT	0x0020

typedef enum
{
    HvTranslateGvaSuccess = 0,

    // Translation failures
    HvTranslateGvaPageNotPresent = 1,
    HvTranslateGvaPrivilegeViolation = 2,
    HvTranslateGvaInvalidPageTableFlags = 3,

    // GPA access failures
    HvTranslateGvaGpaUnmapped = 4,
    HvTranslateGvaGpaNoReadAccess = 5,
    HvTranslateGvaGpaNoWriteAccess = 6,
    HvTranslateGvaGpaIllegalOverlayAccess = 7
} HV_TRANSLATE_GVA_RESULT_CODE;

typedef enum HV_TRANSLATE_GVA_RESULT_CODE
*PHV_TRANSLATE_GVA_RESULT_CODE;

typedef struct
{
    HV_TRANSLATE_GVA_RESULT_CODE	ResultCode;
    UINT32	CacheType : 8;
    UINT32	OverlayPage : 1;
    UINT32	Reserved3 : 23;
} HV_TRANSLATE_GVA_RESULT, *PHV_TRANSLATE_GVA_RESULT;


size_t ARCH_VMCALL(size_t);
size_t ARCH_VMCALL_REG_MOD(size_t);
size_t ArchmWinHvOnInterrupt(VOID);
size_t ArchmHvlRegisterInterruptCallback(UINT64 ArchmWinHvOnInterruptAddress,UINT64 HvlpInterruptCallbackAddress, UINT64 Index);
size_t ArchReadMsr(size_t MsrReg);
size_t Arch_SendVMCall(VOID);


DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
	_stdcall 
#endif 
	WinHvGetPartitionId(__out PHV_PARTITION_ID PartitionId);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
	_stdcall 
#endif
	WinHvGetPartitionProperty(
	  _In_   HV_PARTITION_ID PartitionId,
	  _In_   HV_PARTITION_PROPERTY_CODE PropertyCode,
	  _Out_  PHV_PARTITION_PROPERTY PropertyValue
	);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
	_stdcall 
#endif
	WinHvGetNextChildPartition(	__in  HV_PARTITION_ID	ParentId,__in  HV_PARTITION_ID	PreviousChildId,__out PHV_PARTITION_ID	NextChildId);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
_stdcall 
#endif
	WinHvSetPartitionProperty(__in HV_PARTITION_ID	PartitionId,__in HV_PARTITION_PROPERTY_CODE	PropertyCode,__in HV_PARTITION_PROPERTY	PropertyValue);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
_stdcall 
#endif 
	WinHvGetLogicalProcessorRunTime(__out PHV_NANO100_TIME	GlobalTime,	__out PHV_NANO100_TIME	LocalRunTime,__out PHV_NANO100_TIME	HypervisorTime,	__out PHV_NANO100_TIME	SomethingTime);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
_stdcall 
#endif
	WinHvSignalEvent(__in HV_CONNECTION_ID	ConnectionId,__in UINT16 FlagNumber);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
_stdcall 
#endif
	WinHvConnectPort(
	__in HV_PARTITION_ID	ConnectionPartition,
	__in HV_CONNECTION_ID	ConnectionId,
	__in HV_PARTITION_ID	PortPartition,
	__in HV_PORT_ID	PortId,
	__in PHV_CONNECTION_INFO	ConnectionInfo,
	__in UINT32 param6
	);

DECLSPEC_IMPORT HV_STATUS
#ifndef _WIN64
_stdcall
#endif
WinHvPostMessage(
  _In_  HV_CONNECTION_ID ConnectionId,
  _In_  HV_MESSAGE_TYPE MessageType,
  _In_  PVOID Message,
  _In_  UINT32 PayloadSize
);

DECLSPEC_IMPORT HV_STATUS 
#ifndef _WIN64
_stdcall 
#endif
WinHvInstallIntercept(
  _In_  HV_PARTITION_ID PartitionId,
  _In_  HV_INTERCEPT_ACCESS_TYPE_MASK AccessType,
  _In_  PHV_INTERCEPT_DESCRIPTOR Descriptor
);

DECLSPEC_IMPORT
HV_STATUS
WinHvSetVpRegisters(
    __in    HV_PARTITION_ID	PartitionId,
    __in    HV_VP_INDEX	VpIndex,
    __in    UINT32 UnknowParameter01,
    __inout UINT32	RegisterCount,
    __in_ecount(RegisterCount)
    PULONG64	RegisterNameList,
    __in_ecount(RegisterCount)
    PULONG64	RegisterValueList,
	__inout PVOID pArrayOfResult
);

DECLSPEC_IMPORT
HV_STATUS
WinHvGetVpRegisters(
    __in    HV_PARTITION_ID	PartitionId,
    __in    HV_VP_INDEX	VpIndex,
    __in    UINT32 UnknowParameter01,
    __inout UINT32	RegisterCount,
    __in_ecount(RegisterCount)
    PULONG64	RegisterNameList,
    __in_ecount(RegisterCount)
    PULONG64	RegisterValueList,
    __inout PVOID pArrayOfResult
);

DECLSPEC_IMPORT
HV_STATUS
WinHvReadGpa(
    __in  HV_PARTITION_ID	PartitionId,
    __in  HV_VP_INDEX	VpIndex,
    __in  HV_GPA	BaseGpa,
    __in  UINT32	ByteCount,
    __in  HV_ACCESS_GPA_CONTROL_FLAGS	ControlFlags,
    //__out_ecount(ByteCount) PVOID	DataBuffer,
    //__out PHV_ACCESS_GPA_RESULT	AccessResult
    __out PHV_ACCESS_GPA_RESULT	AccessResult,
    __out_ecount(ByteCount) PVOID	DataBuffer
);

DECLSPEC_IMPORT
HV_STATUS
WinHvWriteGpa(
    __in  HV_PARTITION_ID	PartitionId,
    __in  HV_VP_INDEX	VpIndex,
    __in  HV_GPA	BaseGpa,
    __in  UINT32	ByteCount,
    __in  HV_ACCESS_GPA_CONTROL_FLAGS	ControlFlags,
    __out_ecount(ByteCount) PVOID	DataBuffer,
    __out PHV_ACCESS_GPA_RESULT	AccessResult
);

DECLSPEC_IMPORT
HV_STATUS
WinHvMapGpaPages(
    __in    HV_PARTITION_ID	TargetPartitionId,
    __in    HV_GPA_PAGE_NUMBER	TargetGpaBase,
    __in    HV_MAP_GPA_FLAGS	MapFlags,
    __inout PUINT32	PageCount,
    __in_ecount(PageCount)
    PCHV_GPA_PAGE_NUMBER	SourceGpaPageList,
    PVOID UnknownParam01
);

DECLSPEC_IMPORT
HV_STATUS
WinHvTranslateVirtualAddress(
    __in  HV_PARTITION_ID	PartitionId,
    __in  HV_VP_INDEX	VpIndex,
    __in  HV_TRANSLATE_GVA_CONTROL_FLAGS	ControlFlags,
    __in  HV_GVA_PAGE_NUMBER	GvaPage,
    __out PHV_TRANSLATE_GVA_RESULT	TranslationResult,
    __out PHV_GPA_PAGE_NUMBER	GpaPage
);

#define XMM_ALIGN16 __declspec(align(16)) 
#define XMM_ALIGN64 __declspec(align(64)) 

