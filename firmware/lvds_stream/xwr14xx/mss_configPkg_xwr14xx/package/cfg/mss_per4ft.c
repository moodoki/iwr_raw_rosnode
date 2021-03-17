/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-D21
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/family/arm/v7r/tms570/Core.h>
#include <ti/sysbios/family/arm/v7r/vim/Hwi.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/CacheNull.h>
#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapBuf.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/rti/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysStd.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.exc.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.v7r.tms570.Core INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_v7r_vim_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_v7r_vim_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_v7r_vim_Hwi_Module__ ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_v7r_vim_Hwi_Object__ {
    const ti_sysbios_family_arm_v7r_vim_Hwi_Fxns__ *__fxns;
    ti_sysbios_family_arm_v7r_vim_Hwi_Type type;
    xdc_UArg arg;
    ti_sysbios_family_arm_v7r_vim_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_v7r_vim_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_v7r_vim_Hwi_Instance_State__hookEnv hookEnv;
    __TA_ti_sysbios_family_arm_v7r_vim_Hwi_Instance_State__disableMask disableMask;
} ti_sysbios_family_arm_v7r_vim_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_v7r_vim_Hwi_Object__ obj;
} ti_sysbios_family_arm_v7r_vim_Hwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.CacheNull INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_v7r_vim_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_v7r_vim_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapBuf INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapBuf_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapBuf_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapBuf_Module__ ti_sysbios_heaps_HeapBuf_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_heaps_HeapBuf_Object__ {
    const ti_sysbios_heaps_HeapBuf_Fxns__ *__fxns;
    xdc_SizeT blockSize;
    xdc_SizeT align;
    xdc_UInt numBlocks;
    xdc_runtime_Memory_Size bufSize;
    __TA_ti_sysbios_heaps_HeapBuf_Instance_State__buf buf;
    xdc_UInt numFreeBlocks;
    xdc_UInt minFreeBlocks;
    ti_sysbios_knl_Queue_Object__ Object_field_freeList;
} ti_sysbios_heaps_HeapBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapBuf_Object__ obj;
} ti_sysbios_heaps_HeapBuf_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_rti_Timer_Object__ {
    const ti_sysbios_timers_rti_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt prescale;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_Bool createHwi;
} ti_sysbios_timers_rti_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_rti_Timer_Object__ obj;
} ti_sysbios_timers_rti_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.rti.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_rti_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_rti_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_rti_Timer_Module__ ti_sysbios_timers_rti_Timer_Module__root__V;

/* <-- ti_sysbios_timers_rti_Timer_Object */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysStd INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_ICache_Interface__BASE__C, ".const:ti_sysbios_interfaces_ICache_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ICache_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8028, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8029, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.hal.CacheNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__FXNS__C, ".const:ti_sysbios_hal_CacheNull_Module__FXNS__C");
const ti_sysbios_hal_CacheNull_Fxns__ ti_sysbios_hal_CacheNull_Module__FXNS__C = {
    &ti_sysbios_interfaces_ICache_Interface__BASE__C, /* __base */
    &ti_sysbios_hal_CacheNull_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_hal_CacheNull_enable__E,
    ti_sysbios_hal_CacheNull_disable__E,
    ti_sysbios_hal_CacheNull_inv__E,
    ti_sysbios_hal_CacheNull_wb__E,
    ti_sysbios_hal_CacheNull_wbInv__E,
    ti_sysbios_hal_CacheNull_wbAll__E,
    ti_sysbios_hal_CacheNull_wbInvAll__E,
    ti_sysbios_hal_CacheNull_wait__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapBuf_Module__FXNS__C");
const ti_sysbios_heaps_HeapBuf_Fxns__ ti_sysbios_heaps_HeapBuf_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapBuf_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapBuf_alloc__E,
    ti_sysbios_heaps_HeapBuf_free__E,
    ti_sysbios_heaps_HeapBuf_isBlocking__E,
    ti_sysbios_heaps_HeapBuf_getStats__E,
    {
        ti_sysbios_heaps_HeapBuf_Object__create__S,
        ti_sysbios_heaps_HeapBuf_Object__delete__S,
        ti_sysbios_heaps_HeapBuf_Handle__label__S,
        0x8020, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8021, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__FXNS__C, ".const:xdc_runtime_SysStd_Module__FXNS__C");
const xdc_runtime_SysStd_Fxns__ xdc_runtime_SysStd_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysStd_abort__E,
    xdc_runtime_SysStd_exit__E,
    xdc_runtime_SysStd_flush__E,
    xdc_runtime_SysStd_putch__E,
    xdc_runtime_SysStd_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.exc.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_exc_Exception_Module_State__ {
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers excStackBuffers;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStack excStack;
    xdc_SizeT excStackSize;
} ti_sysbios_family_arm_exc_Exception_Module_State__;

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1];

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V;

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1];


/*
 * ======== ti.sysbios.family.arm.v7r.tms570.Core DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_v7r_vim_Hwi_Object__ ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__ {
    xdc_Char *taskSP;
    xdc_Char *isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    xdc_UInt *vimRam;
    __TA_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__dispatchTable dispatchTable;
    __TA_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__zeroLatencyFIQMask zeroLatencyFIQMask;
    xdc_UInt spuriousInts;
} ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__;

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__fiqStack ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A, ".myFiqStack");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__fiqStack ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A[2048] __attribute__ ((section(".myFiqStack")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__fiqStack ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_dispatchTable__A[128];

/* Module__state__V */
ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__ ti_sysbios_family_arm_v7r_vim_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A */
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_channelMap ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A[128];

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A */
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A[4];

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A */
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A[4];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.CacheNull DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapBuf DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_heaps_HeapBuf_Module_State__ {
    __TA_ti_sysbios_heaps_HeapBuf_Module_State__constructedHeaps constructedHeaps;
} ti_sysbios_heaps_HeapBuf_Module_State__;

/* Module__state__V */
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V;


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, "systemHeap");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768] __attribute__ ((section("systemHeap")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.rti.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_timers_rti_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_rti_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__handles handles;
} ti_sysbios_timers_rti_Timer_Module_State__;

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__device ti_sysbios_timers_rti_Timer_Module_State_0_device__A[2];

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__intFreqs ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A[2];

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__handles ti_sysbios_timers_rti_Timer_Module_State_0_handles__A[2];

/* Module__state__V */
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_heaps_HeapBuf_Module_startup__E */
extern xdc_Int ti_sysbios_heaps_HeapBuf_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_v7r_vim_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_v7r_tms570_Core_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_v7r_tms570_Core_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_rti_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_rti_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysStd DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6679];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[52];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O, ".const:ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O");
__FAR__ const xdc_SizeT ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O = offsetof(ti_sysbios_heaps_HeapBuf_Object__,Object_field_freeList);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/ti/mmwave_sdk_02_01_00_04/packages/ti/drivers/test/lvds_stream/xwr14xx/mss_configPkg_xwr14xx/package/cfg/mss_per4ft");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7R");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.cortexR");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.R4Ft");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */

xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    ~0, /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    0,  /* msg */
    {
        0,  /* mod */
        0,  /* file */
        0   /* line */
    }
};

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_arm_v7r_vim_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_v7r_vim_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_v7r_tms570_Core_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_v7r_tms570_Core_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_CString stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_timers_rti_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_timers_rti_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi TEMPLATE ========
 */

#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_vectors, ".vecs");

extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_v7r_vim_Hwi_dispatchIRQ__I();

/*
 * The FIQ offset register is placed at an offset of #-0x1B0 w.r.t. the FIQ
 * vector table entry such that the vector table entry can directly reference
 * it.
 */
const UInt32 ti_sysbios_family_arm_v7r_vim_Hwi_vectors[] = {
    (UInt32)(0xE59FF018),                       /* ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),                       /* ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),                       /* ldr  pc, swiFunc           */
    (UInt32)(0xE59FF018),                       /* ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),                       /* ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),                       /* ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),                       /* ldr  pc, irqFunc           */
    (UInt32)(0xE51FF1B0),                       /* ldr  pc, [pc, #-0x1b0]     */
    (UInt32)(&_c_int00),          /* resetFunc                  */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),  /* undefInstFunc              */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),            /* swiFunc                    */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),  /* prefetchAbortFunc          */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I),      /* dataAbortFunc              */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),       /* reservedFunc               */
    (UInt32)(&ti_sysbios_family_arm_v7r_vim_Hwi_dispatchIRQ__I)             /* irqFunc                    */
};

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== ti_sysbios_rts_gnu_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_gnu_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_gnu_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_gnu_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.v7r.tms570.Core TEMPLATE ========
 */


#define IMM_FLAG_REG                  0xFFF7AC18
#define IMM_WORD1_REG                 0xFFF7AC84
#define IMM_REG_RW32(X)               (*(volatile UInt32*)(X))


extern Void _c_int00();

Void ti_sysbios_family_arm_v7r_tms570_Core_resetC__I()
{
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xbebc200,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0xbebc200,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__id ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__count ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__table ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj ti_sysbios_family_arm_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__id ti_sysbios_family_arm_TaskSupport_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__count ti_sysbios_family_arm_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__heap ti_sysbios_family_arm_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__sizeof ti_sysbios_family_arm_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__table ti_sysbios_family_arm_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_defaultStackSize ti_sysbios_family_arm_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_stackAlignment ti_sysbios_family_arm_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.exc.Exception INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_exc_Exception_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[4096];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1] = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_exc_Exception_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_exc_Exception_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A),  /* excStackBuffers */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A),  /* excStack */
    (xdc_SizeT)0x1000,  /* excStackSize */
};

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFuncs__A, ".const:ti_sysbios_family_arm_exc_Exception_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_exc_Exception_ExcContext*))0),  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gateObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj ti_sysbios_family_arm_exc_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__id__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerDefined ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__count__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__count ti_sysbios_family_arm_exc_Exception_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__heap__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__heap ti_sysbios_family_arm_exc_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__sizeof__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__sizeof ti_sysbios_family_arm_exc_Exception_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_Object__table__C, ".const:ti_sysbios_family_arm_exc_Exception_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__table ti_sysbios_family_arm_exc_Exception_Object__table__C = 0;

/* E_swi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_swi__C, ".const:ti_sysbios_family_arm_exc_Exception_E_swi__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)4599) << 16 | 0);

/* E_prefetchAbort__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)4632) << 16 | 0);

/* E_dataAbort__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_dataAbort__C, ".const:ti_sysbios_family_arm_exc_Exception_E_dataAbort__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)4675) << 16 | 0);

/* E_undefinedInstruction__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C, ".const:ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)4714) << 16 | 0);

/* enableDecode__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_enableDecode__C, ".const:ti_sysbios_family_arm_exc_Exception_enableDecode__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_enableDecode ti_sysbios_family_arm_exc_Exception_enableDecode__C = 1;

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFunc__C, ".const:ti_sysbios_family_arm_exc_Exception_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc ti_sysbios_family_arm_exc_Exception_excHookFunc__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_exc_Exception_excHookFuncs__C, ".const:ti_sysbios_family_arm_exc_Exception_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__C = ((CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs)ti_sysbios_family_arm_exc_Exception_excHookFuncs__A);


/*
 * ======== ti.sysbios.family.arm.v7r.tms570.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsEnabled ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsIncluded ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsMask__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsMask ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__gateObj__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__gateObj ti_sysbios_family_arm_v7r_tms570_Core_Module__gateObj__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__gatePrms__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__gatePrms ti_sysbios_family_arm_v7r_tms570_Core_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__id__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__id ti_sysbios_family_arm_v7r_tms570_Core_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerDefined ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerObj__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerObj ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn0 ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn1 ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn2 ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn4 ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn8 ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_v7r_tms570_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Object__count__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Object__count ti_sysbios_family_arm_v7r_tms570_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Object__heap__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Object__heap ti_sysbios_family_arm_v7r_tms570_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Object__sizeof__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Object__sizeof ti_sysbios_family_arm_v7r_tms570_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_Object__table__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_Object__table ti_sysbios_family_arm_v7r_tms570_Core_Object__table__C = 0;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_numCores__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_numCores__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_numCores ti_sysbios_family_arm_v7r_tms570_Core_numCores__C = (xdc_UInt)0x1;

/* E_mismatchedIds__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_E_mismatchedIds__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_E_mismatchedIds__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_E_mismatchedIds ti_sysbios_family_arm_v7r_tms570_Core_E_mismatchedIds__C = (((xdc_runtime_Error_Id)4843) << 16 | 0);

/* id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_tms570_Core_id__C, ".const:ti_sysbios_family_arm_v7r_tms570_Core_id__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_tms570_Core_id ti_sysbios_family_arm_v7r_tms570_Core_id__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_v7r_vim_Hwi_Params ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_v7r_vim_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    ti_sysbios_family_arm_v7r_vim_Hwi_Type_IRQ,  /* type */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_v7r_vim_Hwi_Module__ ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_v7r_vim_Hwi_Object__ ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ti_sysbios_family_arm_v7r_vim_Hwi_Type_IRQ,  /* type */
        ((xdc_UArg)((void*)(ti_sysbios_timers_rti_Timer_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_timers_rti_Timer_periodicStub__E)),  /* fxn */
        (xdc_Int)0x2,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
        {
            (xdc_UInt)0x4,  /* [0] */
            (xdc_UInt)0x0,  /* [1] */
            (xdc_UInt)0x0,  /* [2] */
            (xdc_UInt)0x0,  /* [3] */
        },  /* disableMask */
    },
};

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A */
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__fiqStack ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A[2048];

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_dispatchTable__A[128] = {
    0,  /* [0] */
    0,  /* [1] */
    (ti_sysbios_family_arm_v7r_vim_Hwi_Handle)&ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__V[0],  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    0,  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    0,  /* [35] */
    0,  /* [36] */
    0,  /* [37] */
    0,  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_v7r_vim_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__ ti_sysbios_family_arm_v7r_vim_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_v7r_vim_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_v7r_vim_Hwi_Module_State__ ti_sysbios_family_arm_v7r_vim_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((void*)ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_fiqStack__A),  /* fiqStack */
    (xdc_SizeT)0x800,  /* fiqStackSize */
    ((xdc_UInt*)(0xfff82000)),  /* vimRam */
    ((void*)ti_sysbios_family_arm_v7r_vim_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    {
        (xdc_UInt)0xffffffff,  /* [0] */
        (xdc_UInt)0xffffffff,  /* [1] */
        (xdc_UInt)0xffffffff,  /* [2] */
        (xdc_UInt)0xffffffff,  /* [3] */
    },  /* zeroLatencyFIQMask */
    (xdc_UInt)0x0,  /* spuriousInts */
};

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A");
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_channelMap ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A[128] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x1,  /* [1] */
    (xdc_UInt8)0x2,  /* [2] */
    (xdc_UInt8)0x3,  /* [3] */
    (xdc_UInt8)0x4,  /* [4] */
    (xdc_UInt8)0x5,  /* [5] */
    (xdc_UInt8)0x6,  /* [6] */
    (xdc_UInt8)0x7,  /* [7] */
    (xdc_UInt8)0x8,  /* [8] */
    (xdc_UInt8)0x9,  /* [9] */
    (xdc_UInt8)0xa,  /* [10] */
    (xdc_UInt8)0xb,  /* [11] */
    (xdc_UInt8)0xc,  /* [12] */
    (xdc_UInt8)0xd,  /* [13] */
    (xdc_UInt8)0xe,  /* [14] */
    (xdc_UInt8)0xf,  /* [15] */
    (xdc_UInt8)0x10,  /* [16] */
    (xdc_UInt8)0x11,  /* [17] */
    (xdc_UInt8)0x12,  /* [18] */
    (xdc_UInt8)0x13,  /* [19] */
    (xdc_UInt8)0x14,  /* [20] */
    (xdc_UInt8)0x15,  /* [21] */
    (xdc_UInt8)0x16,  /* [22] */
    (xdc_UInt8)0x17,  /* [23] */
    (xdc_UInt8)0x18,  /* [24] */
    (xdc_UInt8)0x19,  /* [25] */
    (xdc_UInt8)0x1a,  /* [26] */
    (xdc_UInt8)0x1b,  /* [27] */
    (xdc_UInt8)0x1c,  /* [28] */
    (xdc_UInt8)0x1d,  /* [29] */
    (xdc_UInt8)0x1e,  /* [30] */
    (xdc_UInt8)0x1f,  /* [31] */
    (xdc_UInt8)0x20,  /* [32] */
    (xdc_UInt8)0x21,  /* [33] */
    (xdc_UInt8)0x22,  /* [34] */
    (xdc_UInt8)0x23,  /* [35] */
    (xdc_UInt8)0x24,  /* [36] */
    (xdc_UInt8)0x25,  /* [37] */
    (xdc_UInt8)0x26,  /* [38] */
    (xdc_UInt8)0x27,  /* [39] */
    (xdc_UInt8)0x28,  /* [40] */
    (xdc_UInt8)0x29,  /* [41] */
    (xdc_UInt8)0x2a,  /* [42] */
    (xdc_UInt8)0x2b,  /* [43] */
    (xdc_UInt8)0x2c,  /* [44] */
    (xdc_UInt8)0x2d,  /* [45] */
    (xdc_UInt8)0x2e,  /* [46] */
    (xdc_UInt8)0x2f,  /* [47] */
    (xdc_UInt8)0x30,  /* [48] */
    (xdc_UInt8)0x31,  /* [49] */
    (xdc_UInt8)0x32,  /* [50] */
    (xdc_UInt8)0x33,  /* [51] */
    (xdc_UInt8)0x34,  /* [52] */
    (xdc_UInt8)0x35,  /* [53] */
    (xdc_UInt8)0x36,  /* [54] */
    (xdc_UInt8)0x37,  /* [55] */
    (xdc_UInt8)0x38,  /* [56] */
    (xdc_UInt8)0x39,  /* [57] */
    (xdc_UInt8)0x3a,  /* [58] */
    (xdc_UInt8)0x3b,  /* [59] */
    (xdc_UInt8)0x3c,  /* [60] */
    (xdc_UInt8)0x3d,  /* [61] */
    (xdc_UInt8)0x3e,  /* [62] */
    (xdc_UInt8)0x3f,  /* [63] */
    (xdc_UInt8)0x40,  /* [64] */
    (xdc_UInt8)0x41,  /* [65] */
    (xdc_UInt8)0x42,  /* [66] */
    (xdc_UInt8)0x43,  /* [67] */
    (xdc_UInt8)0x44,  /* [68] */
    (xdc_UInt8)0x45,  /* [69] */
    (xdc_UInt8)0x46,  /* [70] */
    (xdc_UInt8)0x47,  /* [71] */
    (xdc_UInt8)0x48,  /* [72] */
    (xdc_UInt8)0x49,  /* [73] */
    (xdc_UInt8)0x4a,  /* [74] */
    (xdc_UInt8)0x4b,  /* [75] */
    (xdc_UInt8)0x4c,  /* [76] */
    (xdc_UInt8)0x4d,  /* [77] */
    (xdc_UInt8)0x4e,  /* [78] */
    (xdc_UInt8)0x4f,  /* [79] */
    (xdc_UInt8)0x50,  /* [80] */
    (xdc_UInt8)0x51,  /* [81] */
    (xdc_UInt8)0x52,  /* [82] */
    (xdc_UInt8)0x53,  /* [83] */
    (xdc_UInt8)0x54,  /* [84] */
    (xdc_UInt8)0x55,  /* [85] */
    (xdc_UInt8)0x56,  /* [86] */
    (xdc_UInt8)0x57,  /* [87] */
    (xdc_UInt8)0x58,  /* [88] */
    (xdc_UInt8)0x59,  /* [89] */
    (xdc_UInt8)0x5a,  /* [90] */
    (xdc_UInt8)0x5b,  /* [91] */
    (xdc_UInt8)0x5c,  /* [92] */
    (xdc_UInt8)0x5d,  /* [93] */
    (xdc_UInt8)0x5e,  /* [94] */
    (xdc_UInt8)0x5f,  /* [95] */
    (xdc_UInt8)0x60,  /* [96] */
    (xdc_UInt8)0x61,  /* [97] */
    (xdc_UInt8)0x62,  /* [98] */
    (xdc_UInt8)0x63,  /* [99] */
    (xdc_UInt8)0x64,  /* [100] */
    (xdc_UInt8)0x65,  /* [101] */
    (xdc_UInt8)0x66,  /* [102] */
    (xdc_UInt8)0x67,  /* [103] */
    (xdc_UInt8)0x68,  /* [104] */
    (xdc_UInt8)0x69,  /* [105] */
    (xdc_UInt8)0x6a,  /* [106] */
    (xdc_UInt8)0x6b,  /* [107] */
    (xdc_UInt8)0x6c,  /* [108] */
    (xdc_UInt8)0x6d,  /* [109] */
    (xdc_UInt8)0x6e,  /* [110] */
    (xdc_UInt8)0x6f,  /* [111] */
    (xdc_UInt8)0x70,  /* [112] */
    (xdc_UInt8)0x71,  /* [113] */
    (xdc_UInt8)0x72,  /* [114] */
    (xdc_UInt8)0x73,  /* [115] */
    (xdc_UInt8)0x74,  /* [116] */
    (xdc_UInt8)0x75,  /* [117] */
    (xdc_UInt8)0x76,  /* [118] */
    (xdc_UInt8)0x77,  /* [119] */
    (xdc_UInt8)0x78,  /* [120] */
    (xdc_UInt8)0x79,  /* [121] */
    (xdc_UInt8)0x7a,  /* [122] */
    (xdc_UInt8)0x7b,  /* [123] */
    (xdc_UInt8)0x7c,  /* [124] */
    (xdc_UInt8)0x7d,  /* [125] */
    (xdc_UInt8)0x7e,  /* [126] */
    (xdc_UInt8)0x7f,  /* [127] */
};

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A");
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A[4] = {
    (xdc_UInt32)0x4,  /* [0] */
    (xdc_UInt32)0x0,  /* [1] */
    (xdc_UInt32)0x0,  /* [2] */
    (xdc_UInt32)0x0,  /* [3] */
};

/* --> ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A");
const __T1_ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A[4] = {
    (xdc_UInt32)0xffffffff,  /* [0] */
    (xdc_UInt32)0xffffffff,  /* [1] */
    (xdc_UInt32)0xffffffff,  /* [2] */
    (xdc_UInt32)0xffffffff,  /* [3] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__id ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Object__count ti_sysbios_family_arm_v7r_vim_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Object__heap ti_sysbios_family_arm_v7r_vim_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Object__sizeof ti_sysbios_family_arm_v7r_vim_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_v7r_vim_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_Object__table ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__C = ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_v7r_vim_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_v7r_vim_Hwi_NUM_INTERRUPTS__C = (xdc_UInt)0x80;

/* core0VectorTableAddress__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_core0VectorTableAddress__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_core0VectorTableAddress__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_core0VectorTableAddress ti_sysbios_family_arm_v7r_vim_Hwi_core0VectorTableAddress__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_core0VectorTableAddress)(0x0));

/* core1VectorTableAddress__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_core1VectorTableAddress__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_core1VectorTableAddress__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_core1VectorTableAddress ti_sysbios_family_arm_v7r_vim_Hwi_core1VectorTableAddress__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_core1VectorTableAddress)(0x0));

/* phantomFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_phantomFunc__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_phantomFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_phantomFunc ti_sysbios_family_arm_v7r_vim_Hwi_phantomFunc__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_phantomFunc)((xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_phantomIntHandler__I));

/* fiqStack__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_fiqStack__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_fiqStack__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_fiqStack ti_sysbios_family_arm_v7r_vim_Hwi_fiqStack__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_fiqStack)0);

/* errataInitEsm__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_errataInitEsm__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_errataInitEsm__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_errataInitEsm ti_sysbios_family_arm_v7r_vim_Hwi_errataInitEsm__C = 1;

/* resetVIM__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_resetVIM__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_resetVIM__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_resetVIM ti_sysbios_family_arm_v7r_vim_Hwi_resetVIM__C = 1;

/* A_badChannelId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_A_badChannelId__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_A_badChannelId__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_A_badChannelId ti_sysbios_family_arm_v7r_vim_Hwi_A_badChannelId__C = (((xdc_runtime_Assert_Id)2763) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_E_alreadyDefined ti_sysbios_family_arm_v7r_vim_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4355) << 16 | 0);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_E_badIntNum ti_sysbios_family_arm_v7r_vim_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4403) << 16 | 0);

/* E_undefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_E_undefined__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_E_undefined__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_E_undefined ti_sysbios_family_arm_v7r_vim_Hwi_E_undefined__C = (((xdc_runtime_Error_Id)4443) << 16 | 0);

/* E_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_E_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_E_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_E_unsupportedMaskingOption ti_sysbios_family_arm_v7r_vim_Hwi_E_unsupportedMaskingOption__C = (((xdc_runtime_Error_Id)4482) << 16 | 0);

/* E_phantomInterrupt__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_E_phantomInterrupt__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_E_phantomInterrupt__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_E_phantomInterrupt ti_sysbios_family_arm_v7r_vim_Hwi_E_phantomInterrupt__C = (((xdc_runtime_Error_Id)4545) << 16 | 0);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_LM_begin ti_sysbios_family_arm_v7r_vim_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6214) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_LD_end ti_sysbios_family_arm_v7r_vim_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6284) << 16 | 512);

/* channelMap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_channelMap ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_channelMap)ti_sysbios_family_arm_v7r_vim_Hwi_channelMap__A);

/* intReqEnaSet__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet)ti_sysbios_family_arm_v7r_vim_Hwi_intReqEnaSet__A);

/* wakeEnaSet__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet)ti_sysbios_family_arm_v7r_vim_Hwi_wakeEnaSet__A);

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_swiDisable ti_sysbios_family_arm_v7r_vim_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_swiRestoreHwi ti_sysbios_family_arm_v7r_vim_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_taskDisable ti_sysbios_family_arm_v7r_vim_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_taskRestoreHwi ti_sysbios_family_arm_v7r_vim_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_v7r_vim_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_hooks__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_v7r_vim_Hwi_hooks ti_sysbios_family_arm_v7r_vim_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3287) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Cache_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Cache_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__diagsMask__C, ".const:ti_sysbios_hal_Cache_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((CT__ti_sysbios_hal_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gateObj__C, ".const:ti_sysbios_hal_Cache_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((CT__ti_sysbios_hal_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__gatePrms__C, ".const:ti_sysbios_hal_Cache_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((CT__ti_sysbios_hal_Cache_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__id__C, ".const:ti_sysbios_hal_Cache_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerDefined__C, ".const:ti_sysbios_hal_Cache_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerObj__C, ".const:ti_sysbios_hal_Cache_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((CT__ti_sysbios_hal_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Cache_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Cache_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__count__C, ".const:ti_sysbios_hal_Cache_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__heap__C, ".const:ti_sysbios_hal_Cache_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__sizeof__C, ".const:ti_sysbios_hal_Cache_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Cache_Object__table__C, ".const:ti_sysbios_hal_Cache_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.CacheNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__diagsEnabled__C, ".const:ti_sysbios_hal_CacheNull_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsEnabled ti_sysbios_hal_CacheNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__diagsIncluded__C, ".const:ti_sysbios_hal_CacheNull_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsIncluded ti_sysbios_hal_CacheNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__diagsMask__C, ".const:ti_sysbios_hal_CacheNull_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsMask ti_sysbios_hal_CacheNull_Module__diagsMask__C = ((CT__ti_sysbios_hal_CacheNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__gateObj__C, ".const:ti_sysbios_hal_CacheNull_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__gateObj ti_sysbios_hal_CacheNull_Module__gateObj__C = ((CT__ti_sysbios_hal_CacheNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__gatePrms__C, ".const:ti_sysbios_hal_CacheNull_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__gatePrms ti_sysbios_hal_CacheNull_Module__gatePrms__C = ((CT__ti_sysbios_hal_CacheNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__id__C, ".const:ti_sysbios_hal_CacheNull_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__id ti_sysbios_hal_CacheNull_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerDefined__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerDefined ti_sysbios_hal_CacheNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerObj__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerObj ti_sysbios_hal_CacheNull_Module__loggerObj__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerFxn0__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn0 ti_sysbios_hal_CacheNull_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerFxn1__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn1 ti_sysbios_hal_CacheNull_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerFxn2__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn2 ti_sysbios_hal_CacheNull_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerFxn4__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn4 ti_sysbios_hal_CacheNull_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Module__loggerFxn8__C, ".const:ti_sysbios_hal_CacheNull_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn8 ti_sysbios_hal_CacheNull_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Object__count__C, ".const:ti_sysbios_hal_CacheNull_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Object__count ti_sysbios_hal_CacheNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Object__heap__C, ".const:ti_sysbios_hal_CacheNull_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Object__heap ti_sysbios_hal_CacheNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Object__sizeof__C, ".const:ti_sysbios_hal_CacheNull_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Object__sizeof ti_sysbios_hal_CacheNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_CacheNull_Object__table__C, ".const:ti_sysbios_hal_CacheNull_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_CacheNull_Object__table ti_sysbios_hal_CacheNull_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Core_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsEnabled ti_sysbios_hal_Core_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Core_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsIncluded ti_sysbios_hal_Core_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__diagsMask__C, ".const:ti_sysbios_hal_Core_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsMask ti_sysbios_hal_Core_Module__diagsMask__C = ((CT__ti_sysbios_hal_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gateObj__C, ".const:ti_sysbios_hal_Core_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gateObj ti_sysbios_hal_Core_Module__gateObj__C = ((CT__ti_sysbios_hal_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__gatePrms__C, ".const:ti_sysbios_hal_Core_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__gatePrms ti_sysbios_hal_Core_Module__gatePrms__C = ((CT__ti_sysbios_hal_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__id__C, ".const:ti_sysbios_hal_Core_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__id ti_sysbios_hal_Core_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerDefined__C, ".const:ti_sysbios_hal_Core_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerDefined ti_sysbios_hal_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerObj__C, ".const:ti_sysbios_hal_Core_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerObj ti_sysbios_hal_Core_Module__loggerObj__C = ((CT__ti_sysbios_hal_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn0 ti_sysbios_hal_Core_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn1 ti_sysbios_hal_Core_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn2 ti_sysbios_hal_Core_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn4 ti_sysbios_hal_Core_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Core_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn8 ti_sysbios_hal_Core_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__count__C, ".const:ti_sysbios_hal_Core_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__count ti_sysbios_hal_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__heap__C, ".const:ti_sysbios_hal_Core_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__heap ti_sysbios_hal_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__sizeof__C, ".const:ti_sysbios_hal_Core_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__sizeof ti_sysbios_hal_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_Object__table__C, ".const:ti_sysbios_hal_Core_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Core_Object__table ti_sysbios_hal_Core_Object__table__C = 0;

/* numCores__C */
#pragma DATA_SECTION(ti_sysbios_hal_Core_numCores__C, ".const:ti_sysbios_hal_Core_numCores__C");
__FAR__ const CT__ti_sysbios_hal_Core_numCores ti_sysbios_hal_Core_numCores__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4806) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapBuf_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapBuf_Params ti_sysbios_heaps_HeapBuf_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* align */
    (xdc_UInt)0x0,  /* numBlocks */
    (xdc_SizeT)0x0,  /* blockSize */
    ((xdc_UArg)(0x0)),  /* bufSize */
    ((xdc_Ptr)(0x0)),  /* buf */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapBuf_Module__ ti_sysbios_heaps_HeapBuf_Module__root__V = {
    {&ti_sysbios_heaps_HeapBuf_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapBuf_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_heaps_HeapBuf_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V __attribute__ ((section(".data_ti_sysbios_heaps_HeapBuf_Module__state__V")));
#endif
#endif
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V = {
    ((void*)0),  /* constructedHeaps */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsEnabled ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsIncluded ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask ti_sysbios_heaps_HeapBuf_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapBuf_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__gateObj ti_sysbios_heaps_HeapBuf_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapBuf_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms ti_sysbios_heaps_HeapBuf_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__id__C, ".const:ti_sysbios_heaps_HeapBuf_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__id ti_sysbios_heaps_HeapBuf_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerDefined ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj ti_sysbios_heaps_HeapBuf_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0 ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1 ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2 ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4 ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8 ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__count__C, ".const:ti_sysbios_heaps_HeapBuf_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__count ti_sysbios_heaps_HeapBuf_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__heap__C, ".const:ti_sysbios_heaps_HeapBuf_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__heap ti_sysbios_heaps_HeapBuf_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapBuf_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__sizeof ti_sysbios_heaps_HeapBuf_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__table__C, ".const:ti_sysbios_heaps_HeapBuf_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__table ti_sysbios_heaps_HeapBuf_Object__table__C = 0;

/* A_nullBuf__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_nullBuf__C, ".const:ti_sysbios_heaps_HeapBuf_A_nullBuf__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_nullBuf ti_sysbios_heaps_HeapBuf_A_nullBuf__C = (((xdc_runtime_Assert_Id)1933) << 16 | 16);

/* A_bufAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_bufAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_bufAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_bufAlign ti_sysbios_heaps_HeapBuf_A_bufAlign__C = (((xdc_runtime_Assert_Id)1962) << 16 | 16);

/* A_invalidAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidAlign ti_sysbios_heaps_HeapBuf_A_invalidAlign__C = (((xdc_runtime_Assert_Id)1987) << 16 | 16);

/* A_invalidRequestedAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C = (((xdc_runtime_Assert_Id)2077) << 16 | 16);

/* A_invalidBlockSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidBlockSize ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C = (((xdc_runtime_Assert_Id)2166) << 16 | 16);

/* A_zeroBlocks__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C, ".const:ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_zeroBlocks ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C = (((xdc_runtime_Assert_Id)2226) << 16 | 16);

/* A_zeroBufSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_zeroBufSize ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C = (((xdc_runtime_Assert_Id)2251) << 16 | 16);

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidBufSize ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)2274) << 16 | 16);

/* A_noBlocksToFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C, ".const:ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_noBlocksToFree ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C = (((xdc_runtime_Assert_Id)2332) << 16 | 16);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidFree ti_sysbios_heaps_HeapBuf_A_invalidFree__C = (((xdc_runtime_Assert_Id)2392) << 16 | 16);

/* E_size__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_E_size__C, ".const:ti_sysbios_heaps_HeapBuf_E_size__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_E_size ti_sysbios_heaps_HeapBuf_E_size__C = (((xdc_runtime_Error_Id)4271) << 16 | 0);

/* trackMaxAllocs__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C, ".const:ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_trackMaxAllocs ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C = 0;

/* numConstructedHeaps__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C, ".const:ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_numConstructedHeaps ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x8000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2420) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2456) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2501) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4319) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2392) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5269) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5291) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5309) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)553) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)634) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5341) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5395) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)704) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)751) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)790) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)833) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)896) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5476) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5506) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1044) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1099) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)833) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1164) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1218) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5549) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5596) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5614) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1312) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1369) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5654) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5722) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5767) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5808) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5840) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5888) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5944) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5975) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6058) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6144) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4006) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4049) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4100) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4131) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4204) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1418) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1487) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1541) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1595) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1658) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1708) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1743) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1776) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1860) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.rti.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_rti_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_rti_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_timers_rti_Timer_Params ti_sysbios_timers_rti_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_rti_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_rti_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    1,  /* createHwi */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt8)0x1,  /* prescale */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_rti_Timer_Module__ ti_sysbios_timers_rti_Timer_Module__root__V = {
    {&ti_sysbios_timers_rti_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_rti_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_timers_rti_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x1,  /* prescale */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x2,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
        1,  /* createHwi */
    },
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__device ti_sysbios_timers_rti_Timer_Module_State_0_device__A[2] = {
    {
        (xdc_Int)0x2,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0xfffffc00)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_Int)0x3,  /* intNum */
        (xdc_Int)(-0x0 - 1),  /* eventId */
        ((xdc_Ptr)((void*)0xfffffc00)),  /* baseAddr */
    },  /* [1] */
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__intFreqs ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A[2] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xbebc200,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xbebc200,  /* lo */
    },  /* [1] */
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__handles ti_sysbios_timers_rti_Timer_Module_State_0_handles__A[2] = {
    (ti_sysbios_timers_rti_Timer_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_timers_rti_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_timers_rti_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V = {
    (xdc_UInt)0x2,  /* availMask */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsEnabled ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsIncluded ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsMask ti_sysbios_timers_rti_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_rti_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_rti_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__gateObj ti_sysbios_timers_rti_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_rti_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_rti_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__gatePrms ti_sysbios_timers_rti_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_rti_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__id__C, ".const:ti_sysbios_timers_rti_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__id ti_sysbios_timers_rti_Timer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerDefined ti_sysbios_timers_rti_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerObj ti_sysbios_timers_rti_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0 ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1 ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2 ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4 ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8 ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__count__C, ".const:ti_sysbios_timers_rti_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__count ti_sysbios_timers_rti_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__heap__C, ".const:ti_sysbios_timers_rti_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__heap ti_sysbios_timers_rti_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_rti_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__sizeof ti_sysbios_timers_rti_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_rti_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__table__C, ".const:ti_sysbios_timers_rti_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__table ti_sysbios_timers_rti_Timer_Object__table__C = ti_sysbios_timers_rti_Timer_Object__table__V;

/* A_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_A_invalidTimer__C, ".const:ti_sysbios_timers_rti_Timer_A_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_A_invalidTimer ti_sysbios_timers_rti_Timer_A_invalidTimer__C = (((xdc_runtime_Assert_Id)3486) << 16 | 16);

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_rti_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_invalidTimer ti_sysbios_timers_rti_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4908) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_rti_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_notAvailable ti_sysbios_timers_rti_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4944) << 16 | 0);

/* E_invalidHwiMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C, ".const:ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_invalidHwiMask ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C = (((xdc_runtime_Error_Id)4983) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_rti_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_cannotSupport ti_sysbios_timers_rti_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5035) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_anyMask__C, ".const:ti_sysbios_timers_rti_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_anyMask ti_sysbios_timers_rti_Timer_anyMask__C = (xdc_UInt)0x3;

/* continueOnSuspend__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_continueOnSuspend__C, ".const:ti_sysbios_timers_rti_Timer_continueOnSuspend__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_continueOnSuspend ti_sysbios_timers_rti_Timer_continueOnSuspend__C = 0;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_startupNeeded__C, ".const:ti_sysbios_timers_rti_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_startupNeeded ti_sysbios_timers_rti_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_rti_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_numTimerDevices ti_sysbios_timers_rti_Timer_numTimerDevices__C = (xdc_Int)0x2;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3766) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3788) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3792) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3826) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5093) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5117) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5138) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5157) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5174) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5188) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5204) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5211) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5222) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5232) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5251) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_heaps_HeapBuf_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_v7r_tms570_Core_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_rti_Timer_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    1,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysStd INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsEnabled__C, ".const:xdc_runtime_SysStd_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsEnabled xdc_runtime_SysStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsIncluded__C, ".const:xdc_runtime_SysStd_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsIncluded xdc_runtime_SysStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsMask__C, ".const:xdc_runtime_SysStd_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsMask xdc_runtime_SysStd_Module__diagsMask__C = ((CT__xdc_runtime_SysStd_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gateObj__C, ".const:xdc_runtime_SysStd_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gateObj xdc_runtime_SysStd_Module__gateObj__C = ((CT__xdc_runtime_SysStd_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gatePrms__C, ".const:xdc_runtime_SysStd_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gatePrms xdc_runtime_SysStd_Module__gatePrms__C = ((CT__xdc_runtime_SysStd_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__id__C, ".const:xdc_runtime_SysStd_Module__id__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__id xdc_runtime_SysStd_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerDefined__C, ".const:xdc_runtime_SysStd_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerDefined xdc_runtime_SysStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerObj__C, ".const:xdc_runtime_SysStd_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerObj xdc_runtime_SysStd_Module__loggerObj__C = ((CT__xdc_runtime_SysStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn0__C, ".const:xdc_runtime_SysStd_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn0 xdc_runtime_SysStd_Module__loggerFxn0__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn1__C, ".const:xdc_runtime_SysStd_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn1 xdc_runtime_SysStd_Module__loggerFxn1__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn2__C, ".const:xdc_runtime_SysStd_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn2 xdc_runtime_SysStd_Module__loggerFxn2__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn4__C, ".const:xdc_runtime_SysStd_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn4 xdc_runtime_SysStd_Module__loggerFxn4__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn8__C, ".const:xdc_runtime_SysStd_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn8 xdc_runtime_SysStd_Module__loggerFxn8__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__count__C, ".const:xdc_runtime_SysStd_Object__count__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__count xdc_runtime_SysStd_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__heap__C, ".const:xdc_runtime_SysStd_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__heap xdc_runtime_SysStd_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__sizeof__C, ".const:xdc_runtime_SysStd_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__sizeof xdc_runtime_SysStd_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__table__C, ".const:xdc_runtime_SysStd_Object__table__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__table xdc_runtime_SysStd_Object__table__C = 0;


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6679] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x75,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x61,  /* [491] */
    (xdc_Char)0x6c,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x67,  /* [494] */
    (xdc_Char)0x6e,  /* [495] */
    (xdc_Char)0x65,  /* [496] */
    (xdc_Char)0x64,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x73,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x41,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x64,  /* [504] */
    (xdc_Char)0x72,  /* [505] */
    (xdc_Char)0x3a,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x4d,  /* [508] */
    (xdc_Char)0x50,  /* [509] */
    (xdc_Char)0x55,  /* [510] */
    (xdc_Char)0x20,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x67,  /* [514] */
    (xdc_Char)0x69,  /* [515] */
    (xdc_Char)0x6f,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x65,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x61,  /* [524] */
    (xdc_Char)0x64,  /* [525] */
    (xdc_Char)0x64,  /* [526] */
    (xdc_Char)0x72,  /* [527] */
    (xdc_Char)0x65,  /* [528] */
    (xdc_Char)0x73,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x61,  /* [536] */
    (xdc_Char)0x6c,  /* [537] */
    (xdc_Char)0x69,  /* [538] */
    (xdc_Char)0x67,  /* [539] */
    (xdc_Char)0x6e,  /* [540] */
    (xdc_Char)0x65,  /* [541] */
    (xdc_Char)0x64,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x74,  /* [544] */
    (xdc_Char)0x6f,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x73,  /* [547] */
    (xdc_Char)0x69,  /* [548] */
    (xdc_Char)0x7a,  /* [549] */
    (xdc_Char)0x65,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x63,  /* [555] */
    (xdc_Char)0x6c,  /* [556] */
    (xdc_Char)0x6f,  /* [557] */
    (xdc_Char)0x63,  /* [558] */
    (xdc_Char)0x6b,  /* [559] */
    (xdc_Char)0x44,  /* [560] */
    (xdc_Char)0x69,  /* [561] */
    (xdc_Char)0x73,  /* [562] */
    (xdc_Char)0x61,  /* [563] */
    (xdc_Char)0x62,  /* [564] */
    (xdc_Char)0x6c,  /* [565] */
    (xdc_Char)0x65,  /* [566] */
    (xdc_Char)0x64,  /* [567] */
    (xdc_Char)0x3a,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x43,  /* [570] */
    (xdc_Char)0x61,  /* [571] */
    (xdc_Char)0x6e,  /* [572] */
    (xdc_Char)0x6e,  /* [573] */
    (xdc_Char)0x6f,  /* [574] */
    (xdc_Char)0x74,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x63,  /* [577] */
    (xdc_Char)0x72,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x65,  /* [582] */
    (xdc_Char)0x20,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x63,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6f,  /* [588] */
    (xdc_Char)0x63,  /* [589] */
    (xdc_Char)0x6b,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x73,  /* [594] */
    (xdc_Char)0x74,  /* [595] */
    (xdc_Char)0x61,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x63,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x20,  /* [600] */
    (xdc_Char)0x77,  /* [601] */
    (xdc_Char)0x68,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x42,  /* [606] */
    (xdc_Char)0x49,  /* [607] */
    (xdc_Char)0x4f,  /* [608] */
    (xdc_Char)0x53,  /* [609] */
    (xdc_Char)0x2e,  /* [610] */
    (xdc_Char)0x63,  /* [611] */
    (xdc_Char)0x6c,  /* [612] */
    (xdc_Char)0x6f,  /* [613] */
    (xdc_Char)0x63,  /* [614] */
    (xdc_Char)0x6b,  /* [615] */
    (xdc_Char)0x45,  /* [616] */
    (xdc_Char)0x6e,  /* [617] */
    (xdc_Char)0x61,  /* [618] */
    (xdc_Char)0x62,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x65,  /* [621] */
    (xdc_Char)0x64,  /* [622] */
    (xdc_Char)0x20,  /* [623] */
    (xdc_Char)0x69,  /* [624] */
    (xdc_Char)0x73,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x66,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x6c,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x2e,  /* [632] */
    (xdc_Char)0x0,  /* [633] */
    (xdc_Char)0x41,  /* [634] */
    (xdc_Char)0x5f,  /* [635] */
    (xdc_Char)0x62,  /* [636] */
    (xdc_Char)0x61,  /* [637] */
    (xdc_Char)0x64,  /* [638] */
    (xdc_Char)0x54,  /* [639] */
    (xdc_Char)0x68,  /* [640] */
    (xdc_Char)0x72,  /* [641] */
    (xdc_Char)0x65,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x79,  /* [646] */
    (xdc_Char)0x70,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x3a,  /* [649] */
    (xdc_Char)0x20,  /* [650] */
    (xdc_Char)0x43,  /* [651] */
    (xdc_Char)0x61,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x6f,  /* [655] */
    (xdc_Char)0x74,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x63,  /* [658] */
    (xdc_Char)0x72,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x61,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x65,  /* [663] */
    (xdc_Char)0x2f,  /* [664] */
    (xdc_Char)0x64,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x6c,  /* [667] */
    (xdc_Char)0x65,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x65,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x61,  /* [672] */
    (xdc_Char)0x20,  /* [673] */
    (xdc_Char)0x43,  /* [674] */
    (xdc_Char)0x6c,  /* [675] */
    (xdc_Char)0x6f,  /* [676] */
    (xdc_Char)0x63,  /* [677] */
    (xdc_Char)0x6b,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x66,  /* [680] */
    (xdc_Char)0x72,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x6d,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x48,  /* [685] */
    (xdc_Char)0x77,  /* [686] */
    (xdc_Char)0x69,  /* [687] */
    (xdc_Char)0x20,  /* [688] */
    (xdc_Char)0x6f,  /* [689] */
    (xdc_Char)0x72,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x53,  /* [692] */
    (xdc_Char)0x77,  /* [693] */
    (xdc_Char)0x69,  /* [694] */
    (xdc_Char)0x20,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x68,  /* [697] */
    (xdc_Char)0x72,  /* [698] */
    (xdc_Char)0x65,  /* [699] */
    (xdc_Char)0x61,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x2e,  /* [702] */
    (xdc_Char)0x0,  /* [703] */
    (xdc_Char)0x41,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x6e,  /* [706] */
    (xdc_Char)0x75,  /* [707] */
    (xdc_Char)0x6c,  /* [708] */
    (xdc_Char)0x6c,  /* [709] */
    (xdc_Char)0x45,  /* [710] */
    (xdc_Char)0x76,  /* [711] */
    (xdc_Char)0x65,  /* [712] */
    (xdc_Char)0x6e,  /* [713] */
    (xdc_Char)0x74,  /* [714] */
    (xdc_Char)0x4d,  /* [715] */
    (xdc_Char)0x61,  /* [716] */
    (xdc_Char)0x73,  /* [717] */
    (xdc_Char)0x6b,  /* [718] */
    (xdc_Char)0x73,  /* [719] */
    (xdc_Char)0x3a,  /* [720] */
    (xdc_Char)0x20,  /* [721] */
    (xdc_Char)0x6f,  /* [722] */
    (xdc_Char)0x72,  /* [723] */
    (xdc_Char)0x4d,  /* [724] */
    (xdc_Char)0x61,  /* [725] */
    (xdc_Char)0x73,  /* [726] */
    (xdc_Char)0x6b,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x61,  /* [729] */
    (xdc_Char)0x6e,  /* [730] */
    (xdc_Char)0x64,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x61,  /* [733] */
    (xdc_Char)0x6e,  /* [734] */
    (xdc_Char)0x64,  /* [735] */
    (xdc_Char)0x4d,  /* [736] */
    (xdc_Char)0x61,  /* [737] */
    (xdc_Char)0x73,  /* [738] */
    (xdc_Char)0x6b,  /* [739] */
    (xdc_Char)0x20,  /* [740] */
    (xdc_Char)0x61,  /* [741] */
    (xdc_Char)0x72,  /* [742] */
    (xdc_Char)0x65,  /* [743] */
    (xdc_Char)0x20,  /* [744] */
    (xdc_Char)0x6e,  /* [745] */
    (xdc_Char)0x75,  /* [746] */
    (xdc_Char)0x6c,  /* [747] */
    (xdc_Char)0x6c,  /* [748] */
    (xdc_Char)0x2e,  /* [749] */
    (xdc_Char)0x0,  /* [750] */
    (xdc_Char)0x41,  /* [751] */
    (xdc_Char)0x5f,  /* [752] */
    (xdc_Char)0x6e,  /* [753] */
    (xdc_Char)0x75,  /* [754] */
    (xdc_Char)0x6c,  /* [755] */
    (xdc_Char)0x6c,  /* [756] */
    (xdc_Char)0x45,  /* [757] */
    (xdc_Char)0x76,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x6e,  /* [760] */
    (xdc_Char)0x74,  /* [761] */
    (xdc_Char)0x49,  /* [762] */
    (xdc_Char)0x64,  /* [763] */
    (xdc_Char)0x3a,  /* [764] */
    (xdc_Char)0x20,  /* [765] */
    (xdc_Char)0x70,  /* [766] */
    (xdc_Char)0x6f,  /* [767] */
    (xdc_Char)0x73,  /* [768] */
    (xdc_Char)0x74,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x64,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x65,  /* [773] */
    (xdc_Char)0x76,  /* [774] */
    (xdc_Char)0x65,  /* [775] */
    (xdc_Char)0x6e,  /* [776] */
    (xdc_Char)0x74,  /* [777] */
    (xdc_Char)0x49,  /* [778] */
    (xdc_Char)0x64,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x69,  /* [781] */
    (xdc_Char)0x73,  /* [782] */
    (xdc_Char)0x20,  /* [783] */
    (xdc_Char)0x6e,  /* [784] */
    (xdc_Char)0x75,  /* [785] */
    (xdc_Char)0x6c,  /* [786] */
    (xdc_Char)0x6c,  /* [787] */
    (xdc_Char)0x2e,  /* [788] */
    (xdc_Char)0x0,  /* [789] */
    (xdc_Char)0x41,  /* [790] */
    (xdc_Char)0x5f,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x76,  /* [793] */
    (xdc_Char)0x65,  /* [794] */
    (xdc_Char)0x6e,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x49,  /* [797] */
    (xdc_Char)0x6e,  /* [798] */
    (xdc_Char)0x55,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x65,  /* [801] */
    (xdc_Char)0x3a,  /* [802] */
    (xdc_Char)0x20,  /* [803] */
    (xdc_Char)0x45,  /* [804] */
    (xdc_Char)0x76,  /* [805] */
    (xdc_Char)0x65,  /* [806] */
    (xdc_Char)0x6e,  /* [807] */
    (xdc_Char)0x74,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x6f,  /* [810] */
    (xdc_Char)0x62,  /* [811] */
    (xdc_Char)0x6a,  /* [812] */
    (xdc_Char)0x65,  /* [813] */
    (xdc_Char)0x63,  /* [814] */
    (xdc_Char)0x74,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x72,  /* [819] */
    (xdc_Char)0x65,  /* [820] */
    (xdc_Char)0x61,  /* [821] */
    (xdc_Char)0x64,  /* [822] */
    (xdc_Char)0x79,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x69,  /* [825] */
    (xdc_Char)0x6e,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x75,  /* [828] */
    (xdc_Char)0x73,  /* [829] */
    (xdc_Char)0x65,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x0,  /* [832] */
    (xdc_Char)0x41,  /* [833] */
    (xdc_Char)0x5f,  /* [834] */
    (xdc_Char)0x62,  /* [835] */
    (xdc_Char)0x61,  /* [836] */
    (xdc_Char)0x64,  /* [837] */
    (xdc_Char)0x43,  /* [838] */
    (xdc_Char)0x6f,  /* [839] */
    (xdc_Char)0x6e,  /* [840] */
    (xdc_Char)0x74,  /* [841] */
    (xdc_Char)0x65,  /* [842] */
    (xdc_Char)0x78,  /* [843] */
    (xdc_Char)0x74,  /* [844] */
    (xdc_Char)0x3a,  /* [845] */
    (xdc_Char)0x20,  /* [846] */
    (xdc_Char)0x62,  /* [847] */
    (xdc_Char)0x61,  /* [848] */
    (xdc_Char)0x64,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x63,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x6c,  /* [853] */
    (xdc_Char)0x6c,  /* [854] */
    (xdc_Char)0x69,  /* [855] */
    (xdc_Char)0x6e,  /* [856] */
    (xdc_Char)0x67,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x63,  /* [859] */
    (xdc_Char)0x6f,  /* [860] */
    (xdc_Char)0x6e,  /* [861] */
    (xdc_Char)0x74,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x78,  /* [864] */
    (xdc_Char)0x74,  /* [865] */
    (xdc_Char)0x2e,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x4d,  /* [868] */
    (xdc_Char)0x75,  /* [869] */
    (xdc_Char)0x73,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x62,  /* [873] */
    (xdc_Char)0x65,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x63,  /* [876] */
    (xdc_Char)0x61,  /* [877] */
    (xdc_Char)0x6c,  /* [878] */
    (xdc_Char)0x6c,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x64,  /* [881] */
    (xdc_Char)0x20,  /* [882] */
    (xdc_Char)0x66,  /* [883] */
    (xdc_Char)0x72,  /* [884] */
    (xdc_Char)0x6f,  /* [885] */
    (xdc_Char)0x6d,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x61,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x54,  /* [890] */
    (xdc_Char)0x61,  /* [891] */
    (xdc_Char)0x73,  /* [892] */
    (xdc_Char)0x6b,  /* [893] */
    (xdc_Char)0x2e,  /* [894] */
    (xdc_Char)0x0,  /* [895] */
    (xdc_Char)0x41,  /* [896] */
    (xdc_Char)0x5f,  /* [897] */
    (xdc_Char)0x70,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x6e,  /* [900] */
    (xdc_Char)0x64,  /* [901] */
    (xdc_Char)0x54,  /* [902] */
    (xdc_Char)0x61,  /* [903] */
    (xdc_Char)0x73,  /* [904] */
    (xdc_Char)0x6b,  /* [905] */
    (xdc_Char)0x44,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x62,  /* [910] */
    (xdc_Char)0x6c,  /* [911] */
    (xdc_Char)0x65,  /* [912] */
    (xdc_Char)0x64,  /* [913] */
    (xdc_Char)0x3a,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x43,  /* [916] */
    (xdc_Char)0x61,  /* [917] */
    (xdc_Char)0x6e,  /* [918] */
    (xdc_Char)0x6e,  /* [919] */
    (xdc_Char)0x6f,  /* [920] */
    (xdc_Char)0x74,  /* [921] */
    (xdc_Char)0x20,  /* [922] */
    (xdc_Char)0x63,  /* [923] */
    (xdc_Char)0x61,  /* [924] */
    (xdc_Char)0x6c,  /* [925] */
    (xdc_Char)0x6c,  /* [926] */
    (xdc_Char)0x20,  /* [927] */
    (xdc_Char)0x45,  /* [928] */
    (xdc_Char)0x76,  /* [929] */
    (xdc_Char)0x65,  /* [930] */
    (xdc_Char)0x6e,  /* [931] */
    (xdc_Char)0x74,  /* [932] */
    (xdc_Char)0x5f,  /* [933] */
    (xdc_Char)0x70,  /* [934] */
    (xdc_Char)0x65,  /* [935] */
    (xdc_Char)0x6e,  /* [936] */
    (xdc_Char)0x64,  /* [937] */
    (xdc_Char)0x28,  /* [938] */
    (xdc_Char)0x29,  /* [939] */
    (xdc_Char)0x20,  /* [940] */
    (xdc_Char)0x77,  /* [941] */
    (xdc_Char)0x68,  /* [942] */
    (xdc_Char)0x69,  /* [943] */
    (xdc_Char)0x6c,  /* [944] */
    (xdc_Char)0x65,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x74,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x65,  /* [949] */
    (xdc_Char)0x20,  /* [950] */
    (xdc_Char)0x54,  /* [951] */
    (xdc_Char)0x61,  /* [952] */
    (xdc_Char)0x73,  /* [953] */
    (xdc_Char)0x6b,  /* [954] */
    (xdc_Char)0x20,  /* [955] */
    (xdc_Char)0x6f,  /* [956] */
    (xdc_Char)0x72,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x53,  /* [959] */
    (xdc_Char)0x77,  /* [960] */
    (xdc_Char)0x69,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x73,  /* [963] */
    (xdc_Char)0x63,  /* [964] */
    (xdc_Char)0x68,  /* [965] */
    (xdc_Char)0x65,  /* [966] */
    (xdc_Char)0x64,  /* [967] */
    (xdc_Char)0x75,  /* [968] */
    (xdc_Char)0x6c,  /* [969] */
    (xdc_Char)0x65,  /* [970] */
    (xdc_Char)0x72,  /* [971] */
    (xdc_Char)0x20,  /* [972] */
    (xdc_Char)0x69,  /* [973] */
    (xdc_Char)0x73,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x64,  /* [976] */
    (xdc_Char)0x69,  /* [977] */
    (xdc_Char)0x73,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x62,  /* [980] */
    (xdc_Char)0x6c,  /* [981] */
    (xdc_Char)0x65,  /* [982] */
    (xdc_Char)0x64,  /* [983] */
    (xdc_Char)0x2e,  /* [984] */
    (xdc_Char)0x0,  /* [985] */
    (xdc_Char)0x4d,  /* [986] */
    (xdc_Char)0x61,  /* [987] */
    (xdc_Char)0x69,  /* [988] */
    (xdc_Char)0x6c,  /* [989] */
    (xdc_Char)0x62,  /* [990] */
    (xdc_Char)0x6f,  /* [991] */
    (xdc_Char)0x78,  /* [992] */
    (xdc_Char)0x5f,  /* [993] */
    (xdc_Char)0x63,  /* [994] */
    (xdc_Char)0x72,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x61,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x65,  /* [999] */
    (xdc_Char)0x27,  /* [1000] */
    (xdc_Char)0x73,  /* [1001] */
    (xdc_Char)0x20,  /* [1002] */
    (xdc_Char)0x62,  /* [1003] */
    (xdc_Char)0x75,  /* [1004] */
    (xdc_Char)0x66,  /* [1005] */
    (xdc_Char)0x53,  /* [1006] */
    (xdc_Char)0x69,  /* [1007] */
    (xdc_Char)0x7a,  /* [1008] */
    (xdc_Char)0x65,  /* [1009] */
    (xdc_Char)0x20,  /* [1010] */
    (xdc_Char)0x70,  /* [1011] */
    (xdc_Char)0x61,  /* [1012] */
    (xdc_Char)0x72,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x6d,  /* [1015] */
    (xdc_Char)0x65,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x65,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x69,  /* [1021] */
    (xdc_Char)0x73,  /* [1022] */
    (xdc_Char)0x20,  /* [1023] */
    (xdc_Char)0x69,  /* [1024] */
    (xdc_Char)0x6e,  /* [1025] */
    (xdc_Char)0x76,  /* [1026] */
    (xdc_Char)0x61,  /* [1027] */
    (xdc_Char)0x6c,  /* [1028] */
    (xdc_Char)0x69,  /* [1029] */
    (xdc_Char)0x64,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x28,  /* [1032] */
    (xdc_Char)0x74,  /* [1033] */
    (xdc_Char)0x6f,  /* [1034] */
    (xdc_Char)0x6f,  /* [1035] */
    (xdc_Char)0x20,  /* [1036] */
    (xdc_Char)0x73,  /* [1037] */
    (xdc_Char)0x6d,  /* [1038] */
    (xdc_Char)0x61,  /* [1039] */
    (xdc_Char)0x6c,  /* [1040] */
    (xdc_Char)0x6c,  /* [1041] */
    (xdc_Char)0x29,  /* [1042] */
    (xdc_Char)0x0,  /* [1043] */
    (xdc_Char)0x41,  /* [1044] */
    (xdc_Char)0x5f,  /* [1045] */
    (xdc_Char)0x6e,  /* [1046] */
    (xdc_Char)0x6f,  /* [1047] */
    (xdc_Char)0x45,  /* [1048] */
    (xdc_Char)0x76,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x6e,  /* [1051] */
    (xdc_Char)0x74,  /* [1052] */
    (xdc_Char)0x73,  /* [1053] */
    (xdc_Char)0x3a,  /* [1054] */
    (xdc_Char)0x20,  /* [1055] */
    (xdc_Char)0x54,  /* [1056] */
    (xdc_Char)0x68,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x20,  /* [1059] */
    (xdc_Char)0x45,  /* [1060] */
    (xdc_Char)0x76,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x6e,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x2e,  /* [1065] */
    (xdc_Char)0x73,  /* [1066] */
    (xdc_Char)0x75,  /* [1067] */
    (xdc_Char)0x70,  /* [1068] */
    (xdc_Char)0x70,  /* [1069] */
    (xdc_Char)0x6f,  /* [1070] */
    (xdc_Char)0x72,  /* [1071] */
    (xdc_Char)0x74,  /* [1072] */
    (xdc_Char)0x73,  /* [1073] */
    (xdc_Char)0x45,  /* [1074] */
    (xdc_Char)0x76,  /* [1075] */
    (xdc_Char)0x65,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x20,  /* [1080] */
    (xdc_Char)0x66,  /* [1081] */
    (xdc_Char)0x6c,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x67,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x69,  /* [1086] */
    (xdc_Char)0x73,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x64,  /* [1089] */
    (xdc_Char)0x69,  /* [1090] */
    (xdc_Char)0x73,  /* [1091] */
    (xdc_Char)0x61,  /* [1092] */
    (xdc_Char)0x62,  /* [1093] */
    (xdc_Char)0x6c,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x64,  /* [1096] */
    (xdc_Char)0x2e,  /* [1097] */
    (xdc_Char)0x0,  /* [1098] */
    (xdc_Char)0x41,  /* [1099] */
    (xdc_Char)0x5f,  /* [1100] */
    (xdc_Char)0x69,  /* [1101] */
    (xdc_Char)0x6e,  /* [1102] */
    (xdc_Char)0x76,  /* [1103] */
    (xdc_Char)0x54,  /* [1104] */
    (xdc_Char)0x69,  /* [1105] */
    (xdc_Char)0x6d,  /* [1106] */
    (xdc_Char)0x65,  /* [1107] */
    (xdc_Char)0x6f,  /* [1108] */
    (xdc_Char)0x75,  /* [1109] */
    (xdc_Char)0x74,  /* [1110] */
    (xdc_Char)0x3a,  /* [1111] */
    (xdc_Char)0x20,  /* [1112] */
    (xdc_Char)0x43,  /* [1113] */
    (xdc_Char)0x61,  /* [1114] */
    (xdc_Char)0x6e,  /* [1115] */
    (xdc_Char)0x27,  /* [1116] */
    (xdc_Char)0x74,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x75,  /* [1119] */
    (xdc_Char)0x73,  /* [1120] */
    (xdc_Char)0x65,  /* [1121] */
    (xdc_Char)0x20,  /* [1122] */
    (xdc_Char)0x42,  /* [1123] */
    (xdc_Char)0x49,  /* [1124] */
    (xdc_Char)0x4f,  /* [1125] */
    (xdc_Char)0x53,  /* [1126] */
    (xdc_Char)0x5f,  /* [1127] */
    (xdc_Char)0x45,  /* [1128] */
    (xdc_Char)0x56,  /* [1129] */
    (xdc_Char)0x45,  /* [1130] */
    (xdc_Char)0x4e,  /* [1131] */
    (xdc_Char)0x54,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x41,  /* [1134] */
    (xdc_Char)0x43,  /* [1135] */
    (xdc_Char)0x51,  /* [1136] */
    (xdc_Char)0x55,  /* [1137] */
    (xdc_Char)0x49,  /* [1138] */
    (xdc_Char)0x52,  /* [1139] */
    (xdc_Char)0x45,  /* [1140] */
    (xdc_Char)0x44,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x77,  /* [1143] */
    (xdc_Char)0x69,  /* [1144] */
    (xdc_Char)0x74,  /* [1145] */
    (xdc_Char)0x68,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x74,  /* [1148] */
    (xdc_Char)0x68,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x73,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x53,  /* [1153] */
    (xdc_Char)0x65,  /* [1154] */
    (xdc_Char)0x6d,  /* [1155] */
    (xdc_Char)0x61,  /* [1156] */
    (xdc_Char)0x70,  /* [1157] */
    (xdc_Char)0x68,  /* [1158] */
    (xdc_Char)0x6f,  /* [1159] */
    (xdc_Char)0x72,  /* [1160] */
    (xdc_Char)0x65,  /* [1161] */
    (xdc_Char)0x2e,  /* [1162] */
    (xdc_Char)0x0,  /* [1163] */
    (xdc_Char)0x41,  /* [1164] */
    (xdc_Char)0x5f,  /* [1165] */
    (xdc_Char)0x6f,  /* [1166] */
    (xdc_Char)0x76,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x72,  /* [1169] */
    (xdc_Char)0x66,  /* [1170] */
    (xdc_Char)0x6c,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x77,  /* [1173] */
    (xdc_Char)0x3a,  /* [1174] */
    (xdc_Char)0x20,  /* [1175] */
    (xdc_Char)0x43,  /* [1176] */
    (xdc_Char)0x6f,  /* [1177] */
    (xdc_Char)0x75,  /* [1178] */
    (xdc_Char)0x6e,  /* [1179] */
    (xdc_Char)0x74,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x68,  /* [1182] */
    (xdc_Char)0x61,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x20,  /* [1185] */
    (xdc_Char)0x65,  /* [1186] */
    (xdc_Char)0x78,  /* [1187] */
    (xdc_Char)0x63,  /* [1188] */
    (xdc_Char)0x65,  /* [1189] */
    (xdc_Char)0x65,  /* [1190] */
    (xdc_Char)0x64,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x64,  /* [1193] */
    (xdc_Char)0x20,  /* [1194] */
    (xdc_Char)0x36,  /* [1195] */
    (xdc_Char)0x35,  /* [1196] */
    (xdc_Char)0x35,  /* [1197] */
    (xdc_Char)0x33,  /* [1198] */
    (xdc_Char)0x35,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x61,  /* [1201] */
    (xdc_Char)0x6e,  /* [1202] */
    (xdc_Char)0x64,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x72,  /* [1205] */
    (xdc_Char)0x6f,  /* [1206] */
    (xdc_Char)0x6c,  /* [1207] */
    (xdc_Char)0x6c,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x64,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x76,  /* [1213] */
    (xdc_Char)0x65,  /* [1214] */
    (xdc_Char)0x72,  /* [1215] */
    (xdc_Char)0x2e,  /* [1216] */
    (xdc_Char)0x0,  /* [1217] */
    (xdc_Char)0x41,  /* [1218] */
    (xdc_Char)0x5f,  /* [1219] */
    (xdc_Char)0x70,  /* [1220] */
    (xdc_Char)0x65,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x64,  /* [1223] */
    (xdc_Char)0x54,  /* [1224] */
    (xdc_Char)0x61,  /* [1225] */
    (xdc_Char)0x73,  /* [1226] */
    (xdc_Char)0x6b,  /* [1227] */
    (xdc_Char)0x44,  /* [1228] */
    (xdc_Char)0x69,  /* [1229] */
    (xdc_Char)0x73,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x62,  /* [1232] */
    (xdc_Char)0x6c,  /* [1233] */
    (xdc_Char)0x65,  /* [1234] */
    (xdc_Char)0x64,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x43,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x6e,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x6f,  /* [1242] */
    (xdc_Char)0x74,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x63,  /* [1245] */
    (xdc_Char)0x61,  /* [1246] */
    (xdc_Char)0x6c,  /* [1247] */
    (xdc_Char)0x6c,  /* [1248] */
    (xdc_Char)0x20,  /* [1249] */
    (xdc_Char)0x53,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x6d,  /* [1252] */
    (xdc_Char)0x61,  /* [1253] */
    (xdc_Char)0x70,  /* [1254] */
    (xdc_Char)0x68,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x72,  /* [1257] */
    (xdc_Char)0x65,  /* [1258] */
    (xdc_Char)0x5f,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x65,  /* [1261] */
    (xdc_Char)0x6e,  /* [1262] */
    (xdc_Char)0x64,  /* [1263] */
    (xdc_Char)0x28,  /* [1264] */
    (xdc_Char)0x29,  /* [1265] */
    (xdc_Char)0x20,  /* [1266] */
    (xdc_Char)0x77,  /* [1267] */
    (xdc_Char)0x68,  /* [1268] */
    (xdc_Char)0x69,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x74,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x65,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x61,  /* [1278] */
    (xdc_Char)0x73,  /* [1279] */
    (xdc_Char)0x6b,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x6f,  /* [1282] */
    (xdc_Char)0x72,  /* [1283] */
    (xdc_Char)0x20,  /* [1284] */
    (xdc_Char)0x53,  /* [1285] */
    (xdc_Char)0x77,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x20,  /* [1288] */
    (xdc_Char)0x73,  /* [1289] */
    (xdc_Char)0x63,  /* [1290] */
    (xdc_Char)0x68,  /* [1291] */
    (xdc_Char)0x65,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x75,  /* [1294] */
    (xdc_Char)0x6c,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x72,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x69,  /* [1299] */
    (xdc_Char)0x73,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x64,  /* [1302] */
    (xdc_Char)0x69,  /* [1303] */
    (xdc_Char)0x73,  /* [1304] */
    (xdc_Char)0x61,  /* [1305] */
    (xdc_Char)0x62,  /* [1306] */
    (xdc_Char)0x6c,  /* [1307] */
    (xdc_Char)0x65,  /* [1308] */
    (xdc_Char)0x64,  /* [1309] */
    (xdc_Char)0x2e,  /* [1310] */
    (xdc_Char)0x0,  /* [1311] */
    (xdc_Char)0x41,  /* [1312] */
    (xdc_Char)0x5f,  /* [1313] */
    (xdc_Char)0x73,  /* [1314] */
    (xdc_Char)0x77,  /* [1315] */
    (xdc_Char)0x69,  /* [1316] */
    (xdc_Char)0x44,  /* [1317] */
    (xdc_Char)0x69,  /* [1318] */
    (xdc_Char)0x73,  /* [1319] */
    (xdc_Char)0x61,  /* [1320] */
    (xdc_Char)0x62,  /* [1321] */
    (xdc_Char)0x6c,  /* [1322] */
    (xdc_Char)0x65,  /* [1323] */
    (xdc_Char)0x64,  /* [1324] */
    (xdc_Char)0x3a,  /* [1325] */
    (xdc_Char)0x20,  /* [1326] */
    (xdc_Char)0x43,  /* [1327] */
    (xdc_Char)0x61,  /* [1328] */
    (xdc_Char)0x6e,  /* [1329] */
    (xdc_Char)0x6e,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x74,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x63,  /* [1334] */
    (xdc_Char)0x72,  /* [1335] */
    (xdc_Char)0x65,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x65,  /* [1339] */
    (xdc_Char)0x20,  /* [1340] */
    (xdc_Char)0x61,  /* [1341] */
    (xdc_Char)0x20,  /* [1342] */
    (xdc_Char)0x53,  /* [1343] */
    (xdc_Char)0x77,  /* [1344] */
    (xdc_Char)0x69,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x77,  /* [1347] */
    (xdc_Char)0x68,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x6e,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x53,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x69,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x69,  /* [1356] */
    (xdc_Char)0x73,  /* [1357] */
    (xdc_Char)0x20,  /* [1358] */
    (xdc_Char)0x64,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x73,  /* [1361] */
    (xdc_Char)0x61,  /* [1362] */
    (xdc_Char)0x62,  /* [1363] */
    (xdc_Char)0x6c,  /* [1364] */
    (xdc_Char)0x65,  /* [1365] */
    (xdc_Char)0x64,  /* [1366] */
    (xdc_Char)0x2e,  /* [1367] */
    (xdc_Char)0x0,  /* [1368] */
    (xdc_Char)0x41,  /* [1369] */
    (xdc_Char)0x5f,  /* [1370] */
    (xdc_Char)0x62,  /* [1371] */
    (xdc_Char)0x61,  /* [1372] */
    (xdc_Char)0x64,  /* [1373] */
    (xdc_Char)0x50,  /* [1374] */
    (xdc_Char)0x72,  /* [1375] */
    (xdc_Char)0x69,  /* [1376] */
    (xdc_Char)0x6f,  /* [1377] */
    (xdc_Char)0x72,  /* [1378] */
    (xdc_Char)0x69,  /* [1379] */
    (xdc_Char)0x74,  /* [1380] */
    (xdc_Char)0x79,  /* [1381] */
    (xdc_Char)0x3a,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x41,  /* [1384] */
    (xdc_Char)0x6e,  /* [1385] */
    (xdc_Char)0x20,  /* [1386] */
    (xdc_Char)0x69,  /* [1387] */
    (xdc_Char)0x6e,  /* [1388] */
    (xdc_Char)0x76,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x6c,  /* [1391] */
    (xdc_Char)0x69,  /* [1392] */
    (xdc_Char)0x64,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x53,  /* [1395] */
    (xdc_Char)0x77,  /* [1396] */
    (xdc_Char)0x69,  /* [1397] */
    (xdc_Char)0x20,  /* [1398] */
    (xdc_Char)0x70,  /* [1399] */
    (xdc_Char)0x72,  /* [1400] */
    (xdc_Char)0x69,  /* [1401] */
    (xdc_Char)0x6f,  /* [1402] */
    (xdc_Char)0x72,  /* [1403] */
    (xdc_Char)0x69,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x79,  /* [1406] */
    (xdc_Char)0x20,  /* [1407] */
    (xdc_Char)0x77,  /* [1408] */
    (xdc_Char)0x61,  /* [1409] */
    (xdc_Char)0x73,  /* [1410] */
    (xdc_Char)0x20,  /* [1411] */
    (xdc_Char)0x75,  /* [1412] */
    (xdc_Char)0x73,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x64,  /* [1415] */
    (xdc_Char)0x2e,  /* [1416] */
    (xdc_Char)0x0,  /* [1417] */
    (xdc_Char)0x41,  /* [1418] */
    (xdc_Char)0x5f,  /* [1419] */
    (xdc_Char)0x62,  /* [1420] */
    (xdc_Char)0x61,  /* [1421] */
    (xdc_Char)0x64,  /* [1422] */
    (xdc_Char)0x54,  /* [1423] */
    (xdc_Char)0x68,  /* [1424] */
    (xdc_Char)0x72,  /* [1425] */
    (xdc_Char)0x65,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x79,  /* [1430] */
    (xdc_Char)0x70,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x3a,  /* [1433] */
    (xdc_Char)0x20,  /* [1434] */
    (xdc_Char)0x43,  /* [1435] */
    (xdc_Char)0x61,  /* [1436] */
    (xdc_Char)0x6e,  /* [1437] */
    (xdc_Char)0x6e,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x74,  /* [1440] */
    (xdc_Char)0x20,  /* [1441] */
    (xdc_Char)0x63,  /* [1442] */
    (xdc_Char)0x72,  /* [1443] */
    (xdc_Char)0x65,  /* [1444] */
    (xdc_Char)0x61,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x2f,  /* [1448] */
    (xdc_Char)0x64,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x6c,  /* [1451] */
    (xdc_Char)0x65,  /* [1452] */
    (xdc_Char)0x74,  /* [1453] */
    (xdc_Char)0x65,  /* [1454] */
    (xdc_Char)0x20,  /* [1455] */
    (xdc_Char)0x61,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x74,  /* [1458] */
    (xdc_Char)0x61,  /* [1459] */
    (xdc_Char)0x73,  /* [1460] */
    (xdc_Char)0x6b,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x66,  /* [1463] */
    (xdc_Char)0x72,  /* [1464] */
    (xdc_Char)0x6f,  /* [1465] */
    (xdc_Char)0x6d,  /* [1466] */
    (xdc_Char)0x20,  /* [1467] */
    (xdc_Char)0x48,  /* [1468] */
    (xdc_Char)0x77,  /* [1469] */
    (xdc_Char)0x69,  /* [1470] */
    (xdc_Char)0x20,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x72,  /* [1473] */
    (xdc_Char)0x20,  /* [1474] */
    (xdc_Char)0x53,  /* [1475] */
    (xdc_Char)0x77,  /* [1476] */
    (xdc_Char)0x69,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x74,  /* [1479] */
    (xdc_Char)0x68,  /* [1480] */
    (xdc_Char)0x72,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x2e,  /* [1485] */
    (xdc_Char)0x0,  /* [1486] */
    (xdc_Char)0x41,  /* [1487] */
    (xdc_Char)0x5f,  /* [1488] */
    (xdc_Char)0x62,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x64,  /* [1491] */
    (xdc_Char)0x54,  /* [1492] */
    (xdc_Char)0x61,  /* [1493] */
    (xdc_Char)0x73,  /* [1494] */
    (xdc_Char)0x6b,  /* [1495] */
    (xdc_Char)0x53,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x74,  /* [1499] */
    (xdc_Char)0x65,  /* [1500] */
    (xdc_Char)0x3a,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x43,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x27,  /* [1506] */
    (xdc_Char)0x74,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x64,  /* [1509] */
    (xdc_Char)0x65,  /* [1510] */
    (xdc_Char)0x6c,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x65,  /* [1514] */
    (xdc_Char)0x20,  /* [1515] */
    (xdc_Char)0x61,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x74,  /* [1518] */
    (xdc_Char)0x61,  /* [1519] */
    (xdc_Char)0x73,  /* [1520] */
    (xdc_Char)0x6b,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x69,  /* [1523] */
    (xdc_Char)0x6e,  /* [1524] */
    (xdc_Char)0x20,  /* [1525] */
    (xdc_Char)0x52,  /* [1526] */
    (xdc_Char)0x55,  /* [1527] */
    (xdc_Char)0x4e,  /* [1528] */
    (xdc_Char)0x4e,  /* [1529] */
    (xdc_Char)0x49,  /* [1530] */
    (xdc_Char)0x4e,  /* [1531] */
    (xdc_Char)0x47,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x73,  /* [1534] */
    (xdc_Char)0x74,  /* [1535] */
    (xdc_Char)0x61,  /* [1536] */
    (xdc_Char)0x74,  /* [1537] */
    (xdc_Char)0x65,  /* [1538] */
    (xdc_Char)0x2e,  /* [1539] */
    (xdc_Char)0x0,  /* [1540] */
    (xdc_Char)0x41,  /* [1541] */
    (xdc_Char)0x5f,  /* [1542] */
    (xdc_Char)0x6e,  /* [1543] */
    (xdc_Char)0x6f,  /* [1544] */
    (xdc_Char)0x50,  /* [1545] */
    (xdc_Char)0x65,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x64,  /* [1548] */
    (xdc_Char)0x45,  /* [1549] */
    (xdc_Char)0x6c,  /* [1550] */
    (xdc_Char)0x65,  /* [1551] */
    (xdc_Char)0x6d,  /* [1552] */
    (xdc_Char)0x3a,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x4e,  /* [1555] */
    (xdc_Char)0x6f,  /* [1556] */
    (xdc_Char)0x74,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x65,  /* [1559] */
    (xdc_Char)0x6e,  /* [1560] */
    (xdc_Char)0x6f,  /* [1561] */
    (xdc_Char)0x75,  /* [1562] */
    (xdc_Char)0x67,  /* [1563] */
    (xdc_Char)0x68,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x69,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x66,  /* [1568] */
    (xdc_Char)0x6f,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x74,  /* [1571] */
    (xdc_Char)0x6f,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x65,  /* [1575] */
    (xdc_Char)0x6c,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x74,  /* [1578] */
    (xdc_Char)0x65,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x42,  /* [1581] */
    (xdc_Char)0x4c,  /* [1582] */
    (xdc_Char)0x4f,  /* [1583] */
    (xdc_Char)0x43,  /* [1584] */
    (xdc_Char)0x4b,  /* [1585] */
    (xdc_Char)0x45,  /* [1586] */
    (xdc_Char)0x44,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x74,  /* [1589] */
    (xdc_Char)0x61,  /* [1590] */
    (xdc_Char)0x73,  /* [1591] */
    (xdc_Char)0x6b,  /* [1592] */
    (xdc_Char)0x2e,  /* [1593] */
    (xdc_Char)0x0,  /* [1594] */
    (xdc_Char)0x41,  /* [1595] */
    (xdc_Char)0x5f,  /* [1596] */
    (xdc_Char)0x74,  /* [1597] */
    (xdc_Char)0x61,  /* [1598] */
    (xdc_Char)0x73,  /* [1599] */
    (xdc_Char)0x6b,  /* [1600] */
    (xdc_Char)0x44,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x62,  /* [1605] */
    (xdc_Char)0x6c,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x3a,  /* [1609] */
    (xdc_Char)0x20,  /* [1610] */
    (xdc_Char)0x43,  /* [1611] */
    (xdc_Char)0x61,  /* [1612] */
    (xdc_Char)0x6e,  /* [1613] */
    (xdc_Char)0x6e,  /* [1614] */
    (xdc_Char)0x6f,  /* [1615] */
    (xdc_Char)0x74,  /* [1616] */
    (xdc_Char)0x20,  /* [1617] */
    (xdc_Char)0x63,  /* [1618] */
    (xdc_Char)0x72,  /* [1619] */
    (xdc_Char)0x65,  /* [1620] */
    (xdc_Char)0x61,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x65,  /* [1623] */
    (xdc_Char)0x20,  /* [1624] */
    (xdc_Char)0x61,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x74,  /* [1627] */
    (xdc_Char)0x61,  /* [1628] */
    (xdc_Char)0x73,  /* [1629] */
    (xdc_Char)0x6b,  /* [1630] */
    (xdc_Char)0x20,  /* [1631] */
    (xdc_Char)0x77,  /* [1632] */
    (xdc_Char)0x68,  /* [1633] */
    (xdc_Char)0x65,  /* [1634] */
    (xdc_Char)0x6e,  /* [1635] */
    (xdc_Char)0x20,  /* [1636] */
    (xdc_Char)0x74,  /* [1637] */
    (xdc_Char)0x61,  /* [1638] */
    (xdc_Char)0x73,  /* [1639] */
    (xdc_Char)0x6b,  /* [1640] */
    (xdc_Char)0x69,  /* [1641] */
    (xdc_Char)0x6e,  /* [1642] */
    (xdc_Char)0x67,  /* [1643] */
    (xdc_Char)0x20,  /* [1644] */
    (xdc_Char)0x69,  /* [1645] */
    (xdc_Char)0x73,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x64,  /* [1648] */
    (xdc_Char)0x69,  /* [1649] */
    (xdc_Char)0x73,  /* [1650] */
    (xdc_Char)0x61,  /* [1651] */
    (xdc_Char)0x62,  /* [1652] */
    (xdc_Char)0x6c,  /* [1653] */
    (xdc_Char)0x65,  /* [1654] */
    (xdc_Char)0x64,  /* [1655] */
    (xdc_Char)0x2e,  /* [1656] */
    (xdc_Char)0x0,  /* [1657] */
    (xdc_Char)0x41,  /* [1658] */
    (xdc_Char)0x5f,  /* [1659] */
    (xdc_Char)0x62,  /* [1660] */
    (xdc_Char)0x61,  /* [1661] */
    (xdc_Char)0x64,  /* [1662] */
    (xdc_Char)0x50,  /* [1663] */
    (xdc_Char)0x72,  /* [1664] */
    (xdc_Char)0x69,  /* [1665] */
    (xdc_Char)0x6f,  /* [1666] */
    (xdc_Char)0x72,  /* [1667] */
    (xdc_Char)0x69,  /* [1668] */
    (xdc_Char)0x74,  /* [1669] */
    (xdc_Char)0x79,  /* [1670] */
    (xdc_Char)0x3a,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x41,  /* [1673] */
    (xdc_Char)0x6e,  /* [1674] */
    (xdc_Char)0x20,  /* [1675] */
    (xdc_Char)0x69,  /* [1676] */
    (xdc_Char)0x6e,  /* [1677] */
    (xdc_Char)0x76,  /* [1678] */
    (xdc_Char)0x61,  /* [1679] */
    (xdc_Char)0x6c,  /* [1680] */
    (xdc_Char)0x69,  /* [1681] */
    (xdc_Char)0x64,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x73,  /* [1686] */
    (xdc_Char)0x6b,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x70,  /* [1689] */
    (xdc_Char)0x72,  /* [1690] */
    (xdc_Char)0x69,  /* [1691] */
    (xdc_Char)0x6f,  /* [1692] */
    (xdc_Char)0x72,  /* [1693] */
    (xdc_Char)0x69,  /* [1694] */
    (xdc_Char)0x74,  /* [1695] */
    (xdc_Char)0x79,  /* [1696] */
    (xdc_Char)0x20,  /* [1697] */
    (xdc_Char)0x77,  /* [1698] */
    (xdc_Char)0x61,  /* [1699] */
    (xdc_Char)0x73,  /* [1700] */
    (xdc_Char)0x20,  /* [1701] */
    (xdc_Char)0x75,  /* [1702] */
    (xdc_Char)0x73,  /* [1703] */
    (xdc_Char)0x65,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x2e,  /* [1706] */
    (xdc_Char)0x0,  /* [1707] */
    (xdc_Char)0x41,  /* [1708] */
    (xdc_Char)0x5f,  /* [1709] */
    (xdc_Char)0x62,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x54,  /* [1713] */
    (xdc_Char)0x69,  /* [1714] */
    (xdc_Char)0x6d,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x6f,  /* [1717] */
    (xdc_Char)0x75,  /* [1718] */
    (xdc_Char)0x74,  /* [1719] */
    (xdc_Char)0x3a,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x43,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x6e,  /* [1724] */
    (xdc_Char)0x27,  /* [1725] */
    (xdc_Char)0x74,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x73,  /* [1728] */
    (xdc_Char)0x6c,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x70,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x46,  /* [1734] */
    (xdc_Char)0x4f,  /* [1735] */
    (xdc_Char)0x52,  /* [1736] */
    (xdc_Char)0x45,  /* [1737] */
    (xdc_Char)0x56,  /* [1738] */
    (xdc_Char)0x45,  /* [1739] */
    (xdc_Char)0x52,  /* [1740] */
    (xdc_Char)0x2e,  /* [1741] */
    (xdc_Char)0x0,  /* [1742] */
    (xdc_Char)0x41,  /* [1743] */
    (xdc_Char)0x5f,  /* [1744] */
    (xdc_Char)0x62,  /* [1745] */
    (xdc_Char)0x61,  /* [1746] */
    (xdc_Char)0x64,  /* [1747] */
    (xdc_Char)0x41,  /* [1748] */
    (xdc_Char)0x66,  /* [1749] */
    (xdc_Char)0x66,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x6e,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x74,  /* [1754] */
    (xdc_Char)0x79,  /* [1755] */
    (xdc_Char)0x3a,  /* [1756] */
    (xdc_Char)0x20,  /* [1757] */
    (xdc_Char)0x49,  /* [1758] */
    (xdc_Char)0x6e,  /* [1759] */
    (xdc_Char)0x76,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x6c,  /* [1762] */
    (xdc_Char)0x69,  /* [1763] */
    (xdc_Char)0x64,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x61,  /* [1766] */
    (xdc_Char)0x66,  /* [1767] */
    (xdc_Char)0x66,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x6e,  /* [1770] */
    (xdc_Char)0x69,  /* [1771] */
    (xdc_Char)0x74,  /* [1772] */
    (xdc_Char)0x79,  /* [1773] */
    (xdc_Char)0x2e,  /* [1774] */
    (xdc_Char)0x0,  /* [1775] */
    (xdc_Char)0x41,  /* [1776] */
    (xdc_Char)0x5f,  /* [1777] */
    (xdc_Char)0x73,  /* [1778] */
    (xdc_Char)0x6c,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x65,  /* [1781] */
    (xdc_Char)0x70,  /* [1782] */
    (xdc_Char)0x54,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x73,  /* [1785] */
    (xdc_Char)0x6b,  /* [1786] */
    (xdc_Char)0x44,  /* [1787] */
    (xdc_Char)0x69,  /* [1788] */
    (xdc_Char)0x73,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x62,  /* [1791] */
    (xdc_Char)0x6c,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x64,  /* [1794] */
    (xdc_Char)0x3a,  /* [1795] */
    (xdc_Char)0x20,  /* [1796] */
    (xdc_Char)0x43,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x6e,  /* [1799] */
    (xdc_Char)0x6e,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x74,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x63,  /* [1804] */
    (xdc_Char)0x61,  /* [1805] */
    (xdc_Char)0x6c,  /* [1806] */
    (xdc_Char)0x6c,  /* [1807] */
    (xdc_Char)0x20,  /* [1808] */
    (xdc_Char)0x54,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x73,  /* [1811] */
    (xdc_Char)0x6b,  /* [1812] */
    (xdc_Char)0x5f,  /* [1813] */
    (xdc_Char)0x73,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x65,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x70,  /* [1818] */
    (xdc_Char)0x28,  /* [1819] */
    (xdc_Char)0x29,  /* [1820] */
    (xdc_Char)0x20,  /* [1821] */
    (xdc_Char)0x77,  /* [1822] */
    (xdc_Char)0x68,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x6c,  /* [1825] */
    (xdc_Char)0x65,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x65,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x54,  /* [1832] */
    (xdc_Char)0x61,  /* [1833] */
    (xdc_Char)0x73,  /* [1834] */
    (xdc_Char)0x6b,  /* [1835] */
    (xdc_Char)0x20,  /* [1836] */
    (xdc_Char)0x73,  /* [1837] */
    (xdc_Char)0x63,  /* [1838] */
    (xdc_Char)0x68,  /* [1839] */
    (xdc_Char)0x65,  /* [1840] */
    (xdc_Char)0x64,  /* [1841] */
    (xdc_Char)0x75,  /* [1842] */
    (xdc_Char)0x6c,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x72,  /* [1845] */
    (xdc_Char)0x20,  /* [1846] */
    (xdc_Char)0x69,  /* [1847] */
    (xdc_Char)0x73,  /* [1848] */
    (xdc_Char)0x20,  /* [1849] */
    (xdc_Char)0x64,  /* [1850] */
    (xdc_Char)0x69,  /* [1851] */
    (xdc_Char)0x73,  /* [1852] */
    (xdc_Char)0x61,  /* [1853] */
    (xdc_Char)0x62,  /* [1854] */
    (xdc_Char)0x6c,  /* [1855] */
    (xdc_Char)0x65,  /* [1856] */
    (xdc_Char)0x64,  /* [1857] */
    (xdc_Char)0x2e,  /* [1858] */
    (xdc_Char)0x0,  /* [1859] */
    (xdc_Char)0x41,  /* [1860] */
    (xdc_Char)0x5f,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x76,  /* [1864] */
    (xdc_Char)0x61,  /* [1865] */
    (xdc_Char)0x6c,  /* [1866] */
    (xdc_Char)0x69,  /* [1867] */
    (xdc_Char)0x64,  /* [1868] */
    (xdc_Char)0x43,  /* [1869] */
    (xdc_Char)0x6f,  /* [1870] */
    (xdc_Char)0x72,  /* [1871] */
    (xdc_Char)0x65,  /* [1872] */
    (xdc_Char)0x49,  /* [1873] */
    (xdc_Char)0x64,  /* [1874] */
    (xdc_Char)0x3a,  /* [1875] */
    (xdc_Char)0x20,  /* [1876] */
    (xdc_Char)0x43,  /* [1877] */
    (xdc_Char)0x61,  /* [1878] */
    (xdc_Char)0x6e,  /* [1879] */
    (xdc_Char)0x6e,  /* [1880] */
    (xdc_Char)0x6f,  /* [1881] */
    (xdc_Char)0x74,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x70,  /* [1884] */
    (xdc_Char)0x61,  /* [1885] */
    (xdc_Char)0x73,  /* [1886] */
    (xdc_Char)0x73,  /* [1887] */
    (xdc_Char)0x20,  /* [1888] */
    (xdc_Char)0x61,  /* [1889] */
    (xdc_Char)0x20,  /* [1890] */
    (xdc_Char)0x6e,  /* [1891] */
    (xdc_Char)0x6f,  /* [1892] */
    (xdc_Char)0x6e,  /* [1893] */
    (xdc_Char)0x2d,  /* [1894] */
    (xdc_Char)0x7a,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x72,  /* [1897] */
    (xdc_Char)0x6f,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x43,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x72,  /* [1902] */
    (xdc_Char)0x65,  /* [1903] */
    (xdc_Char)0x49,  /* [1904] */
    (xdc_Char)0x64,  /* [1905] */
    (xdc_Char)0x20,  /* [1906] */
    (xdc_Char)0x69,  /* [1907] */
    (xdc_Char)0x6e,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x61,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x6e,  /* [1912] */
    (xdc_Char)0x6f,  /* [1913] */
    (xdc_Char)0x6e,  /* [1914] */
    (xdc_Char)0x2d,  /* [1915] */
    (xdc_Char)0x53,  /* [1916] */
    (xdc_Char)0x4d,  /* [1917] */
    (xdc_Char)0x50,  /* [1918] */
    (xdc_Char)0x20,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x70,  /* [1921] */
    (xdc_Char)0x70,  /* [1922] */
    (xdc_Char)0x6c,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x63,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x74,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x6f,  /* [1929] */
    (xdc_Char)0x6e,  /* [1930] */
    (xdc_Char)0x2e,  /* [1931] */
    (xdc_Char)0x0,  /* [1932] */
    (xdc_Char)0x62,  /* [1933] */
    (xdc_Char)0x75,  /* [1934] */
    (xdc_Char)0x66,  /* [1935] */
    (xdc_Char)0x20,  /* [1936] */
    (xdc_Char)0x70,  /* [1937] */
    (xdc_Char)0x61,  /* [1938] */
    (xdc_Char)0x72,  /* [1939] */
    (xdc_Char)0x61,  /* [1940] */
    (xdc_Char)0x6d,  /* [1941] */
    (xdc_Char)0x65,  /* [1942] */
    (xdc_Char)0x74,  /* [1943] */
    (xdc_Char)0x65,  /* [1944] */
    (xdc_Char)0x72,  /* [1945] */
    (xdc_Char)0x20,  /* [1946] */
    (xdc_Char)0x63,  /* [1947] */
    (xdc_Char)0x61,  /* [1948] */
    (xdc_Char)0x6e,  /* [1949] */
    (xdc_Char)0x6e,  /* [1950] */
    (xdc_Char)0x6f,  /* [1951] */
    (xdc_Char)0x74,  /* [1952] */
    (xdc_Char)0x20,  /* [1953] */
    (xdc_Char)0x62,  /* [1954] */
    (xdc_Char)0x65,  /* [1955] */
    (xdc_Char)0x20,  /* [1956] */
    (xdc_Char)0x6e,  /* [1957] */
    (xdc_Char)0x75,  /* [1958] */
    (xdc_Char)0x6c,  /* [1959] */
    (xdc_Char)0x6c,  /* [1960] */
    (xdc_Char)0x0,  /* [1961] */
    (xdc_Char)0x62,  /* [1962] */
    (xdc_Char)0x75,  /* [1963] */
    (xdc_Char)0x66,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x6e,  /* [1966] */
    (xdc_Char)0x6f,  /* [1967] */
    (xdc_Char)0x74,  /* [1968] */
    (xdc_Char)0x20,  /* [1969] */
    (xdc_Char)0x70,  /* [1970] */
    (xdc_Char)0x72,  /* [1971] */
    (xdc_Char)0x6f,  /* [1972] */
    (xdc_Char)0x70,  /* [1973] */
    (xdc_Char)0x65,  /* [1974] */
    (xdc_Char)0x72,  /* [1975] */
    (xdc_Char)0x6c,  /* [1976] */
    (xdc_Char)0x79,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x61,  /* [1979] */
    (xdc_Char)0x6c,  /* [1980] */
    (xdc_Char)0x69,  /* [1981] */
    (xdc_Char)0x67,  /* [1982] */
    (xdc_Char)0x6e,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x64,  /* [1985] */
    (xdc_Char)0x0,  /* [1986] */
    (xdc_Char)0x61,  /* [1987] */
    (xdc_Char)0x6c,  /* [1988] */
    (xdc_Char)0x69,  /* [1989] */
    (xdc_Char)0x67,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x20,  /* [1992] */
    (xdc_Char)0x70,  /* [1993] */
    (xdc_Char)0x61,  /* [1994] */
    (xdc_Char)0x72,  /* [1995] */
    (xdc_Char)0x61,  /* [1996] */
    (xdc_Char)0x6d,  /* [1997] */
    (xdc_Char)0x65,  /* [1998] */
    (xdc_Char)0x74,  /* [1999] */
    (xdc_Char)0x65,  /* [2000] */
    (xdc_Char)0x72,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x6d,  /* [2003] */
    (xdc_Char)0x75,  /* [2004] */
    (xdc_Char)0x73,  /* [2005] */
    (xdc_Char)0x74,  /* [2006] */
    (xdc_Char)0x20,  /* [2007] */
    (xdc_Char)0x62,  /* [2008] */
    (xdc_Char)0x65,  /* [2009] */
    (xdc_Char)0x20,  /* [2010] */
    (xdc_Char)0x30,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x6f,  /* [2013] */
    (xdc_Char)0x72,  /* [2014] */
    (xdc_Char)0x20,  /* [2015] */
    (xdc_Char)0x61,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x70,  /* [2018] */
    (xdc_Char)0x6f,  /* [2019] */
    (xdc_Char)0x77,  /* [2020] */
    (xdc_Char)0x65,  /* [2021] */
    (xdc_Char)0x72,  /* [2022] */
    (xdc_Char)0x20,  /* [2023] */
    (xdc_Char)0x6f,  /* [2024] */
    (xdc_Char)0x66,  /* [2025] */
    (xdc_Char)0x20,  /* [2026] */
    (xdc_Char)0x32,  /* [2027] */
    (xdc_Char)0x20,  /* [2028] */
    (xdc_Char)0x3e,  /* [2029] */
    (xdc_Char)0x3d,  /* [2030] */
    (xdc_Char)0x20,  /* [2031] */
    (xdc_Char)0x74,  /* [2032] */
    (xdc_Char)0x68,  /* [2033] */
    (xdc_Char)0x65,  /* [2034] */
    (xdc_Char)0x20,  /* [2035] */
    (xdc_Char)0x76,  /* [2036] */
    (xdc_Char)0x61,  /* [2037] */
    (xdc_Char)0x6c,  /* [2038] */
    (xdc_Char)0x75,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x20,  /* [2041] */
    (xdc_Char)0x6f,  /* [2042] */
    (xdc_Char)0x66,  /* [2043] */
    (xdc_Char)0x20,  /* [2044] */
    (xdc_Char)0x4d,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x6d,  /* [2047] */
    (xdc_Char)0x6f,  /* [2048] */
    (xdc_Char)0x72,  /* [2049] */
    (xdc_Char)0x79,  /* [2050] */
    (xdc_Char)0x5f,  /* [2051] */
    (xdc_Char)0x67,  /* [2052] */
    (xdc_Char)0x65,  /* [2053] */
    (xdc_Char)0x74,  /* [2054] */
    (xdc_Char)0x4d,  /* [2055] */
    (xdc_Char)0x61,  /* [2056] */
    (xdc_Char)0x78,  /* [2057] */
    (xdc_Char)0x44,  /* [2058] */
    (xdc_Char)0x65,  /* [2059] */
    (xdc_Char)0x66,  /* [2060] */
    (xdc_Char)0x61,  /* [2061] */
    (xdc_Char)0x75,  /* [2062] */
    (xdc_Char)0x6c,  /* [2063] */
    (xdc_Char)0x74,  /* [2064] */
    (xdc_Char)0x54,  /* [2065] */
    (xdc_Char)0x79,  /* [2066] */
    (xdc_Char)0x70,  /* [2067] */
    (xdc_Char)0x65,  /* [2068] */
    (xdc_Char)0x41,  /* [2069] */
    (xdc_Char)0x6c,  /* [2070] */
    (xdc_Char)0x69,  /* [2071] */
    (xdc_Char)0x67,  /* [2072] */
    (xdc_Char)0x6e,  /* [2073] */
    (xdc_Char)0x28,  /* [2074] */
    (xdc_Char)0x29,  /* [2075] */
    (xdc_Char)0x0,  /* [2076] */
    (xdc_Char)0x61,  /* [2077] */
    (xdc_Char)0x6c,  /* [2078] */
    (xdc_Char)0x69,  /* [2079] */
    (xdc_Char)0x67,  /* [2080] */
    (xdc_Char)0x6e,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x70,  /* [2083] */
    (xdc_Char)0x61,  /* [2084] */
    (xdc_Char)0x72,  /* [2085] */
    (xdc_Char)0x61,  /* [2086] */
    (xdc_Char)0x6d,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x74,  /* [2089] */
    (xdc_Char)0x65,  /* [2090] */
    (xdc_Char)0x72,  /* [2091] */
    (xdc_Char)0x20,  /* [2092] */
    (xdc_Char)0x31,  /* [2093] */
    (xdc_Char)0x29,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x6d,  /* [2096] */
    (xdc_Char)0x75,  /* [2097] */
    (xdc_Char)0x73,  /* [2098] */
    (xdc_Char)0x74,  /* [2099] */
    (xdc_Char)0x20,  /* [2100] */
    (xdc_Char)0x62,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x30,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x6f,  /* [2106] */
    (xdc_Char)0x72,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x61,  /* [2109] */
    (xdc_Char)0x20,  /* [2110] */
    (xdc_Char)0x70,  /* [2111] */
    (xdc_Char)0x6f,  /* [2112] */
    (xdc_Char)0x77,  /* [2113] */
    (xdc_Char)0x65,  /* [2114] */
    (xdc_Char)0x72,  /* [2115] */
    (xdc_Char)0x20,  /* [2116] */
    (xdc_Char)0x6f,  /* [2117] */
    (xdc_Char)0x66,  /* [2118] */
    (xdc_Char)0x20,  /* [2119] */
    (xdc_Char)0x32,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x61,  /* [2122] */
    (xdc_Char)0x6e,  /* [2123] */
    (xdc_Char)0x64,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x32,  /* [2126] */
    (xdc_Char)0x29,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x6e,  /* [2129] */
    (xdc_Char)0x6f,  /* [2130] */
    (xdc_Char)0x74,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x67,  /* [2133] */
    (xdc_Char)0x72,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x61,  /* [2136] */
    (xdc_Char)0x74,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x72,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x74,  /* [2141] */
    (xdc_Char)0x68,  /* [2142] */
    (xdc_Char)0x61,  /* [2143] */
    (xdc_Char)0x6e,  /* [2144] */
    (xdc_Char)0x20,  /* [2145] */
    (xdc_Char)0x74,  /* [2146] */
    (xdc_Char)0x68,  /* [2147] */
    (xdc_Char)0x65,  /* [2148] */
    (xdc_Char)0x20,  /* [2149] */
    (xdc_Char)0x68,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x70,  /* [2153] */
    (xdc_Char)0x73,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x61,  /* [2156] */
    (xdc_Char)0x6c,  /* [2157] */
    (xdc_Char)0x69,  /* [2158] */
    (xdc_Char)0x67,  /* [2159] */
    (xdc_Char)0x6e,  /* [2160] */
    (xdc_Char)0x6d,  /* [2161] */
    (xdc_Char)0x65,  /* [2162] */
    (xdc_Char)0x6e,  /* [2163] */
    (xdc_Char)0x74,  /* [2164] */
    (xdc_Char)0x0,  /* [2165] */
    (xdc_Char)0x62,  /* [2166] */
    (xdc_Char)0x6c,  /* [2167] */
    (xdc_Char)0x6f,  /* [2168] */
    (xdc_Char)0x63,  /* [2169] */
    (xdc_Char)0x6b,  /* [2170] */
    (xdc_Char)0x53,  /* [2171] */
    (xdc_Char)0x69,  /* [2172] */
    (xdc_Char)0x7a,  /* [2173] */
    (xdc_Char)0x65,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x6d,  /* [2176] */
    (xdc_Char)0x75,  /* [2177] */
    (xdc_Char)0x73,  /* [2178] */
    (xdc_Char)0x74,  /* [2179] */
    (xdc_Char)0x20,  /* [2180] */
    (xdc_Char)0x62,  /* [2181] */
    (xdc_Char)0x65,  /* [2182] */
    (xdc_Char)0x20,  /* [2183] */
    (xdc_Char)0x6c,  /* [2184] */
    (xdc_Char)0x61,  /* [2185] */
    (xdc_Char)0x72,  /* [2186] */
    (xdc_Char)0x67,  /* [2187] */
    (xdc_Char)0x65,  /* [2188] */
    (xdc_Char)0x20,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x6e,  /* [2191] */
    (xdc_Char)0x6f,  /* [2192] */
    (xdc_Char)0x75,  /* [2193] */
    (xdc_Char)0x67,  /* [2194] */
    (xdc_Char)0x68,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x74,  /* [2197] */
    (xdc_Char)0x6f,  /* [2198] */
    (xdc_Char)0x20,  /* [2199] */
    (xdc_Char)0x68,  /* [2200] */
    (xdc_Char)0x6f,  /* [2201] */
    (xdc_Char)0x6c,  /* [2202] */
    (xdc_Char)0x64,  /* [2203] */
    (xdc_Char)0x20,  /* [2204] */
    (xdc_Char)0x61,  /* [2205] */
    (xdc_Char)0x74,  /* [2206] */
    (xdc_Char)0x6c,  /* [2207] */
    (xdc_Char)0x65,  /* [2208] */
    (xdc_Char)0x61,  /* [2209] */
    (xdc_Char)0x73,  /* [2210] */
    (xdc_Char)0x74,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x74,  /* [2213] */
    (xdc_Char)0x77,  /* [2214] */
    (xdc_Char)0x6f,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x70,  /* [2217] */
    (xdc_Char)0x6f,  /* [2218] */
    (xdc_Char)0x69,  /* [2219] */
    (xdc_Char)0x6e,  /* [2220] */
    (xdc_Char)0x74,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x72,  /* [2223] */
    (xdc_Char)0x73,  /* [2224] */
    (xdc_Char)0x0,  /* [2225] */
    (xdc_Char)0x6e,  /* [2226] */
    (xdc_Char)0x75,  /* [2227] */
    (xdc_Char)0x6d,  /* [2228] */
    (xdc_Char)0x42,  /* [2229] */
    (xdc_Char)0x6c,  /* [2230] */
    (xdc_Char)0x6f,  /* [2231] */
    (xdc_Char)0x63,  /* [2232] */
    (xdc_Char)0x6b,  /* [2233] */
    (xdc_Char)0x73,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x63,  /* [2236] */
    (xdc_Char)0x61,  /* [2237] */
    (xdc_Char)0x6e,  /* [2238] */
    (xdc_Char)0x6e,  /* [2239] */
    (xdc_Char)0x6f,  /* [2240] */
    (xdc_Char)0x74,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x62,  /* [2243] */
    (xdc_Char)0x65,  /* [2244] */
    (xdc_Char)0x20,  /* [2245] */
    (xdc_Char)0x7a,  /* [2246] */
    (xdc_Char)0x65,  /* [2247] */
    (xdc_Char)0x72,  /* [2248] */
    (xdc_Char)0x6f,  /* [2249] */
    (xdc_Char)0x0,  /* [2250] */
    (xdc_Char)0x62,  /* [2251] */
    (xdc_Char)0x75,  /* [2252] */
    (xdc_Char)0x66,  /* [2253] */
    (xdc_Char)0x53,  /* [2254] */
    (xdc_Char)0x69,  /* [2255] */
    (xdc_Char)0x7a,  /* [2256] */
    (xdc_Char)0x65,  /* [2257] */
    (xdc_Char)0x20,  /* [2258] */
    (xdc_Char)0x63,  /* [2259] */
    (xdc_Char)0x61,  /* [2260] */
    (xdc_Char)0x6e,  /* [2261] */
    (xdc_Char)0x6e,  /* [2262] */
    (xdc_Char)0x6f,  /* [2263] */
    (xdc_Char)0x74,  /* [2264] */
    (xdc_Char)0x20,  /* [2265] */
    (xdc_Char)0x62,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x7a,  /* [2269] */
    (xdc_Char)0x65,  /* [2270] */
    (xdc_Char)0x72,  /* [2271] */
    (xdc_Char)0x6f,  /* [2272] */
    (xdc_Char)0x0,  /* [2273] */
    (xdc_Char)0x48,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x61,  /* [2276] */
    (xdc_Char)0x70,  /* [2277] */
    (xdc_Char)0x42,  /* [2278] */
    (xdc_Char)0x75,  /* [2279] */
    (xdc_Char)0x66,  /* [2280] */
    (xdc_Char)0x5f,  /* [2281] */
    (xdc_Char)0x63,  /* [2282] */
    (xdc_Char)0x72,  /* [2283] */
    (xdc_Char)0x65,  /* [2284] */
    (xdc_Char)0x61,  /* [2285] */
    (xdc_Char)0x74,  /* [2286] */
    (xdc_Char)0x65,  /* [2287] */
    (xdc_Char)0x27,  /* [2288] */
    (xdc_Char)0x73,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x62,  /* [2291] */
    (xdc_Char)0x75,  /* [2292] */
    (xdc_Char)0x66,  /* [2293] */
    (xdc_Char)0x53,  /* [2294] */
    (xdc_Char)0x69,  /* [2295] */
    (xdc_Char)0x7a,  /* [2296] */
    (xdc_Char)0x65,  /* [2297] */
    (xdc_Char)0x20,  /* [2298] */
    (xdc_Char)0x70,  /* [2299] */
    (xdc_Char)0x61,  /* [2300] */
    (xdc_Char)0x72,  /* [2301] */
    (xdc_Char)0x61,  /* [2302] */
    (xdc_Char)0x6d,  /* [2303] */
    (xdc_Char)0x65,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x65,  /* [2306] */
    (xdc_Char)0x72,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x69,  /* [2309] */
    (xdc_Char)0x73,  /* [2310] */
    (xdc_Char)0x20,  /* [2311] */
    (xdc_Char)0x69,  /* [2312] */
    (xdc_Char)0x6e,  /* [2313] */
    (xdc_Char)0x76,  /* [2314] */
    (xdc_Char)0x61,  /* [2315] */
    (xdc_Char)0x6c,  /* [2316] */
    (xdc_Char)0x69,  /* [2317] */
    (xdc_Char)0x64,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x28,  /* [2320] */
    (xdc_Char)0x74,  /* [2321] */
    (xdc_Char)0x6f,  /* [2322] */
    (xdc_Char)0x6f,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x73,  /* [2325] */
    (xdc_Char)0x6d,  /* [2326] */
    (xdc_Char)0x61,  /* [2327] */
    (xdc_Char)0x6c,  /* [2328] */
    (xdc_Char)0x6c,  /* [2329] */
    (xdc_Char)0x29,  /* [2330] */
    (xdc_Char)0x0,  /* [2331] */
    (xdc_Char)0x43,  /* [2332] */
    (xdc_Char)0x61,  /* [2333] */
    (xdc_Char)0x6e,  /* [2334] */
    (xdc_Char)0x6e,  /* [2335] */
    (xdc_Char)0x6f,  /* [2336] */
    (xdc_Char)0x74,  /* [2337] */
    (xdc_Char)0x20,  /* [2338] */
    (xdc_Char)0x63,  /* [2339] */
    (xdc_Char)0x61,  /* [2340] */
    (xdc_Char)0x6c,  /* [2341] */
    (xdc_Char)0x6c,  /* [2342] */
    (xdc_Char)0x20,  /* [2343] */
    (xdc_Char)0x48,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x61,  /* [2346] */
    (xdc_Char)0x70,  /* [2347] */
    (xdc_Char)0x42,  /* [2348] */
    (xdc_Char)0x75,  /* [2349] */
    (xdc_Char)0x66,  /* [2350] */
    (xdc_Char)0x5f,  /* [2351] */
    (xdc_Char)0x66,  /* [2352] */
    (xdc_Char)0x72,  /* [2353] */
    (xdc_Char)0x65,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x77,  /* [2357] */
    (xdc_Char)0x68,  /* [2358] */
    (xdc_Char)0x65,  /* [2359] */
    (xdc_Char)0x6e,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x6e,  /* [2362] */
    (xdc_Char)0x6f,  /* [2363] */
    (xdc_Char)0x20,  /* [2364] */
    (xdc_Char)0x62,  /* [2365] */
    (xdc_Char)0x6c,  /* [2366] */
    (xdc_Char)0x6f,  /* [2367] */
    (xdc_Char)0x63,  /* [2368] */
    (xdc_Char)0x6b,  /* [2369] */
    (xdc_Char)0x73,  /* [2370] */
    (xdc_Char)0x20,  /* [2371] */
    (xdc_Char)0x68,  /* [2372] */
    (xdc_Char)0x61,  /* [2373] */
    (xdc_Char)0x76,  /* [2374] */
    (xdc_Char)0x65,  /* [2375] */
    (xdc_Char)0x20,  /* [2376] */
    (xdc_Char)0x62,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x65,  /* [2379] */
    (xdc_Char)0x6e,  /* [2380] */
    (xdc_Char)0x20,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x6c,  /* [2383] */
    (xdc_Char)0x6c,  /* [2384] */
    (xdc_Char)0x6f,  /* [2385] */
    (xdc_Char)0x63,  /* [2386] */
    (xdc_Char)0x61,  /* [2387] */
    (xdc_Char)0x74,  /* [2388] */
    (xdc_Char)0x65,  /* [2389] */
    (xdc_Char)0x64,  /* [2390] */
    (xdc_Char)0x0,  /* [2391] */
    (xdc_Char)0x41,  /* [2392] */
    (xdc_Char)0x5f,  /* [2393] */
    (xdc_Char)0x69,  /* [2394] */
    (xdc_Char)0x6e,  /* [2395] */
    (xdc_Char)0x76,  /* [2396] */
    (xdc_Char)0x61,  /* [2397] */
    (xdc_Char)0x6c,  /* [2398] */
    (xdc_Char)0x69,  /* [2399] */
    (xdc_Char)0x64,  /* [2400] */
    (xdc_Char)0x46,  /* [2401] */
    (xdc_Char)0x72,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x65,  /* [2404] */
    (xdc_Char)0x3a,  /* [2405] */
    (xdc_Char)0x20,  /* [2406] */
    (xdc_Char)0x49,  /* [2407] */
    (xdc_Char)0x6e,  /* [2408] */
    (xdc_Char)0x76,  /* [2409] */
    (xdc_Char)0x61,  /* [2410] */
    (xdc_Char)0x6c,  /* [2411] */
    (xdc_Char)0x69,  /* [2412] */
    (xdc_Char)0x64,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x66,  /* [2415] */
    (xdc_Char)0x72,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x65,  /* [2418] */
    (xdc_Char)0x0,  /* [2419] */
    (xdc_Char)0x41,  /* [2420] */
    (xdc_Char)0x5f,  /* [2421] */
    (xdc_Char)0x7a,  /* [2422] */
    (xdc_Char)0x65,  /* [2423] */
    (xdc_Char)0x72,  /* [2424] */
    (xdc_Char)0x6f,  /* [2425] */
    (xdc_Char)0x42,  /* [2426] */
    (xdc_Char)0x6c,  /* [2427] */
    (xdc_Char)0x6f,  /* [2428] */
    (xdc_Char)0x63,  /* [2429] */
    (xdc_Char)0x6b,  /* [2430] */
    (xdc_Char)0x3a,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x43,  /* [2433] */
    (xdc_Char)0x61,  /* [2434] */
    (xdc_Char)0x6e,  /* [2435] */
    (xdc_Char)0x6e,  /* [2436] */
    (xdc_Char)0x6f,  /* [2437] */
    (xdc_Char)0x74,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x61,  /* [2440] */
    (xdc_Char)0x6c,  /* [2441] */
    (xdc_Char)0x6c,  /* [2442] */
    (xdc_Char)0x6f,  /* [2443] */
    (xdc_Char)0x63,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x74,  /* [2446] */
    (xdc_Char)0x65,  /* [2447] */
    (xdc_Char)0x20,  /* [2448] */
    (xdc_Char)0x73,  /* [2449] */
    (xdc_Char)0x69,  /* [2450] */
    (xdc_Char)0x7a,  /* [2451] */
    (xdc_Char)0x65,  /* [2452] */
    (xdc_Char)0x20,  /* [2453] */
    (xdc_Char)0x30,  /* [2454] */
    (xdc_Char)0x0,  /* [2455] */
    (xdc_Char)0x41,  /* [2456] */
    (xdc_Char)0x5f,  /* [2457] */
    (xdc_Char)0x68,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x61,  /* [2460] */
    (xdc_Char)0x70,  /* [2461] */
    (xdc_Char)0x53,  /* [2462] */
    (xdc_Char)0x69,  /* [2463] */
    (xdc_Char)0x7a,  /* [2464] */
    (xdc_Char)0x65,  /* [2465] */
    (xdc_Char)0x3a,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x52,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x71,  /* [2470] */
    (xdc_Char)0x75,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x73,  /* [2473] */
    (xdc_Char)0x74,  /* [2474] */
    (xdc_Char)0x65,  /* [2475] */
    (xdc_Char)0x64,  /* [2476] */
    (xdc_Char)0x20,  /* [2477] */
    (xdc_Char)0x68,  /* [2478] */
    (xdc_Char)0x65,  /* [2479] */
    (xdc_Char)0x61,  /* [2480] */
    (xdc_Char)0x70,  /* [2481] */
    (xdc_Char)0x20,  /* [2482] */
    (xdc_Char)0x73,  /* [2483] */
    (xdc_Char)0x69,  /* [2484] */
    (xdc_Char)0x7a,  /* [2485] */
    (xdc_Char)0x65,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x69,  /* [2488] */
    (xdc_Char)0x73,  /* [2489] */
    (xdc_Char)0x20,  /* [2490] */
    (xdc_Char)0x74,  /* [2491] */
    (xdc_Char)0x6f,  /* [2492] */
    (xdc_Char)0x6f,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x73,  /* [2495] */
    (xdc_Char)0x6d,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x6c,  /* [2498] */
    (xdc_Char)0x6c,  /* [2499] */
    (xdc_Char)0x0,  /* [2500] */
    (xdc_Char)0x41,  /* [2501] */
    (xdc_Char)0x5f,  /* [2502] */
    (xdc_Char)0x61,  /* [2503] */
    (xdc_Char)0x6c,  /* [2504] */
    (xdc_Char)0x69,  /* [2505] */
    (xdc_Char)0x67,  /* [2506] */
    (xdc_Char)0x6e,  /* [2507] */
    (xdc_Char)0x3a,  /* [2508] */
    (xdc_Char)0x20,  /* [2509] */
    (xdc_Char)0x52,  /* [2510] */
    (xdc_Char)0x65,  /* [2511] */
    (xdc_Char)0x71,  /* [2512] */
    (xdc_Char)0x75,  /* [2513] */
    (xdc_Char)0x65,  /* [2514] */
    (xdc_Char)0x73,  /* [2515] */
    (xdc_Char)0x74,  /* [2516] */
    (xdc_Char)0x65,  /* [2517] */
    (xdc_Char)0x64,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x61,  /* [2520] */
    (xdc_Char)0x6c,  /* [2521] */
    (xdc_Char)0x69,  /* [2522] */
    (xdc_Char)0x67,  /* [2523] */
    (xdc_Char)0x6e,  /* [2524] */
    (xdc_Char)0x20,  /* [2525] */
    (xdc_Char)0x69,  /* [2526] */
    (xdc_Char)0x73,  /* [2527] */
    (xdc_Char)0x20,  /* [2528] */
    (xdc_Char)0x6e,  /* [2529] */
    (xdc_Char)0x6f,  /* [2530] */
    (xdc_Char)0x74,  /* [2531] */
    (xdc_Char)0x20,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x70,  /* [2535] */
    (xdc_Char)0x6f,  /* [2536] */
    (xdc_Char)0x77,  /* [2537] */
    (xdc_Char)0x65,  /* [2538] */
    (xdc_Char)0x72,  /* [2539] */
    (xdc_Char)0x20,  /* [2540] */
    (xdc_Char)0x6f,  /* [2541] */
    (xdc_Char)0x66,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x32,  /* [2544] */
    (xdc_Char)0x0,  /* [2545] */
    (xdc_Char)0x49,  /* [2546] */
    (xdc_Char)0x6e,  /* [2547] */
    (xdc_Char)0x76,  /* [2548] */
    (xdc_Char)0x61,  /* [2549] */
    (xdc_Char)0x6c,  /* [2550] */
    (xdc_Char)0x69,  /* [2551] */
    (xdc_Char)0x64,  /* [2552] */
    (xdc_Char)0x20,  /* [2553] */
    (xdc_Char)0x62,  /* [2554] */
    (xdc_Char)0x6c,  /* [2555] */
    (xdc_Char)0x6f,  /* [2556] */
    (xdc_Char)0x63,  /* [2557] */
    (xdc_Char)0x6b,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x61,  /* [2560] */
    (xdc_Char)0x64,  /* [2561] */
    (xdc_Char)0x64,  /* [2562] */
    (xdc_Char)0x72,  /* [2563] */
    (xdc_Char)0x65,  /* [2564] */
    (xdc_Char)0x73,  /* [2565] */
    (xdc_Char)0x73,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x6f,  /* [2568] */
    (xdc_Char)0x6e,  /* [2569] */
    (xdc_Char)0x20,  /* [2570] */
    (xdc_Char)0x74,  /* [2571] */
    (xdc_Char)0x68,  /* [2572] */
    (xdc_Char)0x65,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x66,  /* [2575] */
    (xdc_Char)0x72,  /* [2576] */
    (xdc_Char)0x65,  /* [2577] */
    (xdc_Char)0x65,  /* [2578] */
    (xdc_Char)0x2e,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x46,  /* [2581] */
    (xdc_Char)0x61,  /* [2582] */
    (xdc_Char)0x69,  /* [2583] */
    (xdc_Char)0x6c,  /* [2584] */
    (xdc_Char)0x65,  /* [2585] */
    (xdc_Char)0x64,  /* [2586] */
    (xdc_Char)0x20,  /* [2587] */
    (xdc_Char)0x74,  /* [2588] */
    (xdc_Char)0x6f,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x66,  /* [2591] */
    (xdc_Char)0x72,  /* [2592] */
    (xdc_Char)0x65,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x62,  /* [2596] */
    (xdc_Char)0x6c,  /* [2597] */
    (xdc_Char)0x6f,  /* [2598] */
    (xdc_Char)0x63,  /* [2599] */
    (xdc_Char)0x6b,  /* [2600] */
    (xdc_Char)0x20,  /* [2601] */
    (xdc_Char)0x62,  /* [2602] */
    (xdc_Char)0x61,  /* [2603] */
    (xdc_Char)0x63,  /* [2604] */
    (xdc_Char)0x6b,  /* [2605] */
    (xdc_Char)0x20,  /* [2606] */
    (xdc_Char)0x74,  /* [2607] */
    (xdc_Char)0x6f,  /* [2608] */
    (xdc_Char)0x20,  /* [2609] */
    (xdc_Char)0x68,  /* [2610] */
    (xdc_Char)0x65,  /* [2611] */
    (xdc_Char)0x61,  /* [2612] */
    (xdc_Char)0x70,  /* [2613] */
    (xdc_Char)0x2e,  /* [2614] */
    (xdc_Char)0x0,  /* [2615] */
    (xdc_Char)0x41,  /* [2616] */
    (xdc_Char)0x5f,  /* [2617] */
    (xdc_Char)0x64,  /* [2618] */
    (xdc_Char)0x6f,  /* [2619] */
    (xdc_Char)0x75,  /* [2620] */
    (xdc_Char)0x62,  /* [2621] */
    (xdc_Char)0x6c,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x46,  /* [2624] */
    (xdc_Char)0x72,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x65,  /* [2627] */
    (xdc_Char)0x3a,  /* [2628] */
    (xdc_Char)0x20,  /* [2629] */
    (xdc_Char)0x42,  /* [2630] */
    (xdc_Char)0x75,  /* [2631] */
    (xdc_Char)0x66,  /* [2632] */
    (xdc_Char)0x66,  /* [2633] */
    (xdc_Char)0x65,  /* [2634] */
    (xdc_Char)0x72,  /* [2635] */
    (xdc_Char)0x20,  /* [2636] */
    (xdc_Char)0x61,  /* [2637] */
    (xdc_Char)0x6c,  /* [2638] */
    (xdc_Char)0x72,  /* [2639] */
    (xdc_Char)0x65,  /* [2640] */
    (xdc_Char)0x61,  /* [2641] */
    (xdc_Char)0x64,  /* [2642] */
    (xdc_Char)0x79,  /* [2643] */
    (xdc_Char)0x20,  /* [2644] */
    (xdc_Char)0x66,  /* [2645] */
    (xdc_Char)0x72,  /* [2646] */
    (xdc_Char)0x65,  /* [2647] */
    (xdc_Char)0x65,  /* [2648] */
    (xdc_Char)0x0,  /* [2649] */
    (xdc_Char)0x41,  /* [2650] */
    (xdc_Char)0x5f,  /* [2651] */
    (xdc_Char)0x62,  /* [2652] */
    (xdc_Char)0x75,  /* [2653] */
    (xdc_Char)0x66,  /* [2654] */
    (xdc_Char)0x4f,  /* [2655] */
    (xdc_Char)0x76,  /* [2656] */
    (xdc_Char)0x65,  /* [2657] */
    (xdc_Char)0x72,  /* [2658] */
    (xdc_Char)0x66,  /* [2659] */
    (xdc_Char)0x6c,  /* [2660] */
    (xdc_Char)0x6f,  /* [2661] */
    (xdc_Char)0x77,  /* [2662] */
    (xdc_Char)0x3a,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x42,  /* [2665] */
    (xdc_Char)0x75,  /* [2666] */
    (xdc_Char)0x66,  /* [2667] */
    (xdc_Char)0x66,  /* [2668] */
    (xdc_Char)0x65,  /* [2669] */
    (xdc_Char)0x72,  /* [2670] */
    (xdc_Char)0x20,  /* [2671] */
    (xdc_Char)0x6f,  /* [2672] */
    (xdc_Char)0x76,  /* [2673] */
    (xdc_Char)0x65,  /* [2674] */
    (xdc_Char)0x72,  /* [2675] */
    (xdc_Char)0x66,  /* [2676] */
    (xdc_Char)0x6c,  /* [2677] */
    (xdc_Char)0x6f,  /* [2678] */
    (xdc_Char)0x77,  /* [2679] */
    (xdc_Char)0x0,  /* [2680] */
    (xdc_Char)0x41,  /* [2681] */
    (xdc_Char)0x5f,  /* [2682] */
    (xdc_Char)0x6e,  /* [2683] */
    (xdc_Char)0x6f,  /* [2684] */
    (xdc_Char)0x74,  /* [2685] */
    (xdc_Char)0x45,  /* [2686] */
    (xdc_Char)0x6d,  /* [2687] */
    (xdc_Char)0x70,  /* [2688] */
    (xdc_Char)0x74,  /* [2689] */
    (xdc_Char)0x79,  /* [2690] */
    (xdc_Char)0x3a,  /* [2691] */
    (xdc_Char)0x20,  /* [2692] */
    (xdc_Char)0x48,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x70,  /* [2696] */
    (xdc_Char)0x20,  /* [2697] */
    (xdc_Char)0x6e,  /* [2698] */
    (xdc_Char)0x6f,  /* [2699] */
    (xdc_Char)0x74,  /* [2700] */
    (xdc_Char)0x20,  /* [2701] */
    (xdc_Char)0x65,  /* [2702] */
    (xdc_Char)0x6d,  /* [2703] */
    (xdc_Char)0x70,  /* [2704] */
    (xdc_Char)0x74,  /* [2705] */
    (xdc_Char)0x79,  /* [2706] */
    (xdc_Char)0x0,  /* [2707] */
    (xdc_Char)0x41,  /* [2708] */
    (xdc_Char)0x5f,  /* [2709] */
    (xdc_Char)0x6e,  /* [2710] */
    (xdc_Char)0x75,  /* [2711] */
    (xdc_Char)0x6c,  /* [2712] */
    (xdc_Char)0x6c,  /* [2713] */
    (xdc_Char)0x4f,  /* [2714] */
    (xdc_Char)0x62,  /* [2715] */
    (xdc_Char)0x6a,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x63,  /* [2718] */
    (xdc_Char)0x74,  /* [2719] */
    (xdc_Char)0x3a,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x48,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x61,  /* [2724] */
    (xdc_Char)0x70,  /* [2725] */
    (xdc_Char)0x54,  /* [2726] */
    (xdc_Char)0x72,  /* [2727] */
    (xdc_Char)0x61,  /* [2728] */
    (xdc_Char)0x63,  /* [2729] */
    (xdc_Char)0x6b,  /* [2730] */
    (xdc_Char)0x5f,  /* [2731] */
    (xdc_Char)0x70,  /* [2732] */
    (xdc_Char)0x72,  /* [2733] */
    (xdc_Char)0x69,  /* [2734] */
    (xdc_Char)0x6e,  /* [2735] */
    (xdc_Char)0x74,  /* [2736] */
    (xdc_Char)0x48,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x61,  /* [2739] */
    (xdc_Char)0x70,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x63,  /* [2742] */
    (xdc_Char)0x61,  /* [2743] */
    (xdc_Char)0x6c,  /* [2744] */
    (xdc_Char)0x6c,  /* [2745] */
    (xdc_Char)0x65,  /* [2746] */
    (xdc_Char)0x64,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x77,  /* [2749] */
    (xdc_Char)0x69,  /* [2750] */
    (xdc_Char)0x74,  /* [2751] */
    (xdc_Char)0x68,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x6e,  /* [2754] */
    (xdc_Char)0x75,  /* [2755] */
    (xdc_Char)0x6c,  /* [2756] */
    (xdc_Char)0x6c,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x6f,  /* [2759] */
    (xdc_Char)0x62,  /* [2760] */
    (xdc_Char)0x6a,  /* [2761] */
    (xdc_Char)0x0,  /* [2762] */
    (xdc_Char)0x41,  /* [2763] */
    (xdc_Char)0x5f,  /* [2764] */
    (xdc_Char)0x62,  /* [2765] */
    (xdc_Char)0x61,  /* [2766] */
    (xdc_Char)0x64,  /* [2767] */
    (xdc_Char)0x43,  /* [2768] */
    (xdc_Char)0x68,  /* [2769] */
    (xdc_Char)0x61,  /* [2770] */
    (xdc_Char)0x6e,  /* [2771] */
    (xdc_Char)0x6e,  /* [2772] */
    (xdc_Char)0x65,  /* [2773] */
    (xdc_Char)0x6c,  /* [2774] */
    (xdc_Char)0x49,  /* [2775] */
    (xdc_Char)0x64,  /* [2776] */
    (xdc_Char)0x3a,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x43,  /* [2779] */
    (xdc_Char)0x68,  /* [2780] */
    (xdc_Char)0x61,  /* [2781] */
    (xdc_Char)0x6e,  /* [2782] */
    (xdc_Char)0x6e,  /* [2783] */
    (xdc_Char)0x65,  /* [2784] */
    (xdc_Char)0x6c,  /* [2785] */
    (xdc_Char)0x49,  /* [2786] */
    (xdc_Char)0x64,  /* [2787] */
    (xdc_Char)0x20,  /* [2788] */
    (xdc_Char)0x69,  /* [2789] */
    (xdc_Char)0x73,  /* [2790] */
    (xdc_Char)0x20,  /* [2791] */
    (xdc_Char)0x65,  /* [2792] */
    (xdc_Char)0x69,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x68,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x72,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x6e,  /* [2799] */
    (xdc_Char)0x6f,  /* [2800] */
    (xdc_Char)0x74,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x72,  /* [2803] */
    (xdc_Char)0x65,  /* [2804] */
    (xdc_Char)0x2d,  /* [2805] */
    (xdc_Char)0x6d,  /* [2806] */
    (xdc_Char)0x61,  /* [2807] */
    (xdc_Char)0x70,  /* [2808] */
    (xdc_Char)0x70,  /* [2809] */
    (xdc_Char)0x61,  /* [2810] */
    (xdc_Char)0x62,  /* [2811] */
    (xdc_Char)0x6c,  /* [2812] */
    (xdc_Char)0x65,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x6f,  /* [2815] */
    (xdc_Char)0x72,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x69,  /* [2818] */
    (xdc_Char)0x6e,  /* [2819] */
    (xdc_Char)0x76,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x6c,  /* [2822] */
    (xdc_Char)0x69,  /* [2823] */
    (xdc_Char)0x64,  /* [2824] */
    (xdc_Char)0x2e,  /* [2825] */
    (xdc_Char)0x0,  /* [2826] */
    (xdc_Char)0x41,  /* [2827] */
    (xdc_Char)0x5f,  /* [2828] */
    (xdc_Char)0x7a,  /* [2829] */
    (xdc_Char)0x65,  /* [2830] */
    (xdc_Char)0x72,  /* [2831] */
    (xdc_Char)0x6f,  /* [2832] */
    (xdc_Char)0x54,  /* [2833] */
    (xdc_Char)0x69,  /* [2834] */
    (xdc_Char)0x6d,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x6f,  /* [2837] */
    (xdc_Char)0x75,  /* [2838] */
    (xdc_Char)0x74,  /* [2839] */
    (xdc_Char)0x3a,  /* [2840] */
    (xdc_Char)0x20,  /* [2841] */
    (xdc_Char)0x54,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x6d,  /* [2844] */
    (xdc_Char)0x65,  /* [2845] */
    (xdc_Char)0x6f,  /* [2846] */
    (xdc_Char)0x75,  /* [2847] */
    (xdc_Char)0x74,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x76,  /* [2850] */
    (xdc_Char)0x61,  /* [2851] */
    (xdc_Char)0x6c,  /* [2852] */
    (xdc_Char)0x75,  /* [2853] */
    (xdc_Char)0x65,  /* [2854] */
    (xdc_Char)0x20,  /* [2855] */
    (xdc_Char)0x61,  /* [2856] */
    (xdc_Char)0x6e,  /* [2857] */
    (xdc_Char)0x6e,  /* [2858] */
    (xdc_Char)0x6f,  /* [2859] */
    (xdc_Char)0x74,  /* [2860] */
    (xdc_Char)0x20,  /* [2861] */
    (xdc_Char)0x62,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x20,  /* [2864] */
    (xdc_Char)0x7a,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x72,  /* [2867] */
    (xdc_Char)0x6f,  /* [2868] */
    (xdc_Char)0x0,  /* [2869] */
    (xdc_Char)0x41,  /* [2870] */
    (xdc_Char)0x5f,  /* [2871] */
    (xdc_Char)0x69,  /* [2872] */
    (xdc_Char)0x6e,  /* [2873] */
    (xdc_Char)0x76,  /* [2874] */
    (xdc_Char)0x61,  /* [2875] */
    (xdc_Char)0x6c,  /* [2876] */
    (xdc_Char)0x69,  /* [2877] */
    (xdc_Char)0x64,  /* [2878] */
    (xdc_Char)0x4b,  /* [2879] */
    (xdc_Char)0x65,  /* [2880] */
    (xdc_Char)0x79,  /* [2881] */
    (xdc_Char)0x3a,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x74,  /* [2884] */
    (xdc_Char)0x68,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x6b,  /* [2888] */
    (xdc_Char)0x65,  /* [2889] */
    (xdc_Char)0x79,  /* [2890] */
    (xdc_Char)0x20,  /* [2891] */
    (xdc_Char)0x6d,  /* [2892] */
    (xdc_Char)0x75,  /* [2893] */
    (xdc_Char)0x73,  /* [2894] */
    (xdc_Char)0x74,  /* [2895] */
    (xdc_Char)0x20,  /* [2896] */
    (xdc_Char)0x62,  /* [2897] */
    (xdc_Char)0x65,  /* [2898] */
    (xdc_Char)0x20,  /* [2899] */
    (xdc_Char)0x73,  /* [2900] */
    (xdc_Char)0x65,  /* [2901] */
    (xdc_Char)0x74,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x74,  /* [2904] */
    (xdc_Char)0x6f,  /* [2905] */
    (xdc_Char)0x20,  /* [2906] */
    (xdc_Char)0x61,  /* [2907] */
    (xdc_Char)0x20,  /* [2908] */
    (xdc_Char)0x6e,  /* [2909] */
    (xdc_Char)0x6f,  /* [2910] */
    (xdc_Char)0x6e,  /* [2911] */
    (xdc_Char)0x2d,  /* [2912] */
    (xdc_Char)0x64,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x66,  /* [2915] */
    (xdc_Char)0x61,  /* [2916] */
    (xdc_Char)0x75,  /* [2917] */
    (xdc_Char)0x6c,  /* [2918] */
    (xdc_Char)0x74,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x76,  /* [2921] */
    (xdc_Char)0x61,  /* [2922] */
    (xdc_Char)0x6c,  /* [2923] */
    (xdc_Char)0x75,  /* [2924] */
    (xdc_Char)0x65,  /* [2925] */
    (xdc_Char)0x0,  /* [2926] */
    (xdc_Char)0x41,  /* [2927] */
    (xdc_Char)0x5f,  /* [2928] */
    (xdc_Char)0x62,  /* [2929] */
    (xdc_Char)0x61,  /* [2930] */
    (xdc_Char)0x64,  /* [2931] */
    (xdc_Char)0x43,  /* [2932] */
    (xdc_Char)0x6f,  /* [2933] */
    (xdc_Char)0x6e,  /* [2934] */
    (xdc_Char)0x74,  /* [2935] */
    (xdc_Char)0x65,  /* [2936] */
    (xdc_Char)0x78,  /* [2937] */
    (xdc_Char)0x74,  /* [2938] */
    (xdc_Char)0x3a,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x62,  /* [2941] */
    (xdc_Char)0x61,  /* [2942] */
    (xdc_Char)0x64,  /* [2943] */
    (xdc_Char)0x20,  /* [2944] */
    (xdc_Char)0x63,  /* [2945] */
    (xdc_Char)0x61,  /* [2946] */
    (xdc_Char)0x6c,  /* [2947] */
    (xdc_Char)0x6c,  /* [2948] */
    (xdc_Char)0x69,  /* [2949] */
    (xdc_Char)0x6e,  /* [2950] */
    (xdc_Char)0x67,  /* [2951] */
    (xdc_Char)0x20,  /* [2952] */
    (xdc_Char)0x63,  /* [2953] */
    (xdc_Char)0x6f,  /* [2954] */
    (xdc_Char)0x6e,  /* [2955] */
    (xdc_Char)0x74,  /* [2956] */
    (xdc_Char)0x65,  /* [2957] */
    (xdc_Char)0x78,  /* [2958] */
    (xdc_Char)0x74,  /* [2959] */
    (xdc_Char)0x2e,  /* [2960] */
    (xdc_Char)0x20,  /* [2961] */
    (xdc_Char)0x4d,  /* [2962] */
    (xdc_Char)0x61,  /* [2963] */
    (xdc_Char)0x79,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x6e,  /* [2966] */
    (xdc_Char)0x6f,  /* [2967] */
    (xdc_Char)0x74,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x62,  /* [2970] */
    (xdc_Char)0x65,  /* [2971] */
    (xdc_Char)0x20,  /* [2972] */
    (xdc_Char)0x65,  /* [2973] */
    (xdc_Char)0x6e,  /* [2974] */
    (xdc_Char)0x74,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x72,  /* [2977] */
    (xdc_Char)0x65,  /* [2978] */
    (xdc_Char)0x64,  /* [2979] */
    (xdc_Char)0x20,  /* [2980] */
    (xdc_Char)0x66,  /* [2981] */
    (xdc_Char)0x72,  /* [2982] */
    (xdc_Char)0x6f,  /* [2983] */
    (xdc_Char)0x6d,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x61,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x68,  /* [2988] */
    (xdc_Char)0x61,  /* [2989] */
    (xdc_Char)0x72,  /* [2990] */
    (xdc_Char)0x64,  /* [2991] */
    (xdc_Char)0x77,  /* [2992] */
    (xdc_Char)0x61,  /* [2993] */
    (xdc_Char)0x72,  /* [2994] */
    (xdc_Char)0x65,  /* [2995] */
    (xdc_Char)0x20,  /* [2996] */
    (xdc_Char)0x69,  /* [2997] */
    (xdc_Char)0x6e,  /* [2998] */
    (xdc_Char)0x74,  /* [2999] */
    (xdc_Char)0x65,  /* [3000] */
    (xdc_Char)0x72,  /* [3001] */
    (xdc_Char)0x72,  /* [3002] */
    (xdc_Char)0x75,  /* [3003] */
    (xdc_Char)0x70,  /* [3004] */
    (xdc_Char)0x74,  /* [3005] */
    (xdc_Char)0x20,  /* [3006] */
    (xdc_Char)0x74,  /* [3007] */
    (xdc_Char)0x68,  /* [3008] */
    (xdc_Char)0x72,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x61,  /* [3011] */
    (xdc_Char)0x64,  /* [3012] */
    (xdc_Char)0x2e,  /* [3013] */
    (xdc_Char)0x0,  /* [3014] */
    (xdc_Char)0x41,  /* [3015] */
    (xdc_Char)0x5f,  /* [3016] */
    (xdc_Char)0x62,  /* [3017] */
    (xdc_Char)0x61,  /* [3018] */
    (xdc_Char)0x64,  /* [3019] */
    (xdc_Char)0x43,  /* [3020] */
    (xdc_Char)0x6f,  /* [3021] */
    (xdc_Char)0x6e,  /* [3022] */
    (xdc_Char)0x74,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x78,  /* [3025] */
    (xdc_Char)0x74,  /* [3026] */
    (xdc_Char)0x3a,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x62,  /* [3029] */
    (xdc_Char)0x61,  /* [3030] */
    (xdc_Char)0x64,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x63,  /* [3033] */
    (xdc_Char)0x61,  /* [3034] */
    (xdc_Char)0x6c,  /* [3035] */
    (xdc_Char)0x6c,  /* [3036] */
    (xdc_Char)0x69,  /* [3037] */
    (xdc_Char)0x6e,  /* [3038] */
    (xdc_Char)0x67,  /* [3039] */
    (xdc_Char)0x20,  /* [3040] */
    (xdc_Char)0x63,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x6e,  /* [3043] */
    (xdc_Char)0x74,  /* [3044] */
    (xdc_Char)0x65,  /* [3045] */
    (xdc_Char)0x78,  /* [3046] */
    (xdc_Char)0x74,  /* [3047] */
    (xdc_Char)0x2e,  /* [3048] */
    (xdc_Char)0x20,  /* [3049] */
    (xdc_Char)0x4d,  /* [3050] */
    (xdc_Char)0x61,  /* [3051] */
    (xdc_Char)0x79,  /* [3052] */
    (xdc_Char)0x20,  /* [3053] */
    (xdc_Char)0x6e,  /* [3054] */
    (xdc_Char)0x6f,  /* [3055] */
    (xdc_Char)0x74,  /* [3056] */
    (xdc_Char)0x20,  /* [3057] */
    (xdc_Char)0x62,  /* [3058] */
    (xdc_Char)0x65,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x6e,  /* [3062] */
    (xdc_Char)0x74,  /* [3063] */
    (xdc_Char)0x65,  /* [3064] */
    (xdc_Char)0x72,  /* [3065] */
    (xdc_Char)0x65,  /* [3066] */
    (xdc_Char)0x64,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x66,  /* [3069] */
    (xdc_Char)0x72,  /* [3070] */
    (xdc_Char)0x6f,  /* [3071] */
    (xdc_Char)0x6d,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x61,  /* [3074] */
    (xdc_Char)0x20,  /* [3075] */
    (xdc_Char)0x73,  /* [3076] */
    (xdc_Char)0x6f,  /* [3077] */
    (xdc_Char)0x66,  /* [3078] */
    (xdc_Char)0x74,  /* [3079] */
    (xdc_Char)0x77,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x72,  /* [3082] */
    (xdc_Char)0x65,  /* [3083] */
    (xdc_Char)0x20,  /* [3084] */
    (xdc_Char)0x6f,  /* [3085] */
    (xdc_Char)0x72,  /* [3086] */
    (xdc_Char)0x20,  /* [3087] */
    (xdc_Char)0x68,  /* [3088] */
    (xdc_Char)0x61,  /* [3089] */
    (xdc_Char)0x72,  /* [3090] */
    (xdc_Char)0x64,  /* [3091] */
    (xdc_Char)0x77,  /* [3092] */
    (xdc_Char)0x61,  /* [3093] */
    (xdc_Char)0x72,  /* [3094] */
    (xdc_Char)0x65,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x69,  /* [3097] */
    (xdc_Char)0x6e,  /* [3098] */
    (xdc_Char)0x74,  /* [3099] */
    (xdc_Char)0x65,  /* [3100] */
    (xdc_Char)0x72,  /* [3101] */
    (xdc_Char)0x72,  /* [3102] */
    (xdc_Char)0x75,  /* [3103] */
    (xdc_Char)0x70,  /* [3104] */
    (xdc_Char)0x74,  /* [3105] */
    (xdc_Char)0x20,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x68,  /* [3108] */
    (xdc_Char)0x72,  /* [3109] */
    (xdc_Char)0x65,  /* [3110] */
    (xdc_Char)0x61,  /* [3111] */
    (xdc_Char)0x64,  /* [3112] */
    (xdc_Char)0x2e,  /* [3113] */
    (xdc_Char)0x0,  /* [3114] */
    (xdc_Char)0x41,  /* [3115] */
    (xdc_Char)0x5f,  /* [3116] */
    (xdc_Char)0x62,  /* [3117] */
    (xdc_Char)0x61,  /* [3118] */
    (xdc_Char)0x64,  /* [3119] */
    (xdc_Char)0x43,  /* [3120] */
    (xdc_Char)0x6f,  /* [3121] */
    (xdc_Char)0x6e,  /* [3122] */
    (xdc_Char)0x74,  /* [3123] */
    (xdc_Char)0x65,  /* [3124] */
    (xdc_Char)0x78,  /* [3125] */
    (xdc_Char)0x74,  /* [3126] */
    (xdc_Char)0x3a,  /* [3127] */
    (xdc_Char)0x20,  /* [3128] */
    (xdc_Char)0x62,  /* [3129] */
    (xdc_Char)0x61,  /* [3130] */
    (xdc_Char)0x64,  /* [3131] */
    (xdc_Char)0x20,  /* [3132] */
    (xdc_Char)0x63,  /* [3133] */
    (xdc_Char)0x61,  /* [3134] */
    (xdc_Char)0x6c,  /* [3135] */
    (xdc_Char)0x6c,  /* [3136] */
    (xdc_Char)0x69,  /* [3137] */
    (xdc_Char)0x6e,  /* [3138] */
    (xdc_Char)0x67,  /* [3139] */
    (xdc_Char)0x20,  /* [3140] */
    (xdc_Char)0x63,  /* [3141] */
    (xdc_Char)0x6f,  /* [3142] */
    (xdc_Char)0x6e,  /* [3143] */
    (xdc_Char)0x74,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x78,  /* [3146] */
    (xdc_Char)0x74,  /* [3147] */
    (xdc_Char)0x2e,  /* [3148] */
    (xdc_Char)0x20,  /* [3149] */
    (xdc_Char)0x53,  /* [3150] */
    (xdc_Char)0x65,  /* [3151] */
    (xdc_Char)0x65,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x47,  /* [3154] */
    (xdc_Char)0x61,  /* [3155] */
    (xdc_Char)0x74,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x4d,  /* [3158] */
    (xdc_Char)0x75,  /* [3159] */
    (xdc_Char)0x74,  /* [3160] */
    (xdc_Char)0x65,  /* [3161] */
    (xdc_Char)0x78,  /* [3162] */
    (xdc_Char)0x50,  /* [3163] */
    (xdc_Char)0x72,  /* [3164] */
    (xdc_Char)0x69,  /* [3165] */
    (xdc_Char)0x20,  /* [3166] */
    (xdc_Char)0x41,  /* [3167] */
    (xdc_Char)0x50,  /* [3168] */
    (xdc_Char)0x49,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x64,  /* [3171] */
    (xdc_Char)0x6f,  /* [3172] */
    (xdc_Char)0x63,  /* [3173] */
    (xdc_Char)0x20,  /* [3174] */
    (xdc_Char)0x66,  /* [3175] */
    (xdc_Char)0x6f,  /* [3176] */
    (xdc_Char)0x72,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x64,  /* [3179] */
    (xdc_Char)0x65,  /* [3180] */
    (xdc_Char)0x74,  /* [3181] */
    (xdc_Char)0x61,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x6c,  /* [3184] */
    (xdc_Char)0x73,  /* [3185] */
    (xdc_Char)0x2e,  /* [3186] */
    (xdc_Char)0x0,  /* [3187] */
    (xdc_Char)0x41,  /* [3188] */
    (xdc_Char)0x5f,  /* [3189] */
    (xdc_Char)0x65,  /* [3190] */
    (xdc_Char)0x6e,  /* [3191] */
    (xdc_Char)0x74,  /* [3192] */
    (xdc_Char)0x65,  /* [3193] */
    (xdc_Char)0x72,  /* [3194] */
    (xdc_Char)0x54,  /* [3195] */
    (xdc_Char)0x61,  /* [3196] */
    (xdc_Char)0x73,  /* [3197] */
    (xdc_Char)0x6b,  /* [3198] */
    (xdc_Char)0x44,  /* [3199] */
    (xdc_Char)0x69,  /* [3200] */
    (xdc_Char)0x73,  /* [3201] */
    (xdc_Char)0x61,  /* [3202] */
    (xdc_Char)0x62,  /* [3203] */
    (xdc_Char)0x6c,  /* [3204] */
    (xdc_Char)0x65,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x3a,  /* [3207] */
    (xdc_Char)0x20,  /* [3208] */
    (xdc_Char)0x43,  /* [3209] */
    (xdc_Char)0x61,  /* [3210] */
    (xdc_Char)0x6e,  /* [3211] */
    (xdc_Char)0x6e,  /* [3212] */
    (xdc_Char)0x6f,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x63,  /* [3216] */
    (xdc_Char)0x61,  /* [3217] */
    (xdc_Char)0x6c,  /* [3218] */
    (xdc_Char)0x6c,  /* [3219] */
    (xdc_Char)0x20,  /* [3220] */
    (xdc_Char)0x47,  /* [3221] */
    (xdc_Char)0x61,  /* [3222] */
    (xdc_Char)0x74,  /* [3223] */
    (xdc_Char)0x65,  /* [3224] */
    (xdc_Char)0x4d,  /* [3225] */
    (xdc_Char)0x75,  /* [3226] */
    (xdc_Char)0x74,  /* [3227] */
    (xdc_Char)0x65,  /* [3228] */
    (xdc_Char)0x78,  /* [3229] */
    (xdc_Char)0x50,  /* [3230] */
    (xdc_Char)0x72,  /* [3231] */
    (xdc_Char)0x69,  /* [3232] */
    (xdc_Char)0x5f,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x6e,  /* [3235] */
    (xdc_Char)0x74,  /* [3236] */
    (xdc_Char)0x65,  /* [3237] */
    (xdc_Char)0x72,  /* [3238] */
    (xdc_Char)0x28,  /* [3239] */
    (xdc_Char)0x29,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x77,  /* [3242] */
    (xdc_Char)0x68,  /* [3243] */
    (xdc_Char)0x69,  /* [3244] */
    (xdc_Char)0x6c,  /* [3245] */
    (xdc_Char)0x65,  /* [3246] */
    (xdc_Char)0x20,  /* [3247] */
    (xdc_Char)0x74,  /* [3248] */
    (xdc_Char)0x68,  /* [3249] */
    (xdc_Char)0x65,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x54,  /* [3252] */
    (xdc_Char)0x61,  /* [3253] */
    (xdc_Char)0x73,  /* [3254] */
    (xdc_Char)0x6b,  /* [3255] */
    (xdc_Char)0x20,  /* [3256] */
    (xdc_Char)0x6f,  /* [3257] */
    (xdc_Char)0x72,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x53,  /* [3260] */
    (xdc_Char)0x77,  /* [3261] */
    (xdc_Char)0x69,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x73,  /* [3264] */
    (xdc_Char)0x63,  /* [3265] */
    (xdc_Char)0x68,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x64,  /* [3268] */
    (xdc_Char)0x75,  /* [3269] */
    (xdc_Char)0x6c,  /* [3270] */
    (xdc_Char)0x65,  /* [3271] */
    (xdc_Char)0x72,  /* [3272] */
    (xdc_Char)0x20,  /* [3273] */
    (xdc_Char)0x69,  /* [3274] */
    (xdc_Char)0x73,  /* [3275] */
    (xdc_Char)0x20,  /* [3276] */
    (xdc_Char)0x64,  /* [3277] */
    (xdc_Char)0x69,  /* [3278] */
    (xdc_Char)0x73,  /* [3279] */
    (xdc_Char)0x61,  /* [3280] */
    (xdc_Char)0x62,  /* [3281] */
    (xdc_Char)0x6c,  /* [3282] */
    (xdc_Char)0x65,  /* [3283] */
    (xdc_Char)0x64,  /* [3284] */
    (xdc_Char)0x2e,  /* [3285] */
    (xdc_Char)0x0,  /* [3286] */
    (xdc_Char)0x41,  /* [3287] */
    (xdc_Char)0x5f,  /* [3288] */
    (xdc_Char)0x62,  /* [3289] */
    (xdc_Char)0x61,  /* [3290] */
    (xdc_Char)0x64,  /* [3291] */
    (xdc_Char)0x43,  /* [3292] */
    (xdc_Char)0x6f,  /* [3293] */
    (xdc_Char)0x6e,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x78,  /* [3297] */
    (xdc_Char)0x74,  /* [3298] */
    (xdc_Char)0x3a,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x62,  /* [3301] */
    (xdc_Char)0x61,  /* [3302] */
    (xdc_Char)0x64,  /* [3303] */
    (xdc_Char)0x20,  /* [3304] */
    (xdc_Char)0x63,  /* [3305] */
    (xdc_Char)0x61,  /* [3306] */
    (xdc_Char)0x6c,  /* [3307] */
    (xdc_Char)0x6c,  /* [3308] */
    (xdc_Char)0x69,  /* [3309] */
    (xdc_Char)0x6e,  /* [3310] */
    (xdc_Char)0x67,  /* [3311] */
    (xdc_Char)0x20,  /* [3312] */
    (xdc_Char)0x63,  /* [3313] */
    (xdc_Char)0x6f,  /* [3314] */
    (xdc_Char)0x6e,  /* [3315] */
    (xdc_Char)0x74,  /* [3316] */
    (xdc_Char)0x65,  /* [3317] */
    (xdc_Char)0x78,  /* [3318] */
    (xdc_Char)0x74,  /* [3319] */
    (xdc_Char)0x2e,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x53,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x65,  /* [3324] */
    (xdc_Char)0x20,  /* [3325] */
    (xdc_Char)0x47,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x74,  /* [3328] */
    (xdc_Char)0x65,  /* [3329] */
    (xdc_Char)0x4d,  /* [3330] */
    (xdc_Char)0x75,  /* [3331] */
    (xdc_Char)0x74,  /* [3332] */
    (xdc_Char)0x65,  /* [3333] */
    (xdc_Char)0x78,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x41,  /* [3336] */
    (xdc_Char)0x50,  /* [3337] */
    (xdc_Char)0x49,  /* [3338] */
    (xdc_Char)0x20,  /* [3339] */
    (xdc_Char)0x64,  /* [3340] */
    (xdc_Char)0x6f,  /* [3341] */
    (xdc_Char)0x63,  /* [3342] */
    (xdc_Char)0x20,  /* [3343] */
    (xdc_Char)0x66,  /* [3344] */
    (xdc_Char)0x6f,  /* [3345] */
    (xdc_Char)0x72,  /* [3346] */
    (xdc_Char)0x20,  /* [3347] */
    (xdc_Char)0x64,  /* [3348] */
    (xdc_Char)0x65,  /* [3349] */
    (xdc_Char)0x74,  /* [3350] */
    (xdc_Char)0x61,  /* [3351] */
    (xdc_Char)0x69,  /* [3352] */
    (xdc_Char)0x6c,  /* [3353] */
    (xdc_Char)0x73,  /* [3354] */
    (xdc_Char)0x2e,  /* [3355] */
    (xdc_Char)0x0,  /* [3356] */
    (xdc_Char)0x41,  /* [3357] */
    (xdc_Char)0x5f,  /* [3358] */
    (xdc_Char)0x62,  /* [3359] */
    (xdc_Char)0x61,  /* [3360] */
    (xdc_Char)0x64,  /* [3361] */
    (xdc_Char)0x43,  /* [3362] */
    (xdc_Char)0x6f,  /* [3363] */
    (xdc_Char)0x6e,  /* [3364] */
    (xdc_Char)0x74,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x78,  /* [3367] */
    (xdc_Char)0x74,  /* [3368] */
    (xdc_Char)0x3a,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x62,  /* [3371] */
    (xdc_Char)0x61,  /* [3372] */
    (xdc_Char)0x64,  /* [3373] */
    (xdc_Char)0x20,  /* [3374] */
    (xdc_Char)0x63,  /* [3375] */
    (xdc_Char)0x61,  /* [3376] */
    (xdc_Char)0x6c,  /* [3377] */
    (xdc_Char)0x6c,  /* [3378] */
    (xdc_Char)0x69,  /* [3379] */
    (xdc_Char)0x6e,  /* [3380] */
    (xdc_Char)0x67,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x63,  /* [3383] */
    (xdc_Char)0x6f,  /* [3384] */
    (xdc_Char)0x6e,  /* [3385] */
    (xdc_Char)0x74,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x78,  /* [3388] */
    (xdc_Char)0x74,  /* [3389] */
    (xdc_Char)0x2e,  /* [3390] */
    (xdc_Char)0x20,  /* [3391] */
    (xdc_Char)0x53,  /* [3392] */
    (xdc_Char)0x65,  /* [3393] */
    (xdc_Char)0x65,  /* [3394] */
    (xdc_Char)0x20,  /* [3395] */
    (xdc_Char)0x47,  /* [3396] */
    (xdc_Char)0x61,  /* [3397] */
    (xdc_Char)0x74,  /* [3398] */
    (xdc_Char)0x65,  /* [3399] */
    (xdc_Char)0x53,  /* [3400] */
    (xdc_Char)0x70,  /* [3401] */
    (xdc_Char)0x69,  /* [3402] */
    (xdc_Char)0x6e,  /* [3403] */
    (xdc_Char)0x6c,  /* [3404] */
    (xdc_Char)0x6f,  /* [3405] */
    (xdc_Char)0x63,  /* [3406] */
    (xdc_Char)0x6b,  /* [3407] */
    (xdc_Char)0x20,  /* [3408] */
    (xdc_Char)0x41,  /* [3409] */
    (xdc_Char)0x50,  /* [3410] */
    (xdc_Char)0x49,  /* [3411] */
    (xdc_Char)0x20,  /* [3412] */
    (xdc_Char)0x64,  /* [3413] */
    (xdc_Char)0x6f,  /* [3414] */
    (xdc_Char)0x63,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x66,  /* [3417] */
    (xdc_Char)0x6f,  /* [3418] */
    (xdc_Char)0x72,  /* [3419] */
    (xdc_Char)0x20,  /* [3420] */
    (xdc_Char)0x64,  /* [3421] */
    (xdc_Char)0x65,  /* [3422] */
    (xdc_Char)0x74,  /* [3423] */
    (xdc_Char)0x61,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x6c,  /* [3426] */
    (xdc_Char)0x73,  /* [3427] */
    (xdc_Char)0x2e,  /* [3428] */
    (xdc_Char)0x0,  /* [3429] */
    (xdc_Char)0x41,  /* [3430] */
    (xdc_Char)0x5f,  /* [3431] */
    (xdc_Char)0x69,  /* [3432] */
    (xdc_Char)0x6e,  /* [3433] */
    (xdc_Char)0x76,  /* [3434] */
    (xdc_Char)0x61,  /* [3435] */
    (xdc_Char)0x6c,  /* [3436] */
    (xdc_Char)0x69,  /* [3437] */
    (xdc_Char)0x64,  /* [3438] */
    (xdc_Char)0x51,  /* [3439] */
    (xdc_Char)0x75,  /* [3440] */
    (xdc_Char)0x61,  /* [3441] */
    (xdc_Char)0x6c,  /* [3442] */
    (xdc_Char)0x69,  /* [3443] */
    (xdc_Char)0x74,  /* [3444] */
    (xdc_Char)0x79,  /* [3445] */
    (xdc_Char)0x3a,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x53,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x65,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x47,  /* [3452] */
    (xdc_Char)0x61,  /* [3453] */
    (xdc_Char)0x74,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x53,  /* [3456] */
    (xdc_Char)0x70,  /* [3457] */
    (xdc_Char)0x69,  /* [3458] */
    (xdc_Char)0x6e,  /* [3459] */
    (xdc_Char)0x6c,  /* [3460] */
    (xdc_Char)0x6f,  /* [3461] */
    (xdc_Char)0x63,  /* [3462] */
    (xdc_Char)0x6b,  /* [3463] */
    (xdc_Char)0x20,  /* [3464] */
    (xdc_Char)0x41,  /* [3465] */
    (xdc_Char)0x50,  /* [3466] */
    (xdc_Char)0x49,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x64,  /* [3469] */
    (xdc_Char)0x6f,  /* [3470] */
    (xdc_Char)0x63,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x66,  /* [3473] */
    (xdc_Char)0x6f,  /* [3474] */
    (xdc_Char)0x72,  /* [3475] */
    (xdc_Char)0x20,  /* [3476] */
    (xdc_Char)0x64,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x74,  /* [3479] */
    (xdc_Char)0x61,  /* [3480] */
    (xdc_Char)0x69,  /* [3481] */
    (xdc_Char)0x6c,  /* [3482] */
    (xdc_Char)0x73,  /* [3483] */
    (xdc_Char)0x2e,  /* [3484] */
    (xdc_Char)0x0,  /* [3485] */
    (xdc_Char)0x41,  /* [3486] */
    (xdc_Char)0x5f,  /* [3487] */
    (xdc_Char)0x69,  /* [3488] */
    (xdc_Char)0x6e,  /* [3489] */
    (xdc_Char)0x76,  /* [3490] */
    (xdc_Char)0x61,  /* [3491] */
    (xdc_Char)0x6c,  /* [3492] */
    (xdc_Char)0x69,  /* [3493] */
    (xdc_Char)0x64,  /* [3494] */
    (xdc_Char)0x54,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x6d,  /* [3497] */
    (xdc_Char)0x65,  /* [3498] */
    (xdc_Char)0x72,  /* [3499] */
    (xdc_Char)0x3a,  /* [3500] */
    (xdc_Char)0x20,  /* [3501] */
    (xdc_Char)0x49,  /* [3502] */
    (xdc_Char)0x6e,  /* [3503] */
    (xdc_Char)0x76,  /* [3504] */
    (xdc_Char)0x61,  /* [3505] */
    (xdc_Char)0x6c,  /* [3506] */
    (xdc_Char)0x69,  /* [3507] */
    (xdc_Char)0x64,  /* [3508] */
    (xdc_Char)0x20,  /* [3509] */
    (xdc_Char)0x54,  /* [3510] */
    (xdc_Char)0x69,  /* [3511] */
    (xdc_Char)0x6d,  /* [3512] */
    (xdc_Char)0x65,  /* [3513] */
    (xdc_Char)0x72,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x49,  /* [3516] */
    (xdc_Char)0x64,  /* [3517] */
    (xdc_Char)0x2e,  /* [3518] */
    (xdc_Char)0x0,  /* [3519] */
    (xdc_Char)0x41,  /* [3520] */
    (xdc_Char)0x5f,  /* [3521] */
    (xdc_Char)0x62,  /* [3522] */
    (xdc_Char)0x61,  /* [3523] */
    (xdc_Char)0x64,  /* [3524] */
    (xdc_Char)0x42,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x6f,  /* [3527] */
    (xdc_Char)0x63,  /* [3528] */
    (xdc_Char)0x6b,  /* [3529] */
    (xdc_Char)0x4c,  /* [3530] */
    (xdc_Char)0x65,  /* [3531] */
    (xdc_Char)0x6e,  /* [3532] */
    (xdc_Char)0x67,  /* [3533] */
    (xdc_Char)0x74,  /* [3534] */
    (xdc_Char)0x68,  /* [3535] */
    (xdc_Char)0x3a,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x42,  /* [3538] */
    (xdc_Char)0x6c,  /* [3539] */
    (xdc_Char)0x6f,  /* [3540] */
    (xdc_Char)0x63,  /* [3541] */
    (xdc_Char)0x6b,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x6c,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x6e,  /* [3546] */
    (xdc_Char)0x67,  /* [3547] */
    (xdc_Char)0x74,  /* [3548] */
    (xdc_Char)0x68,  /* [3549] */
    (xdc_Char)0x20,  /* [3550] */
    (xdc_Char)0x74,  /* [3551] */
    (xdc_Char)0x6f,  /* [3552] */
    (xdc_Char)0x6f,  /* [3553] */
    (xdc_Char)0x20,  /* [3554] */
    (xdc_Char)0x6c,  /* [3555] */
    (xdc_Char)0x61,  /* [3556] */
    (xdc_Char)0x72,  /* [3557] */
    (xdc_Char)0x67,  /* [3558] */
    (xdc_Char)0x65,  /* [3559] */
    (xdc_Char)0x2e,  /* [3560] */
    (xdc_Char)0x20,  /* [3561] */
    (xdc_Char)0x4d,  /* [3562] */
    (xdc_Char)0x75,  /* [3563] */
    (xdc_Char)0x73,  /* [3564] */
    (xdc_Char)0x74,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x62,  /* [3567] */
    (xdc_Char)0x65,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x3c,  /* [3570] */
    (xdc_Char)0x3d,  /* [3571] */
    (xdc_Char)0x20,  /* [3572] */
    (xdc_Char)0x4c,  /* [3573] */
    (xdc_Char)0x32,  /* [3574] */
    (xdc_Char)0x20,  /* [3575] */
    (xdc_Char)0x77,  /* [3576] */
    (xdc_Char)0x61,  /* [3577] */
    (xdc_Char)0x79,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x73,  /* [3580] */
    (xdc_Char)0x69,  /* [3581] */
    (xdc_Char)0x7a,  /* [3582] */
    (xdc_Char)0x65,  /* [3583] */
    (xdc_Char)0x2e,  /* [3584] */
    (xdc_Char)0x0,  /* [3585] */
    (xdc_Char)0x41,  /* [3586] */
    (xdc_Char)0x5f,  /* [3587] */
    (xdc_Char)0x62,  /* [3588] */
    (xdc_Char)0x6c,  /* [3589] */
    (xdc_Char)0x6f,  /* [3590] */
    (xdc_Char)0x63,  /* [3591] */
    (xdc_Char)0x6b,  /* [3592] */
    (xdc_Char)0x43,  /* [3593] */
    (xdc_Char)0x72,  /* [3594] */
    (xdc_Char)0x6f,  /* [3595] */
    (xdc_Char)0x73,  /* [3596] */
    (xdc_Char)0x73,  /* [3597] */
    (xdc_Char)0x65,  /* [3598] */
    (xdc_Char)0x73,  /* [3599] */
    (xdc_Char)0x50,  /* [3600] */
    (xdc_Char)0x61,  /* [3601] */
    (xdc_Char)0x67,  /* [3602] */
    (xdc_Char)0x65,  /* [3603] */
    (xdc_Char)0x3a,  /* [3604] */
    (xdc_Char)0x20,  /* [3605] */
    (xdc_Char)0x4d,  /* [3606] */
    (xdc_Char)0x65,  /* [3607] */
    (xdc_Char)0x6d,  /* [3608] */
    (xdc_Char)0x6f,  /* [3609] */
    (xdc_Char)0x72,  /* [3610] */
    (xdc_Char)0x79,  /* [3611] */
    (xdc_Char)0x20,  /* [3612] */
    (xdc_Char)0x62,  /* [3613] */
    (xdc_Char)0x6c,  /* [3614] */
    (xdc_Char)0x6f,  /* [3615] */
    (xdc_Char)0x63,  /* [3616] */
    (xdc_Char)0x6b,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x63,  /* [3619] */
    (xdc_Char)0x72,  /* [3620] */
    (xdc_Char)0x6f,  /* [3621] */
    (xdc_Char)0x73,  /* [3622] */
    (xdc_Char)0x73,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x73,  /* [3625] */
    (xdc_Char)0x20,  /* [3626] */
    (xdc_Char)0x4c,  /* [3627] */
    (xdc_Char)0x32,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x77,  /* [3630] */
    (xdc_Char)0x61,  /* [3631] */
    (xdc_Char)0x79,  /* [3632] */
    (xdc_Char)0x20,  /* [3633] */
    (xdc_Char)0x70,  /* [3634] */
    (xdc_Char)0x61,  /* [3635] */
    (xdc_Char)0x67,  /* [3636] */
    (xdc_Char)0x65,  /* [3637] */
    (xdc_Char)0x20,  /* [3638] */
    (xdc_Char)0x62,  /* [3639] */
    (xdc_Char)0x6f,  /* [3640] */
    (xdc_Char)0x75,  /* [3641] */
    (xdc_Char)0x6e,  /* [3642] */
    (xdc_Char)0x64,  /* [3643] */
    (xdc_Char)0x61,  /* [3644] */
    (xdc_Char)0x72,  /* [3645] */
    (xdc_Char)0x79,  /* [3646] */
    (xdc_Char)0x2e,  /* [3647] */
    (xdc_Char)0x0,  /* [3648] */
    (xdc_Char)0x41,  /* [3649] */
    (xdc_Char)0x5f,  /* [3650] */
    (xdc_Char)0x75,  /* [3651] */
    (xdc_Char)0x6e,  /* [3652] */
    (xdc_Char)0x6b,  /* [3653] */
    (xdc_Char)0x6e,  /* [3654] */
    (xdc_Char)0x6f,  /* [3655] */
    (xdc_Char)0x77,  /* [3656] */
    (xdc_Char)0x6e,  /* [3657] */
    (xdc_Char)0x44,  /* [3658] */
    (xdc_Char)0x65,  /* [3659] */
    (xdc_Char)0x73,  /* [3660] */
    (xdc_Char)0x63,  /* [3661] */
    (xdc_Char)0x54,  /* [3662] */
    (xdc_Char)0x79,  /* [3663] */
    (xdc_Char)0x70,  /* [3664] */
    (xdc_Char)0x65,  /* [3665] */
    (xdc_Char)0x3a,  /* [3666] */
    (xdc_Char)0x20,  /* [3667] */
    (xdc_Char)0x44,  /* [3668] */
    (xdc_Char)0x65,  /* [3669] */
    (xdc_Char)0x73,  /* [3670] */
    (xdc_Char)0x63,  /* [3671] */
    (xdc_Char)0x72,  /* [3672] */
    (xdc_Char)0x69,  /* [3673] */
    (xdc_Char)0x70,  /* [3674] */
    (xdc_Char)0x74,  /* [3675] */
    (xdc_Char)0x6f,  /* [3676] */
    (xdc_Char)0x72,  /* [3677] */
    (xdc_Char)0x20,  /* [3678] */
    (xdc_Char)0x74,  /* [3679] */
    (xdc_Char)0x79,  /* [3680] */
    (xdc_Char)0x70,  /* [3681] */
    (xdc_Char)0x65,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x69,  /* [3684] */
    (xdc_Char)0x73,  /* [3685] */
    (xdc_Char)0x20,  /* [3686] */
    (xdc_Char)0x6e,  /* [3687] */
    (xdc_Char)0x6f,  /* [3688] */
    (xdc_Char)0x74,  /* [3689] */
    (xdc_Char)0x20,  /* [3690] */
    (xdc_Char)0x72,  /* [3691] */
    (xdc_Char)0x65,  /* [3692] */
    (xdc_Char)0x63,  /* [3693] */
    (xdc_Char)0x6f,  /* [3694] */
    (xdc_Char)0x67,  /* [3695] */
    (xdc_Char)0x6e,  /* [3696] */
    (xdc_Char)0x69,  /* [3697] */
    (xdc_Char)0x7a,  /* [3698] */
    (xdc_Char)0x65,  /* [3699] */
    (xdc_Char)0x64,  /* [3700] */
    (xdc_Char)0x0,  /* [3701] */
    (xdc_Char)0x41,  /* [3702] */
    (xdc_Char)0x5f,  /* [3703] */
    (xdc_Char)0x64,  /* [3704] */
    (xdc_Char)0x69,  /* [3705] */
    (xdc_Char)0x73,  /* [3706] */
    (xdc_Char)0x61,  /* [3707] */
    (xdc_Char)0x62,  /* [3708] */
    (xdc_Char)0x6c,  /* [3709] */
    (xdc_Char)0x65,  /* [3710] */
    (xdc_Char)0x55,  /* [3711] */
    (xdc_Char)0x6e,  /* [3712] */
    (xdc_Char)0x73,  /* [3713] */
    (xdc_Char)0x75,  /* [3714] */
    (xdc_Char)0x70,  /* [3715] */
    (xdc_Char)0x70,  /* [3716] */
    (xdc_Char)0x6f,  /* [3717] */
    (xdc_Char)0x72,  /* [3718] */
    (xdc_Char)0x74,  /* [3719] */
    (xdc_Char)0x65,  /* [3720] */
    (xdc_Char)0x64,  /* [3721] */
    (xdc_Char)0x3a,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x4d,  /* [3724] */
    (xdc_Char)0x4d,  /* [3725] */
    (xdc_Char)0x55,  /* [3726] */
    (xdc_Char)0x20,  /* [3727] */
    (xdc_Char)0x64,  /* [3728] */
    (xdc_Char)0x69,  /* [3729] */
    (xdc_Char)0x73,  /* [3730] */
    (xdc_Char)0x61,  /* [3731] */
    (xdc_Char)0x62,  /* [3732] */
    (xdc_Char)0x6c,  /* [3733] */
    (xdc_Char)0x65,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x73,  /* [3737] */
    (xdc_Char)0x20,  /* [3738] */
    (xdc_Char)0x6e,  /* [3739] */
    (xdc_Char)0x6f,  /* [3740] */
    (xdc_Char)0x74,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x73,  /* [3743] */
    (xdc_Char)0x75,  /* [3744] */
    (xdc_Char)0x70,  /* [3745] */
    (xdc_Char)0x70,  /* [3746] */
    (xdc_Char)0x6f,  /* [3747] */
    (xdc_Char)0x72,  /* [3748] */
    (xdc_Char)0x74,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x64,  /* [3751] */
    (xdc_Char)0x20,  /* [3752] */
    (xdc_Char)0x69,  /* [3753] */
    (xdc_Char)0x6e,  /* [3754] */
    (xdc_Char)0x20,  /* [3755] */
    (xdc_Char)0x53,  /* [3756] */
    (xdc_Char)0x4d,  /* [3757] */
    (xdc_Char)0x50,  /* [3758] */
    (xdc_Char)0x20,  /* [3759] */
    (xdc_Char)0x6d,  /* [3760] */
    (xdc_Char)0x6f,  /* [3761] */
    (xdc_Char)0x64,  /* [3762] */
    (xdc_Char)0x65,  /* [3763] */
    (xdc_Char)0x2e,  /* [3764] */
    (xdc_Char)0x0,  /* [3765] */
    (xdc_Char)0x61,  /* [3766] */
    (xdc_Char)0x73,  /* [3767] */
    (xdc_Char)0x73,  /* [3768] */
    (xdc_Char)0x65,  /* [3769] */
    (xdc_Char)0x72,  /* [3770] */
    (xdc_Char)0x74,  /* [3771] */
    (xdc_Char)0x69,  /* [3772] */
    (xdc_Char)0x6f,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x66,  /* [3776] */
    (xdc_Char)0x61,  /* [3777] */
    (xdc_Char)0x69,  /* [3778] */
    (xdc_Char)0x6c,  /* [3779] */
    (xdc_Char)0x75,  /* [3780] */
    (xdc_Char)0x72,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x25,  /* [3783] */
    (xdc_Char)0x73,  /* [3784] */
    (xdc_Char)0x25,  /* [3785] */
    (xdc_Char)0x73,  /* [3786] */
    (xdc_Char)0x0,  /* [3787] */
    (xdc_Char)0x25,  /* [3788] */
    (xdc_Char)0x24,  /* [3789] */
    (xdc_Char)0x53,  /* [3790] */
    (xdc_Char)0x0,  /* [3791] */
    (xdc_Char)0x6f,  /* [3792] */
    (xdc_Char)0x75,  /* [3793] */
    (xdc_Char)0x74,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x6f,  /* [3796] */
    (xdc_Char)0x66,  /* [3797] */
    (xdc_Char)0x20,  /* [3798] */
    (xdc_Char)0x6d,  /* [3799] */
    (xdc_Char)0x65,  /* [3800] */
    (xdc_Char)0x6d,  /* [3801] */
    (xdc_Char)0x6f,  /* [3802] */
    (xdc_Char)0x72,  /* [3803] */
    (xdc_Char)0x79,  /* [3804] */
    (xdc_Char)0x3a,  /* [3805] */
    (xdc_Char)0x20,  /* [3806] */
    (xdc_Char)0x68,  /* [3807] */
    (xdc_Char)0x65,  /* [3808] */
    (xdc_Char)0x61,  /* [3809] */
    (xdc_Char)0x70,  /* [3810] */
    (xdc_Char)0x3d,  /* [3811] */
    (xdc_Char)0x30,  /* [3812] */
    (xdc_Char)0x78,  /* [3813] */
    (xdc_Char)0x25,  /* [3814] */
    (xdc_Char)0x78,  /* [3815] */
    (xdc_Char)0x2c,  /* [3816] */
    (xdc_Char)0x20,  /* [3817] */
    (xdc_Char)0x73,  /* [3818] */
    (xdc_Char)0x69,  /* [3819] */
    (xdc_Char)0x7a,  /* [3820] */
    (xdc_Char)0x65,  /* [3821] */
    (xdc_Char)0x3d,  /* [3822] */
    (xdc_Char)0x25,  /* [3823] */
    (xdc_Char)0x75,  /* [3824] */
    (xdc_Char)0x0,  /* [3825] */
    (xdc_Char)0x25,  /* [3826] */
    (xdc_Char)0x73,  /* [3827] */
    (xdc_Char)0x20,  /* [3828] */
    (xdc_Char)0x30,  /* [3829] */
    (xdc_Char)0x78,  /* [3830] */
    (xdc_Char)0x25,  /* [3831] */
    (xdc_Char)0x78,  /* [3832] */
    (xdc_Char)0x0,  /* [3833] */
    (xdc_Char)0x45,  /* [3834] */
    (xdc_Char)0x5f,  /* [3835] */
    (xdc_Char)0x62,  /* [3836] */
    (xdc_Char)0x61,  /* [3837] */
    (xdc_Char)0x64,  /* [3838] */
    (xdc_Char)0x4c,  /* [3839] */
    (xdc_Char)0x65,  /* [3840] */
    (xdc_Char)0x76,  /* [3841] */
    (xdc_Char)0x65,  /* [3842] */
    (xdc_Char)0x6c,  /* [3843] */
    (xdc_Char)0x3a,  /* [3844] */
    (xdc_Char)0x20,  /* [3845] */
    (xdc_Char)0x42,  /* [3846] */
    (xdc_Char)0x61,  /* [3847] */
    (xdc_Char)0x64,  /* [3848] */
    (xdc_Char)0x20,  /* [3849] */
    (xdc_Char)0x66,  /* [3850] */
    (xdc_Char)0x69,  /* [3851] */
    (xdc_Char)0x6c,  /* [3852] */
    (xdc_Char)0x74,  /* [3853] */
    (xdc_Char)0x65,  /* [3854] */
    (xdc_Char)0x72,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x6c,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x76,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x6c,  /* [3861] */
    (xdc_Char)0x20,  /* [3862] */
    (xdc_Char)0x76,  /* [3863] */
    (xdc_Char)0x61,  /* [3864] */
    (xdc_Char)0x6c,  /* [3865] */
    (xdc_Char)0x75,  /* [3866] */
    (xdc_Char)0x65,  /* [3867] */
    (xdc_Char)0x3a,  /* [3868] */
    (xdc_Char)0x20,  /* [3869] */
    (xdc_Char)0x25,  /* [3870] */
    (xdc_Char)0x64,  /* [3871] */
    (xdc_Char)0x0,  /* [3872] */
    (xdc_Char)0x66,  /* [3873] */
    (xdc_Char)0x72,  /* [3874] */
    (xdc_Char)0x65,  /* [3875] */
    (xdc_Char)0x65,  /* [3876] */
    (xdc_Char)0x28,  /* [3877] */
    (xdc_Char)0x29,  /* [3878] */
    (xdc_Char)0x20,  /* [3879] */
    (xdc_Char)0x69,  /* [3880] */
    (xdc_Char)0x6e,  /* [3881] */
    (xdc_Char)0x76,  /* [3882] */
    (xdc_Char)0x61,  /* [3883] */
    (xdc_Char)0x6c,  /* [3884] */
    (xdc_Char)0x69,  /* [3885] */
    (xdc_Char)0x64,  /* [3886] */
    (xdc_Char)0x20,  /* [3887] */
    (xdc_Char)0x69,  /* [3888] */
    (xdc_Char)0x6e,  /* [3889] */
    (xdc_Char)0x20,  /* [3890] */
    (xdc_Char)0x67,  /* [3891] */
    (xdc_Char)0x72,  /* [3892] */
    (xdc_Char)0x6f,  /* [3893] */
    (xdc_Char)0x77,  /* [3894] */
    (xdc_Char)0x74,  /* [3895] */
    (xdc_Char)0x68,  /* [3896] */
    (xdc_Char)0x2d,  /* [3897] */
    (xdc_Char)0x6f,  /* [3898] */
    (xdc_Char)0x6e,  /* [3899] */
    (xdc_Char)0x6c,  /* [3900] */
    (xdc_Char)0x79,  /* [3901] */
    (xdc_Char)0x20,  /* [3902] */
    (xdc_Char)0x48,  /* [3903] */
    (xdc_Char)0x65,  /* [3904] */
    (xdc_Char)0x61,  /* [3905] */
    (xdc_Char)0x70,  /* [3906] */
    (xdc_Char)0x4d,  /* [3907] */
    (xdc_Char)0x69,  /* [3908] */
    (xdc_Char)0x6e,  /* [3909] */
    (xdc_Char)0x0,  /* [3910] */
    (xdc_Char)0x54,  /* [3911] */
    (xdc_Char)0x68,  /* [3912] */
    (xdc_Char)0x65,  /* [3913] */
    (xdc_Char)0x20,  /* [3914] */
    (xdc_Char)0x52,  /* [3915] */
    (xdc_Char)0x54,  /* [3916] */
    (xdc_Char)0x53,  /* [3917] */
    (xdc_Char)0x20,  /* [3918] */
    (xdc_Char)0x68,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x61,  /* [3921] */
    (xdc_Char)0x70,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x69,  /* [3924] */
    (xdc_Char)0x73,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x75,  /* [3927] */
    (xdc_Char)0x73,  /* [3928] */
    (xdc_Char)0x65,  /* [3929] */
    (xdc_Char)0x64,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x75,  /* [3932] */
    (xdc_Char)0x70,  /* [3933] */
    (xdc_Char)0x2e,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x45,  /* [3936] */
    (xdc_Char)0x78,  /* [3937] */
    (xdc_Char)0x61,  /* [3938] */
    (xdc_Char)0x6d,  /* [3939] */
    (xdc_Char)0x69,  /* [3940] */
    (xdc_Char)0x6e,  /* [3941] */
    (xdc_Char)0x65,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x50,  /* [3944] */
    (xdc_Char)0x72,  /* [3945] */
    (xdc_Char)0x6f,  /* [3946] */
    (xdc_Char)0x67,  /* [3947] */
    (xdc_Char)0x72,  /* [3948] */
    (xdc_Char)0x61,  /* [3949] */
    (xdc_Char)0x6d,  /* [3950] */
    (xdc_Char)0x2e,  /* [3951] */
    (xdc_Char)0x68,  /* [3952] */
    (xdc_Char)0x65,  /* [3953] */
    (xdc_Char)0x61,  /* [3954] */
    (xdc_Char)0x70,  /* [3955] */
    (xdc_Char)0x2e,  /* [3956] */
    (xdc_Char)0x0,  /* [3957] */
    (xdc_Char)0x45,  /* [3958] */
    (xdc_Char)0x5f,  /* [3959] */
    (xdc_Char)0x62,  /* [3960] */
    (xdc_Char)0x61,  /* [3961] */
    (xdc_Char)0x64,  /* [3962] */
    (xdc_Char)0x43,  /* [3963] */
    (xdc_Char)0x6f,  /* [3964] */
    (xdc_Char)0x6d,  /* [3965] */
    (xdc_Char)0x6d,  /* [3966] */
    (xdc_Char)0x61,  /* [3967] */
    (xdc_Char)0x6e,  /* [3968] */
    (xdc_Char)0x64,  /* [3969] */
    (xdc_Char)0x3a,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x52,  /* [3972] */
    (xdc_Char)0x65,  /* [3973] */
    (xdc_Char)0x63,  /* [3974] */
    (xdc_Char)0x65,  /* [3975] */
    (xdc_Char)0x69,  /* [3976] */
    (xdc_Char)0x76,  /* [3977] */
    (xdc_Char)0x65,  /* [3978] */
    (xdc_Char)0x64,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x69,  /* [3981] */
    (xdc_Char)0x6e,  /* [3982] */
    (xdc_Char)0x76,  /* [3983] */
    (xdc_Char)0x61,  /* [3984] */
    (xdc_Char)0x6c,  /* [3985] */
    (xdc_Char)0x69,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x20,  /* [3988] */
    (xdc_Char)0x63,  /* [3989] */
    (xdc_Char)0x6f,  /* [3990] */
    (xdc_Char)0x6d,  /* [3991] */
    (xdc_Char)0x6d,  /* [3992] */
    (xdc_Char)0x61,  /* [3993] */
    (xdc_Char)0x6e,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x2c,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x69,  /* [3998] */
    (xdc_Char)0x64,  /* [3999] */
    (xdc_Char)0x3a,  /* [4000] */
    (xdc_Char)0x20,  /* [4001] */
    (xdc_Char)0x25,  /* [4002] */
    (xdc_Char)0x64,  /* [4003] */
    (xdc_Char)0x2e,  /* [4004] */
    (xdc_Char)0x0,  /* [4005] */
    (xdc_Char)0x45,  /* [4006] */
    (xdc_Char)0x5f,  /* [4007] */
    (xdc_Char)0x73,  /* [4008] */
    (xdc_Char)0x74,  /* [4009] */
    (xdc_Char)0x61,  /* [4010] */
    (xdc_Char)0x63,  /* [4011] */
    (xdc_Char)0x6b,  /* [4012] */
    (xdc_Char)0x4f,  /* [4013] */
    (xdc_Char)0x76,  /* [4014] */
    (xdc_Char)0x65,  /* [4015] */
    (xdc_Char)0x72,  /* [4016] */
    (xdc_Char)0x66,  /* [4017] */
    (xdc_Char)0x6c,  /* [4018] */
    (xdc_Char)0x6f,  /* [4019] */
    (xdc_Char)0x77,  /* [4020] */
    (xdc_Char)0x3a,  /* [4021] */
    (xdc_Char)0x20,  /* [4022] */
    (xdc_Char)0x54,  /* [4023] */
    (xdc_Char)0x61,  /* [4024] */
    (xdc_Char)0x73,  /* [4025] */
    (xdc_Char)0x6b,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x30,  /* [4028] */
    (xdc_Char)0x78,  /* [4029] */
    (xdc_Char)0x25,  /* [4030] */
    (xdc_Char)0x78,  /* [4031] */
    (xdc_Char)0x20,  /* [4032] */
    (xdc_Char)0x73,  /* [4033] */
    (xdc_Char)0x74,  /* [4034] */
    (xdc_Char)0x61,  /* [4035] */
    (xdc_Char)0x63,  /* [4036] */
    (xdc_Char)0x6b,  /* [4037] */
    (xdc_Char)0x20,  /* [4038] */
    (xdc_Char)0x6f,  /* [4039] */
    (xdc_Char)0x76,  /* [4040] */
    (xdc_Char)0x65,  /* [4041] */
    (xdc_Char)0x72,  /* [4042] */
    (xdc_Char)0x66,  /* [4043] */
    (xdc_Char)0x6c,  /* [4044] */
    (xdc_Char)0x6f,  /* [4045] */
    (xdc_Char)0x77,  /* [4046] */
    (xdc_Char)0x2e,  /* [4047] */
    (xdc_Char)0x0,  /* [4048] */
    (xdc_Char)0x45,  /* [4049] */
    (xdc_Char)0x5f,  /* [4050] */
    (xdc_Char)0x73,  /* [4051] */
    (xdc_Char)0x70,  /* [4052] */
    (xdc_Char)0x4f,  /* [4053] */
    (xdc_Char)0x75,  /* [4054] */
    (xdc_Char)0x74,  /* [4055] */
    (xdc_Char)0x4f,  /* [4056] */
    (xdc_Char)0x66,  /* [4057] */
    (xdc_Char)0x42,  /* [4058] */
    (xdc_Char)0x6f,  /* [4059] */
    (xdc_Char)0x75,  /* [4060] */
    (xdc_Char)0x6e,  /* [4061] */
    (xdc_Char)0x64,  /* [4062] */
    (xdc_Char)0x73,  /* [4063] */
    (xdc_Char)0x3a,  /* [4064] */
    (xdc_Char)0x20,  /* [4065] */
    (xdc_Char)0x54,  /* [4066] */
    (xdc_Char)0x61,  /* [4067] */
    (xdc_Char)0x73,  /* [4068] */
    (xdc_Char)0x6b,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x30,  /* [4071] */
    (xdc_Char)0x78,  /* [4072] */
    (xdc_Char)0x25,  /* [4073] */
    (xdc_Char)0x78,  /* [4074] */
    (xdc_Char)0x20,  /* [4075] */
    (xdc_Char)0x73,  /* [4076] */
    (xdc_Char)0x74,  /* [4077] */
    (xdc_Char)0x61,  /* [4078] */
    (xdc_Char)0x63,  /* [4079] */
    (xdc_Char)0x6b,  /* [4080] */
    (xdc_Char)0x20,  /* [4081] */
    (xdc_Char)0x65,  /* [4082] */
    (xdc_Char)0x72,  /* [4083] */
    (xdc_Char)0x72,  /* [4084] */
    (xdc_Char)0x6f,  /* [4085] */
    (xdc_Char)0x72,  /* [4086] */
    (xdc_Char)0x2c,  /* [4087] */
    (xdc_Char)0x20,  /* [4088] */
    (xdc_Char)0x53,  /* [4089] */
    (xdc_Char)0x50,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x3d,  /* [4092] */
    (xdc_Char)0x20,  /* [4093] */
    (xdc_Char)0x30,  /* [4094] */
    (xdc_Char)0x78,  /* [4095] */
    (xdc_Char)0x25,  /* [4096] */
    (xdc_Char)0x78,  /* [4097] */
    (xdc_Char)0x2e,  /* [4098] */
    (xdc_Char)0x0,  /* [4099] */
    (xdc_Char)0x45,  /* [4100] */
    (xdc_Char)0x5f,  /* [4101] */
    (xdc_Char)0x64,  /* [4102] */
    (xdc_Char)0x65,  /* [4103] */
    (xdc_Char)0x6c,  /* [4104] */
    (xdc_Char)0x65,  /* [4105] */
    (xdc_Char)0x74,  /* [4106] */
    (xdc_Char)0x65,  /* [4107] */
    (xdc_Char)0x4e,  /* [4108] */
    (xdc_Char)0x6f,  /* [4109] */
    (xdc_Char)0x74,  /* [4110] */
    (xdc_Char)0x41,  /* [4111] */
    (xdc_Char)0x6c,  /* [4112] */
    (xdc_Char)0x6c,  /* [4113] */
    (xdc_Char)0x6f,  /* [4114] */
    (xdc_Char)0x77,  /* [4115] */
    (xdc_Char)0x65,  /* [4116] */
    (xdc_Char)0x64,  /* [4117] */
    (xdc_Char)0x3a,  /* [4118] */
    (xdc_Char)0x20,  /* [4119] */
    (xdc_Char)0x54,  /* [4120] */
    (xdc_Char)0x61,  /* [4121] */
    (xdc_Char)0x73,  /* [4122] */
    (xdc_Char)0x6b,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x30,  /* [4125] */
    (xdc_Char)0x78,  /* [4126] */
    (xdc_Char)0x25,  /* [4127] */
    (xdc_Char)0x78,  /* [4128] */
    (xdc_Char)0x2e,  /* [4129] */
    (xdc_Char)0x0,  /* [4130] */
    (xdc_Char)0x45,  /* [4131] */
    (xdc_Char)0x5f,  /* [4132] */
    (xdc_Char)0x6d,  /* [4133] */
    (xdc_Char)0x6f,  /* [4134] */
    (xdc_Char)0x64,  /* [4135] */
    (xdc_Char)0x75,  /* [4136] */
    (xdc_Char)0x6c,  /* [4137] */
    (xdc_Char)0x65,  /* [4138] */
    (xdc_Char)0x53,  /* [4139] */
    (xdc_Char)0x74,  /* [4140] */
    (xdc_Char)0x61,  /* [4141] */
    (xdc_Char)0x74,  /* [4142] */
    (xdc_Char)0x65,  /* [4143] */
    (xdc_Char)0x43,  /* [4144] */
    (xdc_Char)0x68,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x63,  /* [4147] */
    (xdc_Char)0x6b,  /* [4148] */
    (xdc_Char)0x46,  /* [4149] */
    (xdc_Char)0x61,  /* [4150] */
    (xdc_Char)0x69,  /* [4151] */
    (xdc_Char)0x6c,  /* [4152] */
    (xdc_Char)0x65,  /* [4153] */
    (xdc_Char)0x64,  /* [4154] */
    (xdc_Char)0x3a,  /* [4155] */
    (xdc_Char)0x20,  /* [4156] */
    (xdc_Char)0x54,  /* [4157] */
    (xdc_Char)0x61,  /* [4158] */
    (xdc_Char)0x73,  /* [4159] */
    (xdc_Char)0x6b,  /* [4160] */
    (xdc_Char)0x20,  /* [4161] */
    (xdc_Char)0x6d,  /* [4162] */
    (xdc_Char)0x6f,  /* [4163] */
    (xdc_Char)0x64,  /* [4164] */
    (xdc_Char)0x75,  /* [4165] */
    (xdc_Char)0x6c,  /* [4166] */
    (xdc_Char)0x65,  /* [4167] */
    (xdc_Char)0x20,  /* [4168] */
    (xdc_Char)0x73,  /* [4169] */
    (xdc_Char)0x74,  /* [4170] */
    (xdc_Char)0x61,  /* [4171] */
    (xdc_Char)0x74,  /* [4172] */
    (xdc_Char)0x65,  /* [4173] */
    (xdc_Char)0x20,  /* [4174] */
    (xdc_Char)0x64,  /* [4175] */
    (xdc_Char)0x61,  /* [4176] */
    (xdc_Char)0x74,  /* [4177] */
    (xdc_Char)0x61,  /* [4178] */
    (xdc_Char)0x20,  /* [4179] */
    (xdc_Char)0x69,  /* [4180] */
    (xdc_Char)0x6e,  /* [4181] */
    (xdc_Char)0x74,  /* [4182] */
    (xdc_Char)0x65,  /* [4183] */
    (xdc_Char)0x67,  /* [4184] */
    (xdc_Char)0x72,  /* [4185] */
    (xdc_Char)0x69,  /* [4186] */
    (xdc_Char)0x74,  /* [4187] */
    (xdc_Char)0x79,  /* [4188] */
    (xdc_Char)0x20,  /* [4189] */
    (xdc_Char)0x63,  /* [4190] */
    (xdc_Char)0x68,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x63,  /* [4193] */
    (xdc_Char)0x6b,  /* [4194] */
    (xdc_Char)0x20,  /* [4195] */
    (xdc_Char)0x66,  /* [4196] */
    (xdc_Char)0x61,  /* [4197] */
    (xdc_Char)0x69,  /* [4198] */
    (xdc_Char)0x6c,  /* [4199] */
    (xdc_Char)0x65,  /* [4200] */
    (xdc_Char)0x64,  /* [4201] */
    (xdc_Char)0x2e,  /* [4202] */
    (xdc_Char)0x0,  /* [4203] */
    (xdc_Char)0x45,  /* [4204] */
    (xdc_Char)0x5f,  /* [4205] */
    (xdc_Char)0x6f,  /* [4206] */
    (xdc_Char)0x62,  /* [4207] */
    (xdc_Char)0x6a,  /* [4208] */
    (xdc_Char)0x65,  /* [4209] */
    (xdc_Char)0x63,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x43,  /* [4212] */
    (xdc_Char)0x68,  /* [4213] */
    (xdc_Char)0x65,  /* [4214] */
    (xdc_Char)0x63,  /* [4215] */
    (xdc_Char)0x6b,  /* [4216] */
    (xdc_Char)0x46,  /* [4217] */
    (xdc_Char)0x61,  /* [4218] */
    (xdc_Char)0x69,  /* [4219] */
    (xdc_Char)0x6c,  /* [4220] */
    (xdc_Char)0x65,  /* [4221] */
    (xdc_Char)0x64,  /* [4222] */
    (xdc_Char)0x3a,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x54,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x73,  /* [4227] */
    (xdc_Char)0x6b,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x30,  /* [4230] */
    (xdc_Char)0x78,  /* [4231] */
    (xdc_Char)0x25,  /* [4232] */
    (xdc_Char)0x78,  /* [4233] */
    (xdc_Char)0x20,  /* [4234] */
    (xdc_Char)0x6f,  /* [4235] */
    (xdc_Char)0x62,  /* [4236] */
    (xdc_Char)0x6a,  /* [4237] */
    (xdc_Char)0x65,  /* [4238] */
    (xdc_Char)0x63,  /* [4239] */
    (xdc_Char)0x74,  /* [4240] */
    (xdc_Char)0x20,  /* [4241] */
    (xdc_Char)0x64,  /* [4242] */
    (xdc_Char)0x61,  /* [4243] */
    (xdc_Char)0x74,  /* [4244] */
    (xdc_Char)0x61,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x69,  /* [4247] */
    (xdc_Char)0x6e,  /* [4248] */
    (xdc_Char)0x74,  /* [4249] */
    (xdc_Char)0x65,  /* [4250] */
    (xdc_Char)0x67,  /* [4251] */
    (xdc_Char)0x72,  /* [4252] */
    (xdc_Char)0x69,  /* [4253] */
    (xdc_Char)0x74,  /* [4254] */
    (xdc_Char)0x79,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x63,  /* [4257] */
    (xdc_Char)0x68,  /* [4258] */
    (xdc_Char)0x65,  /* [4259] */
    (xdc_Char)0x63,  /* [4260] */
    (xdc_Char)0x6b,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x66,  /* [4263] */
    (xdc_Char)0x61,  /* [4264] */
    (xdc_Char)0x69,  /* [4265] */
    (xdc_Char)0x6c,  /* [4266] */
    (xdc_Char)0x65,  /* [4267] */
    (xdc_Char)0x64,  /* [4268] */
    (xdc_Char)0x2e,  /* [4269] */
    (xdc_Char)0x0,  /* [4270] */
    (xdc_Char)0x72,  /* [4271] */
    (xdc_Char)0x65,  /* [4272] */
    (xdc_Char)0x71,  /* [4273] */
    (xdc_Char)0x75,  /* [4274] */
    (xdc_Char)0x65,  /* [4275] */
    (xdc_Char)0x73,  /* [4276] */
    (xdc_Char)0x74,  /* [4277] */
    (xdc_Char)0x65,  /* [4278] */
    (xdc_Char)0x64,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x73,  /* [4281] */
    (xdc_Char)0x69,  /* [4282] */
    (xdc_Char)0x7a,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x20,  /* [4285] */
    (xdc_Char)0x69,  /* [4286] */
    (xdc_Char)0x73,  /* [4287] */
    (xdc_Char)0x20,  /* [4288] */
    (xdc_Char)0x74,  /* [4289] */
    (xdc_Char)0x6f,  /* [4290] */
    (xdc_Char)0x6f,  /* [4291] */
    (xdc_Char)0x20,  /* [4292] */
    (xdc_Char)0x62,  /* [4293] */
    (xdc_Char)0x69,  /* [4294] */
    (xdc_Char)0x67,  /* [4295] */
    (xdc_Char)0x3a,  /* [4296] */
    (xdc_Char)0x20,  /* [4297] */
    (xdc_Char)0x68,  /* [4298] */
    (xdc_Char)0x61,  /* [4299] */
    (xdc_Char)0x6e,  /* [4300] */
    (xdc_Char)0x64,  /* [4301] */
    (xdc_Char)0x6c,  /* [4302] */
    (xdc_Char)0x65,  /* [4303] */
    (xdc_Char)0x3d,  /* [4304] */
    (xdc_Char)0x30,  /* [4305] */
    (xdc_Char)0x78,  /* [4306] */
    (xdc_Char)0x25,  /* [4307] */
    (xdc_Char)0x78,  /* [4308] */
    (xdc_Char)0x2c,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x73,  /* [4311] */
    (xdc_Char)0x69,  /* [4312] */
    (xdc_Char)0x7a,  /* [4313] */
    (xdc_Char)0x65,  /* [4314] */
    (xdc_Char)0x3d,  /* [4315] */
    (xdc_Char)0x25,  /* [4316] */
    (xdc_Char)0x75,  /* [4317] */
    (xdc_Char)0x0,  /* [4318] */
    (xdc_Char)0x6f,  /* [4319] */
    (xdc_Char)0x75,  /* [4320] */
    (xdc_Char)0x74,  /* [4321] */
    (xdc_Char)0x20,  /* [4322] */
    (xdc_Char)0x6f,  /* [4323] */
    (xdc_Char)0x66,  /* [4324] */
    (xdc_Char)0x20,  /* [4325] */
    (xdc_Char)0x6d,  /* [4326] */
    (xdc_Char)0x65,  /* [4327] */
    (xdc_Char)0x6d,  /* [4328] */
    (xdc_Char)0x6f,  /* [4329] */
    (xdc_Char)0x72,  /* [4330] */
    (xdc_Char)0x79,  /* [4331] */
    (xdc_Char)0x3a,  /* [4332] */
    (xdc_Char)0x20,  /* [4333] */
    (xdc_Char)0x68,  /* [4334] */
    (xdc_Char)0x61,  /* [4335] */
    (xdc_Char)0x6e,  /* [4336] */
    (xdc_Char)0x64,  /* [4337] */
    (xdc_Char)0x6c,  /* [4338] */
    (xdc_Char)0x65,  /* [4339] */
    (xdc_Char)0x3d,  /* [4340] */
    (xdc_Char)0x30,  /* [4341] */
    (xdc_Char)0x78,  /* [4342] */
    (xdc_Char)0x25,  /* [4343] */
    (xdc_Char)0x78,  /* [4344] */
    (xdc_Char)0x2c,  /* [4345] */
    (xdc_Char)0x20,  /* [4346] */
    (xdc_Char)0x73,  /* [4347] */
    (xdc_Char)0x69,  /* [4348] */
    (xdc_Char)0x7a,  /* [4349] */
    (xdc_Char)0x65,  /* [4350] */
    (xdc_Char)0x3d,  /* [4351] */
    (xdc_Char)0x25,  /* [4352] */
    (xdc_Char)0x75,  /* [4353] */
    (xdc_Char)0x0,  /* [4354] */
    (xdc_Char)0x45,  /* [4355] */
    (xdc_Char)0x5f,  /* [4356] */
    (xdc_Char)0x61,  /* [4357] */
    (xdc_Char)0x6c,  /* [4358] */
    (xdc_Char)0x72,  /* [4359] */
    (xdc_Char)0x65,  /* [4360] */
    (xdc_Char)0x61,  /* [4361] */
    (xdc_Char)0x64,  /* [4362] */
    (xdc_Char)0x79,  /* [4363] */
    (xdc_Char)0x44,  /* [4364] */
    (xdc_Char)0x65,  /* [4365] */
    (xdc_Char)0x66,  /* [4366] */
    (xdc_Char)0x69,  /* [4367] */
    (xdc_Char)0x6e,  /* [4368] */
    (xdc_Char)0x65,  /* [4369] */
    (xdc_Char)0x64,  /* [4370] */
    (xdc_Char)0x3a,  /* [4371] */
    (xdc_Char)0x20,  /* [4372] */
    (xdc_Char)0x48,  /* [4373] */
    (xdc_Char)0x77,  /* [4374] */
    (xdc_Char)0x69,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x61,  /* [4377] */
    (xdc_Char)0x6c,  /* [4378] */
    (xdc_Char)0x72,  /* [4379] */
    (xdc_Char)0x65,  /* [4380] */
    (xdc_Char)0x61,  /* [4381] */
    (xdc_Char)0x64,  /* [4382] */
    (xdc_Char)0x79,  /* [4383] */
    (xdc_Char)0x20,  /* [4384] */
    (xdc_Char)0x64,  /* [4385] */
    (xdc_Char)0x65,  /* [4386] */
    (xdc_Char)0x66,  /* [4387] */
    (xdc_Char)0x69,  /* [4388] */
    (xdc_Char)0x6e,  /* [4389] */
    (xdc_Char)0x65,  /* [4390] */
    (xdc_Char)0x64,  /* [4391] */
    (xdc_Char)0x3a,  /* [4392] */
    (xdc_Char)0x20,  /* [4393] */
    (xdc_Char)0x69,  /* [4394] */
    (xdc_Char)0x6e,  /* [4395] */
    (xdc_Char)0x74,  /* [4396] */
    (xdc_Char)0x72,  /* [4397] */
    (xdc_Char)0x23,  /* [4398] */
    (xdc_Char)0x20,  /* [4399] */
    (xdc_Char)0x25,  /* [4400] */
    (xdc_Char)0x64,  /* [4401] */
    (xdc_Char)0x0,  /* [4402] */
    (xdc_Char)0x45,  /* [4403] */
    (xdc_Char)0x5f,  /* [4404] */
    (xdc_Char)0x62,  /* [4405] */
    (xdc_Char)0x61,  /* [4406] */
    (xdc_Char)0x64,  /* [4407] */
    (xdc_Char)0x49,  /* [4408] */
    (xdc_Char)0x6e,  /* [4409] */
    (xdc_Char)0x74,  /* [4410] */
    (xdc_Char)0x4e,  /* [4411] */
    (xdc_Char)0x75,  /* [4412] */
    (xdc_Char)0x6d,  /* [4413] */
    (xdc_Char)0x2c,  /* [4414] */
    (xdc_Char)0x20,  /* [4415] */
    (xdc_Char)0x69,  /* [4416] */
    (xdc_Char)0x6e,  /* [4417] */
    (xdc_Char)0x74,  /* [4418] */
    (xdc_Char)0x6e,  /* [4419] */
    (xdc_Char)0x75,  /* [4420] */
    (xdc_Char)0x6d,  /* [4421] */
    (xdc_Char)0x3a,  /* [4422] */
    (xdc_Char)0x20,  /* [4423] */
    (xdc_Char)0x25,  /* [4424] */
    (xdc_Char)0x64,  /* [4425] */
    (xdc_Char)0x20,  /* [4426] */
    (xdc_Char)0x69,  /* [4427] */
    (xdc_Char)0x73,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x6f,  /* [4430] */
    (xdc_Char)0x75,  /* [4431] */
    (xdc_Char)0x74,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x6f,  /* [4434] */
    (xdc_Char)0x66,  /* [4435] */
    (xdc_Char)0x20,  /* [4436] */
    (xdc_Char)0x72,  /* [4437] */
    (xdc_Char)0x61,  /* [4438] */
    (xdc_Char)0x6e,  /* [4439] */
    (xdc_Char)0x67,  /* [4440] */
    (xdc_Char)0x65,  /* [4441] */
    (xdc_Char)0x0,  /* [4442] */
    (xdc_Char)0x45,  /* [4443] */
    (xdc_Char)0x5f,  /* [4444] */
    (xdc_Char)0x75,  /* [4445] */
    (xdc_Char)0x6e,  /* [4446] */
    (xdc_Char)0x64,  /* [4447] */
    (xdc_Char)0x65,  /* [4448] */
    (xdc_Char)0x66,  /* [4449] */
    (xdc_Char)0x69,  /* [4450] */
    (xdc_Char)0x6e,  /* [4451] */
    (xdc_Char)0x65,  /* [4452] */
    (xdc_Char)0x64,  /* [4453] */
    (xdc_Char)0x3a,  /* [4454] */
    (xdc_Char)0x20,  /* [4455] */
    (xdc_Char)0x48,  /* [4456] */
    (xdc_Char)0x77,  /* [4457] */
    (xdc_Char)0x69,  /* [4458] */
    (xdc_Char)0x20,  /* [4459] */
    (xdc_Char)0x75,  /* [4460] */
    (xdc_Char)0x6e,  /* [4461] */
    (xdc_Char)0x64,  /* [4462] */
    (xdc_Char)0x65,  /* [4463] */
    (xdc_Char)0x66,  /* [4464] */
    (xdc_Char)0x69,  /* [4465] */
    (xdc_Char)0x6e,  /* [4466] */
    (xdc_Char)0x65,  /* [4467] */
    (xdc_Char)0x64,  /* [4468] */
    (xdc_Char)0x2c,  /* [4469] */
    (xdc_Char)0x20,  /* [4470] */
    (xdc_Char)0x69,  /* [4471] */
    (xdc_Char)0x6e,  /* [4472] */
    (xdc_Char)0x74,  /* [4473] */
    (xdc_Char)0x6e,  /* [4474] */
    (xdc_Char)0x75,  /* [4475] */
    (xdc_Char)0x6d,  /* [4476] */
    (xdc_Char)0x3a,  /* [4477] */
    (xdc_Char)0x20,  /* [4478] */
    (xdc_Char)0x25,  /* [4479] */
    (xdc_Char)0x64,  /* [4480] */
    (xdc_Char)0x0,  /* [4481] */
    (xdc_Char)0x45,  /* [4482] */
    (xdc_Char)0x5f,  /* [4483] */
    (xdc_Char)0x75,  /* [4484] */
    (xdc_Char)0x6e,  /* [4485] */
    (xdc_Char)0x73,  /* [4486] */
    (xdc_Char)0x75,  /* [4487] */
    (xdc_Char)0x70,  /* [4488] */
    (xdc_Char)0x70,  /* [4489] */
    (xdc_Char)0x6f,  /* [4490] */
    (xdc_Char)0x72,  /* [4491] */
    (xdc_Char)0x74,  /* [4492] */
    (xdc_Char)0x65,  /* [4493] */
    (xdc_Char)0x64,  /* [4494] */
    (xdc_Char)0x4d,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x73,  /* [4497] */
    (xdc_Char)0x6b,  /* [4498] */
    (xdc_Char)0x69,  /* [4499] */
    (xdc_Char)0x6e,  /* [4500] */
    (xdc_Char)0x67,  /* [4501] */
    (xdc_Char)0x4f,  /* [4502] */
    (xdc_Char)0x70,  /* [4503] */
    (xdc_Char)0x74,  /* [4504] */
    (xdc_Char)0x69,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x6e,  /* [4507] */
    (xdc_Char)0x3a,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x55,  /* [4510] */
    (xdc_Char)0x6e,  /* [4511] */
    (xdc_Char)0x73,  /* [4512] */
    (xdc_Char)0x75,  /* [4513] */
    (xdc_Char)0x70,  /* [4514] */
    (xdc_Char)0x70,  /* [4515] */
    (xdc_Char)0x6f,  /* [4516] */
    (xdc_Char)0x72,  /* [4517] */
    (xdc_Char)0x74,  /* [4518] */
    (xdc_Char)0x65,  /* [4519] */
    (xdc_Char)0x64,  /* [4520] */
    (xdc_Char)0x20,  /* [4521] */
    (xdc_Char)0x6d,  /* [4522] */
    (xdc_Char)0x61,  /* [4523] */
    (xdc_Char)0x73,  /* [4524] */
    (xdc_Char)0x6b,  /* [4525] */
    (xdc_Char)0x69,  /* [4526] */
    (xdc_Char)0x6e,  /* [4527] */
    (xdc_Char)0x67,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x6f,  /* [4530] */
    (xdc_Char)0x70,  /* [4531] */
    (xdc_Char)0x74,  /* [4532] */
    (xdc_Char)0x69,  /* [4533] */
    (xdc_Char)0x6f,  /* [4534] */
    (xdc_Char)0x6e,  /* [4535] */
    (xdc_Char)0x20,  /* [4536] */
    (xdc_Char)0x70,  /* [4537] */
    (xdc_Char)0x61,  /* [4538] */
    (xdc_Char)0x73,  /* [4539] */
    (xdc_Char)0x73,  /* [4540] */
    (xdc_Char)0x65,  /* [4541] */
    (xdc_Char)0x64,  /* [4542] */
    (xdc_Char)0x2e,  /* [4543] */
    (xdc_Char)0x0,  /* [4544] */
    (xdc_Char)0x45,  /* [4545] */
    (xdc_Char)0x5f,  /* [4546] */
    (xdc_Char)0x70,  /* [4547] */
    (xdc_Char)0x68,  /* [4548] */
    (xdc_Char)0x61,  /* [4549] */
    (xdc_Char)0x6e,  /* [4550] */
    (xdc_Char)0x74,  /* [4551] */
    (xdc_Char)0x6f,  /* [4552] */
    (xdc_Char)0x6d,  /* [4553] */
    (xdc_Char)0x49,  /* [4554] */
    (xdc_Char)0x6e,  /* [4555] */
    (xdc_Char)0x74,  /* [4556] */
    (xdc_Char)0x65,  /* [4557] */
    (xdc_Char)0x72,  /* [4558] */
    (xdc_Char)0x72,  /* [4559] */
    (xdc_Char)0x75,  /* [4560] */
    (xdc_Char)0x70,  /* [4561] */
    (xdc_Char)0x74,  /* [4562] */
    (xdc_Char)0x3a,  /* [4563] */
    (xdc_Char)0x20,  /* [4564] */
    (xdc_Char)0x41,  /* [4565] */
    (xdc_Char)0x20,  /* [4566] */
    (xdc_Char)0x70,  /* [4567] */
    (xdc_Char)0x68,  /* [4568] */
    (xdc_Char)0x61,  /* [4569] */
    (xdc_Char)0x6e,  /* [4570] */
    (xdc_Char)0x74,  /* [4571] */
    (xdc_Char)0x6f,  /* [4572] */
    (xdc_Char)0x6d,  /* [4573] */
    (xdc_Char)0x20,  /* [4574] */
    (xdc_Char)0x69,  /* [4575] */
    (xdc_Char)0x6e,  /* [4576] */
    (xdc_Char)0x74,  /* [4577] */
    (xdc_Char)0x65,  /* [4578] */
    (xdc_Char)0x72,  /* [4579] */
    (xdc_Char)0x72,  /* [4580] */
    (xdc_Char)0x75,  /* [4581] */
    (xdc_Char)0x70,  /* [4582] */
    (xdc_Char)0x74,  /* [4583] */
    (xdc_Char)0x20,  /* [4584] */
    (xdc_Char)0x68,  /* [4585] */
    (xdc_Char)0x61,  /* [4586] */
    (xdc_Char)0x73,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x6f,  /* [4589] */
    (xdc_Char)0x63,  /* [4590] */
    (xdc_Char)0x63,  /* [4591] */
    (xdc_Char)0x75,  /* [4592] */
    (xdc_Char)0x72,  /* [4593] */
    (xdc_Char)0x72,  /* [4594] */
    (xdc_Char)0x65,  /* [4595] */
    (xdc_Char)0x64,  /* [4596] */
    (xdc_Char)0x2e,  /* [4597] */
    (xdc_Char)0x0,  /* [4598] */
    (xdc_Char)0x45,  /* [4599] */
    (xdc_Char)0x5f,  /* [4600] */
    (xdc_Char)0x73,  /* [4601] */
    (xdc_Char)0x77,  /* [4602] */
    (xdc_Char)0x69,  /* [4603] */
    (xdc_Char)0x3a,  /* [4604] */
    (xdc_Char)0x20,  /* [4605] */
    (xdc_Char)0x70,  /* [4606] */
    (xdc_Char)0x63,  /* [4607] */
    (xdc_Char)0x20,  /* [4608] */
    (xdc_Char)0x3d,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x30,  /* [4611] */
    (xdc_Char)0x78,  /* [4612] */
    (xdc_Char)0x25,  /* [4613] */
    (xdc_Char)0x30,  /* [4614] */
    (xdc_Char)0x38,  /* [4615] */
    (xdc_Char)0x78,  /* [4616] */
    (xdc_Char)0x2c,  /* [4617] */
    (xdc_Char)0x20,  /* [4618] */
    (xdc_Char)0x6c,  /* [4619] */
    (xdc_Char)0x72,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x3d,  /* [4622] */
    (xdc_Char)0x20,  /* [4623] */
    (xdc_Char)0x30,  /* [4624] */
    (xdc_Char)0x78,  /* [4625] */
    (xdc_Char)0x25,  /* [4626] */
    (xdc_Char)0x30,  /* [4627] */
    (xdc_Char)0x38,  /* [4628] */
    (xdc_Char)0x78,  /* [4629] */
    (xdc_Char)0x2e,  /* [4630] */
    (xdc_Char)0x0,  /* [4631] */
    (xdc_Char)0x45,  /* [4632] */
    (xdc_Char)0x5f,  /* [4633] */
    (xdc_Char)0x70,  /* [4634] */
    (xdc_Char)0x72,  /* [4635] */
    (xdc_Char)0x65,  /* [4636] */
    (xdc_Char)0x66,  /* [4637] */
    (xdc_Char)0x65,  /* [4638] */
    (xdc_Char)0x74,  /* [4639] */
    (xdc_Char)0x63,  /* [4640] */
    (xdc_Char)0x68,  /* [4641] */
    (xdc_Char)0x41,  /* [4642] */
    (xdc_Char)0x62,  /* [4643] */
    (xdc_Char)0x6f,  /* [4644] */
    (xdc_Char)0x72,  /* [4645] */
    (xdc_Char)0x74,  /* [4646] */
    (xdc_Char)0x3a,  /* [4647] */
    (xdc_Char)0x20,  /* [4648] */
    (xdc_Char)0x70,  /* [4649] */
    (xdc_Char)0x63,  /* [4650] */
    (xdc_Char)0x20,  /* [4651] */
    (xdc_Char)0x3d,  /* [4652] */
    (xdc_Char)0x20,  /* [4653] */
    (xdc_Char)0x30,  /* [4654] */
    (xdc_Char)0x78,  /* [4655] */
    (xdc_Char)0x25,  /* [4656] */
    (xdc_Char)0x30,  /* [4657] */
    (xdc_Char)0x38,  /* [4658] */
    (xdc_Char)0x78,  /* [4659] */
    (xdc_Char)0x2c,  /* [4660] */
    (xdc_Char)0x20,  /* [4661] */
    (xdc_Char)0x6c,  /* [4662] */
    (xdc_Char)0x72,  /* [4663] */
    (xdc_Char)0x20,  /* [4664] */
    (xdc_Char)0x3d,  /* [4665] */
    (xdc_Char)0x20,  /* [4666] */
    (xdc_Char)0x30,  /* [4667] */
    (xdc_Char)0x78,  /* [4668] */
    (xdc_Char)0x25,  /* [4669] */
    (xdc_Char)0x30,  /* [4670] */
    (xdc_Char)0x38,  /* [4671] */
    (xdc_Char)0x78,  /* [4672] */
    (xdc_Char)0x2e,  /* [4673] */
    (xdc_Char)0x0,  /* [4674] */
    (xdc_Char)0x45,  /* [4675] */
    (xdc_Char)0x5f,  /* [4676] */
    (xdc_Char)0x64,  /* [4677] */
    (xdc_Char)0x61,  /* [4678] */
    (xdc_Char)0x74,  /* [4679] */
    (xdc_Char)0x61,  /* [4680] */
    (xdc_Char)0x41,  /* [4681] */
    (xdc_Char)0x62,  /* [4682] */
    (xdc_Char)0x6f,  /* [4683] */
    (xdc_Char)0x72,  /* [4684] */
    (xdc_Char)0x74,  /* [4685] */
    (xdc_Char)0x3a,  /* [4686] */
    (xdc_Char)0x20,  /* [4687] */
    (xdc_Char)0x70,  /* [4688] */
    (xdc_Char)0x63,  /* [4689] */
    (xdc_Char)0x20,  /* [4690] */
    (xdc_Char)0x3d,  /* [4691] */
    (xdc_Char)0x20,  /* [4692] */
    (xdc_Char)0x30,  /* [4693] */
    (xdc_Char)0x78,  /* [4694] */
    (xdc_Char)0x25,  /* [4695] */
    (xdc_Char)0x30,  /* [4696] */
    (xdc_Char)0x38,  /* [4697] */
    (xdc_Char)0x78,  /* [4698] */
    (xdc_Char)0x2c,  /* [4699] */
    (xdc_Char)0x20,  /* [4700] */
    (xdc_Char)0x6c,  /* [4701] */
    (xdc_Char)0x72,  /* [4702] */
    (xdc_Char)0x20,  /* [4703] */
    (xdc_Char)0x3d,  /* [4704] */
    (xdc_Char)0x20,  /* [4705] */
    (xdc_Char)0x30,  /* [4706] */
    (xdc_Char)0x78,  /* [4707] */
    (xdc_Char)0x25,  /* [4708] */
    (xdc_Char)0x30,  /* [4709] */
    (xdc_Char)0x38,  /* [4710] */
    (xdc_Char)0x78,  /* [4711] */
    (xdc_Char)0x2e,  /* [4712] */
    (xdc_Char)0x0,  /* [4713] */
    (xdc_Char)0x45,  /* [4714] */
    (xdc_Char)0x5f,  /* [4715] */
    (xdc_Char)0x75,  /* [4716] */
    (xdc_Char)0x6e,  /* [4717] */
    (xdc_Char)0x64,  /* [4718] */
    (xdc_Char)0x65,  /* [4719] */
    (xdc_Char)0x66,  /* [4720] */
    (xdc_Char)0x69,  /* [4721] */
    (xdc_Char)0x6e,  /* [4722] */
    (xdc_Char)0x65,  /* [4723] */
    (xdc_Char)0x64,  /* [4724] */
    (xdc_Char)0x49,  /* [4725] */
    (xdc_Char)0x6e,  /* [4726] */
    (xdc_Char)0x73,  /* [4727] */
    (xdc_Char)0x74,  /* [4728] */
    (xdc_Char)0x72,  /* [4729] */
    (xdc_Char)0x75,  /* [4730] */
    (xdc_Char)0x63,  /* [4731] */
    (xdc_Char)0x74,  /* [4732] */
    (xdc_Char)0x69,  /* [4733] */
    (xdc_Char)0x6f,  /* [4734] */
    (xdc_Char)0x6e,  /* [4735] */
    (xdc_Char)0x3a,  /* [4736] */
    (xdc_Char)0x20,  /* [4737] */
    (xdc_Char)0x70,  /* [4738] */
    (xdc_Char)0x63,  /* [4739] */
    (xdc_Char)0x20,  /* [4740] */
    (xdc_Char)0x3d,  /* [4741] */
    (xdc_Char)0x20,  /* [4742] */
    (xdc_Char)0x30,  /* [4743] */
    (xdc_Char)0x78,  /* [4744] */
    (xdc_Char)0x25,  /* [4745] */
    (xdc_Char)0x30,  /* [4746] */
    (xdc_Char)0x38,  /* [4747] */
    (xdc_Char)0x78,  /* [4748] */
    (xdc_Char)0x2c,  /* [4749] */
    (xdc_Char)0x20,  /* [4750] */
    (xdc_Char)0x6c,  /* [4751] */
    (xdc_Char)0x72,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x3d,  /* [4754] */
    (xdc_Char)0x20,  /* [4755] */
    (xdc_Char)0x30,  /* [4756] */
    (xdc_Char)0x78,  /* [4757] */
    (xdc_Char)0x25,  /* [4758] */
    (xdc_Char)0x30,  /* [4759] */
    (xdc_Char)0x38,  /* [4760] */
    (xdc_Char)0x78,  /* [4761] */
    (xdc_Char)0x2e,  /* [4762] */
    (xdc_Char)0x0,  /* [4763] */
    (xdc_Char)0x45,  /* [4764] */
    (xdc_Char)0x5f,  /* [4765] */
    (xdc_Char)0x70,  /* [4766] */
    (xdc_Char)0x72,  /* [4767] */
    (xdc_Char)0x69,  /* [4768] */
    (xdc_Char)0x6f,  /* [4769] */
    (xdc_Char)0x72,  /* [4770] */
    (xdc_Char)0x69,  /* [4771] */
    (xdc_Char)0x74,  /* [4772] */
    (xdc_Char)0x79,  /* [4773] */
    (xdc_Char)0x3a,  /* [4774] */
    (xdc_Char)0x20,  /* [4775] */
    (xdc_Char)0x54,  /* [4776] */
    (xdc_Char)0x68,  /* [4777] */
    (xdc_Char)0x72,  /* [4778] */
    (xdc_Char)0x65,  /* [4779] */
    (xdc_Char)0x61,  /* [4780] */
    (xdc_Char)0x64,  /* [4781] */
    (xdc_Char)0x20,  /* [4782] */
    (xdc_Char)0x70,  /* [4783] */
    (xdc_Char)0x72,  /* [4784] */
    (xdc_Char)0x69,  /* [4785] */
    (xdc_Char)0x6f,  /* [4786] */
    (xdc_Char)0x72,  /* [4787] */
    (xdc_Char)0x69,  /* [4788] */
    (xdc_Char)0x74,  /* [4789] */
    (xdc_Char)0x79,  /* [4790] */
    (xdc_Char)0x20,  /* [4791] */
    (xdc_Char)0x69,  /* [4792] */
    (xdc_Char)0x73,  /* [4793] */
    (xdc_Char)0x20,  /* [4794] */
    (xdc_Char)0x69,  /* [4795] */
    (xdc_Char)0x6e,  /* [4796] */
    (xdc_Char)0x76,  /* [4797] */
    (xdc_Char)0x61,  /* [4798] */
    (xdc_Char)0x6c,  /* [4799] */
    (xdc_Char)0x69,  /* [4800] */
    (xdc_Char)0x64,  /* [4801] */
    (xdc_Char)0x20,  /* [4802] */
    (xdc_Char)0x25,  /* [4803] */
    (xdc_Char)0x64,  /* [4804] */
    (xdc_Char)0x0,  /* [4805] */
    (xdc_Char)0x45,  /* [4806] */
    (xdc_Char)0x5f,  /* [4807] */
    (xdc_Char)0x73,  /* [4808] */
    (xdc_Char)0x74,  /* [4809] */
    (xdc_Char)0x61,  /* [4810] */
    (xdc_Char)0x63,  /* [4811] */
    (xdc_Char)0x6b,  /* [4812] */
    (xdc_Char)0x4f,  /* [4813] */
    (xdc_Char)0x76,  /* [4814] */
    (xdc_Char)0x65,  /* [4815] */
    (xdc_Char)0x72,  /* [4816] */
    (xdc_Char)0x66,  /* [4817] */
    (xdc_Char)0x6c,  /* [4818] */
    (xdc_Char)0x6f,  /* [4819] */
    (xdc_Char)0x77,  /* [4820] */
    (xdc_Char)0x3a,  /* [4821] */
    (xdc_Char)0x20,  /* [4822] */
    (xdc_Char)0x49,  /* [4823] */
    (xdc_Char)0x53,  /* [4824] */
    (xdc_Char)0x52,  /* [4825] */
    (xdc_Char)0x20,  /* [4826] */
    (xdc_Char)0x73,  /* [4827] */
    (xdc_Char)0x74,  /* [4828] */
    (xdc_Char)0x61,  /* [4829] */
    (xdc_Char)0x63,  /* [4830] */
    (xdc_Char)0x6b,  /* [4831] */
    (xdc_Char)0x20,  /* [4832] */
    (xdc_Char)0x6f,  /* [4833] */
    (xdc_Char)0x76,  /* [4834] */
    (xdc_Char)0x65,  /* [4835] */
    (xdc_Char)0x72,  /* [4836] */
    (xdc_Char)0x66,  /* [4837] */
    (xdc_Char)0x6c,  /* [4838] */
    (xdc_Char)0x6f,  /* [4839] */
    (xdc_Char)0x77,  /* [4840] */
    (xdc_Char)0x2e,  /* [4841] */
    (xdc_Char)0x0,  /* [4842] */
    (xdc_Char)0x45,  /* [4843] */
    (xdc_Char)0x5f,  /* [4844] */
    (xdc_Char)0x6d,  /* [4845] */
    (xdc_Char)0x69,  /* [4846] */
    (xdc_Char)0x73,  /* [4847] */
    (xdc_Char)0x6d,  /* [4848] */
    (xdc_Char)0x61,  /* [4849] */
    (xdc_Char)0x74,  /* [4850] */
    (xdc_Char)0x63,  /* [4851] */
    (xdc_Char)0x68,  /* [4852] */
    (xdc_Char)0x65,  /* [4853] */
    (xdc_Char)0x64,  /* [4854] */
    (xdc_Char)0x49,  /* [4855] */
    (xdc_Char)0x64,  /* [4856] */
    (xdc_Char)0x73,  /* [4857] */
    (xdc_Char)0x3a,  /* [4858] */
    (xdc_Char)0x20,  /* [4859] */
    (xdc_Char)0x43,  /* [4860] */
    (xdc_Char)0x6f,  /* [4861] */
    (xdc_Char)0x72,  /* [4862] */
    (xdc_Char)0x65,  /* [4863] */
    (xdc_Char)0x5f,  /* [4864] */
    (xdc_Char)0x49,  /* [4865] */
    (xdc_Char)0x64,  /* [4866] */
    (xdc_Char)0x3a,  /* [4867] */
    (xdc_Char)0x20,  /* [4868] */
    (xdc_Char)0x25,  /* [4869] */
    (xdc_Char)0x64,  /* [4870] */
    (xdc_Char)0x20,  /* [4871] */
    (xdc_Char)0x64,  /* [4872] */
    (xdc_Char)0x6f,  /* [4873] */
    (xdc_Char)0x65,  /* [4874] */
    (xdc_Char)0x73,  /* [4875] */
    (xdc_Char)0x20,  /* [4876] */
    (xdc_Char)0x6e,  /* [4877] */
    (xdc_Char)0x6f,  /* [4878] */
    (xdc_Char)0x74,  /* [4879] */
    (xdc_Char)0x20,  /* [4880] */
    (xdc_Char)0x6d,  /* [4881] */
    (xdc_Char)0x61,  /* [4882] */
    (xdc_Char)0x74,  /* [4883] */
    (xdc_Char)0x63,  /* [4884] */
    (xdc_Char)0x68,  /* [4885] */
    (xdc_Char)0x20,  /* [4886] */
    (xdc_Char)0x68,  /* [4887] */
    (xdc_Char)0x61,  /* [4888] */
    (xdc_Char)0x72,  /* [4889] */
    (xdc_Char)0x64,  /* [4890] */
    (xdc_Char)0x77,  /* [4891] */
    (xdc_Char)0x61,  /* [4892] */
    (xdc_Char)0x72,  /* [4893] */
    (xdc_Char)0x65,  /* [4894] */
    (xdc_Char)0x20,  /* [4895] */
    (xdc_Char)0x63,  /* [4896] */
    (xdc_Char)0x6f,  /* [4897] */
    (xdc_Char)0x72,  /* [4898] */
    (xdc_Char)0x65,  /* [4899] */
    (xdc_Char)0x20,  /* [4900] */
    (xdc_Char)0x49,  /* [4901] */
    (xdc_Char)0x64,  /* [4902] */
    (xdc_Char)0x3a,  /* [4903] */
    (xdc_Char)0x20,  /* [4904] */
    (xdc_Char)0x25,  /* [4905] */
    (xdc_Char)0x64,  /* [4906] */
    (xdc_Char)0x0,  /* [4907] */
    (xdc_Char)0x45,  /* [4908] */
    (xdc_Char)0x5f,  /* [4909] */
    (xdc_Char)0x69,  /* [4910] */
    (xdc_Char)0x6e,  /* [4911] */
    (xdc_Char)0x76,  /* [4912] */
    (xdc_Char)0x61,  /* [4913] */
    (xdc_Char)0x6c,  /* [4914] */
    (xdc_Char)0x69,  /* [4915] */
    (xdc_Char)0x64,  /* [4916] */
    (xdc_Char)0x54,  /* [4917] */
    (xdc_Char)0x69,  /* [4918] */
    (xdc_Char)0x6d,  /* [4919] */
    (xdc_Char)0x65,  /* [4920] */
    (xdc_Char)0x72,  /* [4921] */
    (xdc_Char)0x3a,  /* [4922] */
    (xdc_Char)0x20,  /* [4923] */
    (xdc_Char)0x49,  /* [4924] */
    (xdc_Char)0x6e,  /* [4925] */
    (xdc_Char)0x76,  /* [4926] */
    (xdc_Char)0x61,  /* [4927] */
    (xdc_Char)0x6c,  /* [4928] */
    (xdc_Char)0x69,  /* [4929] */
    (xdc_Char)0x64,  /* [4930] */
    (xdc_Char)0x20,  /* [4931] */
    (xdc_Char)0x54,  /* [4932] */
    (xdc_Char)0x69,  /* [4933] */
    (xdc_Char)0x6d,  /* [4934] */
    (xdc_Char)0x65,  /* [4935] */
    (xdc_Char)0x72,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x49,  /* [4938] */
    (xdc_Char)0x64,  /* [4939] */
    (xdc_Char)0x20,  /* [4940] */
    (xdc_Char)0x25,  /* [4941] */
    (xdc_Char)0x64,  /* [4942] */
    (xdc_Char)0x0,  /* [4943] */
    (xdc_Char)0x45,  /* [4944] */
    (xdc_Char)0x5f,  /* [4945] */
    (xdc_Char)0x6e,  /* [4946] */
    (xdc_Char)0x6f,  /* [4947] */
    (xdc_Char)0x74,  /* [4948] */
    (xdc_Char)0x41,  /* [4949] */
    (xdc_Char)0x76,  /* [4950] */
    (xdc_Char)0x61,  /* [4951] */
    (xdc_Char)0x69,  /* [4952] */
    (xdc_Char)0x6c,  /* [4953] */
    (xdc_Char)0x61,  /* [4954] */
    (xdc_Char)0x62,  /* [4955] */
    (xdc_Char)0x6c,  /* [4956] */
    (xdc_Char)0x65,  /* [4957] */
    (xdc_Char)0x3a,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x54,  /* [4960] */
    (xdc_Char)0x69,  /* [4961] */
    (xdc_Char)0x6d,  /* [4962] */
    (xdc_Char)0x65,  /* [4963] */
    (xdc_Char)0x72,  /* [4964] */
    (xdc_Char)0x20,  /* [4965] */
    (xdc_Char)0x6e,  /* [4966] */
    (xdc_Char)0x6f,  /* [4967] */
    (xdc_Char)0x74,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x61,  /* [4970] */
    (xdc_Char)0x76,  /* [4971] */
    (xdc_Char)0x61,  /* [4972] */
    (xdc_Char)0x69,  /* [4973] */
    (xdc_Char)0x6c,  /* [4974] */
    (xdc_Char)0x61,  /* [4975] */
    (xdc_Char)0x62,  /* [4976] */
    (xdc_Char)0x6c,  /* [4977] */
    (xdc_Char)0x65,  /* [4978] */
    (xdc_Char)0x20,  /* [4979] */
    (xdc_Char)0x25,  /* [4980] */
    (xdc_Char)0x64,  /* [4981] */
    (xdc_Char)0x0,  /* [4982] */
    (xdc_Char)0x45,  /* [4983] */
    (xdc_Char)0x5f,  /* [4984] */
    (xdc_Char)0x49,  /* [4985] */
    (xdc_Char)0x6e,  /* [4986] */
    (xdc_Char)0x76,  /* [4987] */
    (xdc_Char)0x61,  /* [4988] */
    (xdc_Char)0x6c,  /* [4989] */
    (xdc_Char)0x69,  /* [4990] */
    (xdc_Char)0x64,  /* [4991] */
    (xdc_Char)0x4d,  /* [4992] */
    (xdc_Char)0x61,  /* [4993] */
    (xdc_Char)0x73,  /* [4994] */
    (xdc_Char)0x6b,  /* [4995] */
    (xdc_Char)0x3a,  /* [4996] */
    (xdc_Char)0x20,  /* [4997] */
    (xdc_Char)0x4d,  /* [4998] */
    (xdc_Char)0x61,  /* [4999] */
    (xdc_Char)0x73,  /* [5000] */
    (xdc_Char)0x6b,  /* [5001] */
    (xdc_Char)0x20,  /* [5002] */
    (xdc_Char)0x69,  /* [5003] */
    (xdc_Char)0x6e,  /* [5004] */
    (xdc_Char)0x20,  /* [5005] */
    (xdc_Char)0x68,  /* [5006] */
    (xdc_Char)0x77,  /* [5007] */
    (xdc_Char)0x69,  /* [5008] */
    (xdc_Char)0x50,  /* [5009] */
    (xdc_Char)0x61,  /* [5010] */
    (xdc_Char)0x72,  /* [5011] */
    (xdc_Char)0x61,  /* [5012] */
    (xdc_Char)0x6d,  /* [5013] */
    (xdc_Char)0x73,  /* [5014] */
    (xdc_Char)0x20,  /* [5015] */
    (xdc_Char)0x63,  /* [5016] */
    (xdc_Char)0x61,  /* [5017] */
    (xdc_Char)0x6e,  /* [5018] */
    (xdc_Char)0x6e,  /* [5019] */
    (xdc_Char)0x6f,  /* [5020] */
    (xdc_Char)0x74,  /* [5021] */
    (xdc_Char)0x20,  /* [5022] */
    (xdc_Char)0x65,  /* [5023] */
    (xdc_Char)0x6e,  /* [5024] */
    (xdc_Char)0x61,  /* [5025] */
    (xdc_Char)0x62,  /* [5026] */
    (xdc_Char)0x6c,  /* [5027] */
    (xdc_Char)0x65,  /* [5028] */
    (xdc_Char)0x20,  /* [5029] */
    (xdc_Char)0x73,  /* [5030] */
    (xdc_Char)0x65,  /* [5031] */
    (xdc_Char)0x6c,  /* [5032] */
    (xdc_Char)0x66,  /* [5033] */
    (xdc_Char)0x0,  /* [5034] */
    (xdc_Char)0x45,  /* [5035] */
    (xdc_Char)0x5f,  /* [5036] */
    (xdc_Char)0x63,  /* [5037] */
    (xdc_Char)0x61,  /* [5038] */
    (xdc_Char)0x6e,  /* [5039] */
    (xdc_Char)0x6e,  /* [5040] */
    (xdc_Char)0x6f,  /* [5041] */
    (xdc_Char)0x74,  /* [5042] */
    (xdc_Char)0x53,  /* [5043] */
    (xdc_Char)0x75,  /* [5044] */
    (xdc_Char)0x70,  /* [5045] */
    (xdc_Char)0x70,  /* [5046] */
    (xdc_Char)0x6f,  /* [5047] */
    (xdc_Char)0x72,  /* [5048] */
    (xdc_Char)0x74,  /* [5049] */
    (xdc_Char)0x3a,  /* [5050] */
    (xdc_Char)0x20,  /* [5051] */
    (xdc_Char)0x54,  /* [5052] */
    (xdc_Char)0x69,  /* [5053] */
    (xdc_Char)0x6d,  /* [5054] */
    (xdc_Char)0x65,  /* [5055] */
    (xdc_Char)0x72,  /* [5056] */
    (xdc_Char)0x20,  /* [5057] */
    (xdc_Char)0x63,  /* [5058] */
    (xdc_Char)0x61,  /* [5059] */
    (xdc_Char)0x6e,  /* [5060] */
    (xdc_Char)0x6e,  /* [5061] */
    (xdc_Char)0x6f,  /* [5062] */
    (xdc_Char)0x74,  /* [5063] */
    (xdc_Char)0x20,  /* [5064] */
    (xdc_Char)0x73,  /* [5065] */
    (xdc_Char)0x75,  /* [5066] */
    (xdc_Char)0x70,  /* [5067] */
    (xdc_Char)0x70,  /* [5068] */
    (xdc_Char)0x6f,  /* [5069] */
    (xdc_Char)0x72,  /* [5070] */
    (xdc_Char)0x74,  /* [5071] */
    (xdc_Char)0x20,  /* [5072] */
    (xdc_Char)0x72,  /* [5073] */
    (xdc_Char)0x65,  /* [5074] */
    (xdc_Char)0x71,  /* [5075] */
    (xdc_Char)0x75,  /* [5076] */
    (xdc_Char)0x65,  /* [5077] */
    (xdc_Char)0x73,  /* [5078] */
    (xdc_Char)0x74,  /* [5079] */
    (xdc_Char)0x65,  /* [5080] */
    (xdc_Char)0x64,  /* [5081] */
    (xdc_Char)0x20,  /* [5082] */
    (xdc_Char)0x70,  /* [5083] */
    (xdc_Char)0x65,  /* [5084] */
    (xdc_Char)0x72,  /* [5085] */
    (xdc_Char)0x69,  /* [5086] */
    (xdc_Char)0x6f,  /* [5087] */
    (xdc_Char)0x64,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x25,  /* [5090] */
    (xdc_Char)0x64,  /* [5091] */
    (xdc_Char)0x0,  /* [5092] */
    (xdc_Char)0x3c,  /* [5093] */
    (xdc_Char)0x2d,  /* [5094] */
    (xdc_Char)0x2d,  /* [5095] */
    (xdc_Char)0x20,  /* [5096] */
    (xdc_Char)0x63,  /* [5097] */
    (xdc_Char)0x6f,  /* [5098] */
    (xdc_Char)0x6e,  /* [5099] */
    (xdc_Char)0x73,  /* [5100] */
    (xdc_Char)0x74,  /* [5101] */
    (xdc_Char)0x72,  /* [5102] */
    (xdc_Char)0x75,  /* [5103] */
    (xdc_Char)0x63,  /* [5104] */
    (xdc_Char)0x74,  /* [5105] */
    (xdc_Char)0x3a,  /* [5106] */
    (xdc_Char)0x20,  /* [5107] */
    (xdc_Char)0x25,  /* [5108] */
    (xdc_Char)0x70,  /* [5109] */
    (xdc_Char)0x28,  /* [5110] */
    (xdc_Char)0x27,  /* [5111] */
    (xdc_Char)0x25,  /* [5112] */
    (xdc_Char)0x73,  /* [5113] */
    (xdc_Char)0x27,  /* [5114] */
    (xdc_Char)0x29,  /* [5115] */
    (xdc_Char)0x0,  /* [5116] */
    (xdc_Char)0x3c,  /* [5117] */
    (xdc_Char)0x2d,  /* [5118] */
    (xdc_Char)0x2d,  /* [5119] */
    (xdc_Char)0x20,  /* [5120] */
    (xdc_Char)0x63,  /* [5121] */
    (xdc_Char)0x72,  /* [5122] */
    (xdc_Char)0x65,  /* [5123] */
    (xdc_Char)0x61,  /* [5124] */
    (xdc_Char)0x74,  /* [5125] */
    (xdc_Char)0x65,  /* [5126] */
    (xdc_Char)0x3a,  /* [5127] */
    (xdc_Char)0x20,  /* [5128] */
    (xdc_Char)0x25,  /* [5129] */
    (xdc_Char)0x70,  /* [5130] */
    (xdc_Char)0x28,  /* [5131] */
    (xdc_Char)0x27,  /* [5132] */
    (xdc_Char)0x25,  /* [5133] */
    (xdc_Char)0x73,  /* [5134] */
    (xdc_Char)0x27,  /* [5135] */
    (xdc_Char)0x29,  /* [5136] */
    (xdc_Char)0x0,  /* [5137] */
    (xdc_Char)0x2d,  /* [5138] */
    (xdc_Char)0x2d,  /* [5139] */
    (xdc_Char)0x3e,  /* [5140] */
    (xdc_Char)0x20,  /* [5141] */
    (xdc_Char)0x64,  /* [5142] */
    (xdc_Char)0x65,  /* [5143] */
    (xdc_Char)0x73,  /* [5144] */
    (xdc_Char)0x74,  /* [5145] */
    (xdc_Char)0x72,  /* [5146] */
    (xdc_Char)0x75,  /* [5147] */
    (xdc_Char)0x63,  /* [5148] */
    (xdc_Char)0x74,  /* [5149] */
    (xdc_Char)0x3a,  /* [5150] */
    (xdc_Char)0x20,  /* [5151] */
    (xdc_Char)0x28,  /* [5152] */
    (xdc_Char)0x25,  /* [5153] */
    (xdc_Char)0x70,  /* [5154] */
    (xdc_Char)0x29,  /* [5155] */
    (xdc_Char)0x0,  /* [5156] */
    (xdc_Char)0x2d,  /* [5157] */
    (xdc_Char)0x2d,  /* [5158] */
    (xdc_Char)0x3e,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x64,  /* [5161] */
    (xdc_Char)0x65,  /* [5162] */
    (xdc_Char)0x6c,  /* [5163] */
    (xdc_Char)0x65,  /* [5164] */
    (xdc_Char)0x74,  /* [5165] */
    (xdc_Char)0x65,  /* [5166] */
    (xdc_Char)0x3a,  /* [5167] */
    (xdc_Char)0x20,  /* [5168] */
    (xdc_Char)0x28,  /* [5169] */
    (xdc_Char)0x25,  /* [5170] */
    (xdc_Char)0x70,  /* [5171] */
    (xdc_Char)0x29,  /* [5172] */
    (xdc_Char)0x0,  /* [5173] */
    (xdc_Char)0x45,  /* [5174] */
    (xdc_Char)0x52,  /* [5175] */
    (xdc_Char)0x52,  /* [5176] */
    (xdc_Char)0x4f,  /* [5177] */
    (xdc_Char)0x52,  /* [5178] */
    (xdc_Char)0x3a,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x25,  /* [5181] */
    (xdc_Char)0x24,  /* [5182] */
    (xdc_Char)0x46,  /* [5183] */
    (xdc_Char)0x25,  /* [5184] */
    (xdc_Char)0x24,  /* [5185] */
    (xdc_Char)0x53,  /* [5186] */
    (xdc_Char)0x0,  /* [5187] */
    (xdc_Char)0x57,  /* [5188] */
    (xdc_Char)0x41,  /* [5189] */
    (xdc_Char)0x52,  /* [5190] */
    (xdc_Char)0x4e,  /* [5191] */
    (xdc_Char)0x49,  /* [5192] */
    (xdc_Char)0x4e,  /* [5193] */
    (xdc_Char)0x47,  /* [5194] */
    (xdc_Char)0x3a,  /* [5195] */
    (xdc_Char)0x20,  /* [5196] */
    (xdc_Char)0x25,  /* [5197] */
    (xdc_Char)0x24,  /* [5198] */
    (xdc_Char)0x46,  /* [5199] */
    (xdc_Char)0x25,  /* [5200] */
    (xdc_Char)0x24,  /* [5201] */
    (xdc_Char)0x53,  /* [5202] */
    (xdc_Char)0x0,  /* [5203] */
    (xdc_Char)0x25,  /* [5204] */
    (xdc_Char)0x24,  /* [5205] */
    (xdc_Char)0x46,  /* [5206] */
    (xdc_Char)0x25,  /* [5207] */
    (xdc_Char)0x24,  /* [5208] */
    (xdc_Char)0x53,  /* [5209] */
    (xdc_Char)0x0,  /* [5210] */
    (xdc_Char)0x53,  /* [5211] */
    (xdc_Char)0x74,  /* [5212] */
    (xdc_Char)0x61,  /* [5213] */
    (xdc_Char)0x72,  /* [5214] */
    (xdc_Char)0x74,  /* [5215] */
    (xdc_Char)0x3a,  /* [5216] */
    (xdc_Char)0x20,  /* [5217] */
    (xdc_Char)0x25,  /* [5218] */
    (xdc_Char)0x24,  /* [5219] */
    (xdc_Char)0x53,  /* [5220] */
    (xdc_Char)0x0,  /* [5221] */
    (xdc_Char)0x53,  /* [5222] */
    (xdc_Char)0x74,  /* [5223] */
    (xdc_Char)0x6f,  /* [5224] */
    (xdc_Char)0x70,  /* [5225] */
    (xdc_Char)0x3a,  /* [5226] */
    (xdc_Char)0x20,  /* [5227] */
    (xdc_Char)0x25,  /* [5228] */
    (xdc_Char)0x24,  /* [5229] */
    (xdc_Char)0x53,  /* [5230] */
    (xdc_Char)0x0,  /* [5231] */
    (xdc_Char)0x53,  /* [5232] */
    (xdc_Char)0x74,  /* [5233] */
    (xdc_Char)0x61,  /* [5234] */
    (xdc_Char)0x72,  /* [5235] */
    (xdc_Char)0x74,  /* [5236] */
    (xdc_Char)0x49,  /* [5237] */
    (xdc_Char)0x6e,  /* [5238] */
    (xdc_Char)0x73,  /* [5239] */
    (xdc_Char)0x74,  /* [5240] */
    (xdc_Char)0x61,  /* [5241] */
    (xdc_Char)0x6e,  /* [5242] */
    (xdc_Char)0x63,  /* [5243] */
    (xdc_Char)0x65,  /* [5244] */
    (xdc_Char)0x3a,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x25,  /* [5247] */
    (xdc_Char)0x24,  /* [5248] */
    (xdc_Char)0x53,  /* [5249] */
    (xdc_Char)0x0,  /* [5250] */
    (xdc_Char)0x53,  /* [5251] */
    (xdc_Char)0x74,  /* [5252] */
    (xdc_Char)0x6f,  /* [5253] */
    (xdc_Char)0x70,  /* [5254] */
    (xdc_Char)0x49,  /* [5255] */
    (xdc_Char)0x6e,  /* [5256] */
    (xdc_Char)0x73,  /* [5257] */
    (xdc_Char)0x74,  /* [5258] */
    (xdc_Char)0x61,  /* [5259] */
    (xdc_Char)0x6e,  /* [5260] */
    (xdc_Char)0x63,  /* [5261] */
    (xdc_Char)0x65,  /* [5262] */
    (xdc_Char)0x3a,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x25,  /* [5265] */
    (xdc_Char)0x24,  /* [5266] */
    (xdc_Char)0x53,  /* [5267] */
    (xdc_Char)0x0,  /* [5268] */
    (xdc_Char)0x4c,  /* [5269] */
    (xdc_Char)0x57,  /* [5270] */
    (xdc_Char)0x5f,  /* [5271] */
    (xdc_Char)0x64,  /* [5272] */
    (xdc_Char)0x65,  /* [5273] */
    (xdc_Char)0x6c,  /* [5274] */
    (xdc_Char)0x61,  /* [5275] */
    (xdc_Char)0x79,  /* [5276] */
    (xdc_Char)0x65,  /* [5277] */
    (xdc_Char)0x64,  /* [5278] */
    (xdc_Char)0x3a,  /* [5279] */
    (xdc_Char)0x20,  /* [5280] */
    (xdc_Char)0x64,  /* [5281] */
    (xdc_Char)0x65,  /* [5282] */
    (xdc_Char)0x6c,  /* [5283] */
    (xdc_Char)0x61,  /* [5284] */
    (xdc_Char)0x79,  /* [5285] */
    (xdc_Char)0x3a,  /* [5286] */
    (xdc_Char)0x20,  /* [5287] */
    (xdc_Char)0x25,  /* [5288] */
    (xdc_Char)0x64,  /* [5289] */
    (xdc_Char)0x0,  /* [5290] */
    (xdc_Char)0x4c,  /* [5291] */
    (xdc_Char)0x4d,  /* [5292] */
    (xdc_Char)0x5f,  /* [5293] */
    (xdc_Char)0x74,  /* [5294] */
    (xdc_Char)0x69,  /* [5295] */
    (xdc_Char)0x63,  /* [5296] */
    (xdc_Char)0x6b,  /* [5297] */
    (xdc_Char)0x3a,  /* [5298] */
    (xdc_Char)0x20,  /* [5299] */
    (xdc_Char)0x74,  /* [5300] */
    (xdc_Char)0x69,  /* [5301] */
    (xdc_Char)0x63,  /* [5302] */
    (xdc_Char)0x6b,  /* [5303] */
    (xdc_Char)0x3a,  /* [5304] */
    (xdc_Char)0x20,  /* [5305] */
    (xdc_Char)0x25,  /* [5306] */
    (xdc_Char)0x64,  /* [5307] */
    (xdc_Char)0x0,  /* [5308] */
    (xdc_Char)0x4c,  /* [5309] */
    (xdc_Char)0x4d,  /* [5310] */
    (xdc_Char)0x5f,  /* [5311] */
    (xdc_Char)0x62,  /* [5312] */
    (xdc_Char)0x65,  /* [5313] */
    (xdc_Char)0x67,  /* [5314] */
    (xdc_Char)0x69,  /* [5315] */
    (xdc_Char)0x6e,  /* [5316] */
    (xdc_Char)0x3a,  /* [5317] */
    (xdc_Char)0x20,  /* [5318] */
    (xdc_Char)0x63,  /* [5319] */
    (xdc_Char)0x6c,  /* [5320] */
    (xdc_Char)0x6b,  /* [5321] */
    (xdc_Char)0x3a,  /* [5322] */
    (xdc_Char)0x20,  /* [5323] */
    (xdc_Char)0x30,  /* [5324] */
    (xdc_Char)0x78,  /* [5325] */
    (xdc_Char)0x25,  /* [5326] */
    (xdc_Char)0x78,  /* [5327] */
    (xdc_Char)0x2c,  /* [5328] */
    (xdc_Char)0x20,  /* [5329] */
    (xdc_Char)0x66,  /* [5330] */
    (xdc_Char)0x75,  /* [5331] */
    (xdc_Char)0x6e,  /* [5332] */
    (xdc_Char)0x63,  /* [5333] */
    (xdc_Char)0x3a,  /* [5334] */
    (xdc_Char)0x20,  /* [5335] */
    (xdc_Char)0x30,  /* [5336] */
    (xdc_Char)0x78,  /* [5337] */
    (xdc_Char)0x25,  /* [5338] */
    (xdc_Char)0x78,  /* [5339] */
    (xdc_Char)0x0,  /* [5340] */
    (xdc_Char)0x4c,  /* [5341] */
    (xdc_Char)0x4d,  /* [5342] */
    (xdc_Char)0x5f,  /* [5343] */
    (xdc_Char)0x70,  /* [5344] */
    (xdc_Char)0x6f,  /* [5345] */
    (xdc_Char)0x73,  /* [5346] */
    (xdc_Char)0x74,  /* [5347] */
    (xdc_Char)0x3a,  /* [5348] */
    (xdc_Char)0x20,  /* [5349] */
    (xdc_Char)0x65,  /* [5350] */
    (xdc_Char)0x76,  /* [5351] */
    (xdc_Char)0x65,  /* [5352] */
    (xdc_Char)0x6e,  /* [5353] */
    (xdc_Char)0x74,  /* [5354] */
    (xdc_Char)0x3a,  /* [5355] */
    (xdc_Char)0x20,  /* [5356] */
    (xdc_Char)0x30,  /* [5357] */
    (xdc_Char)0x78,  /* [5358] */
    (xdc_Char)0x25,  /* [5359] */
    (xdc_Char)0x78,  /* [5360] */
    (xdc_Char)0x2c,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x63,  /* [5363] */
    (xdc_Char)0x75,  /* [5364] */
    (xdc_Char)0x72,  /* [5365] */
    (xdc_Char)0x72,  /* [5366] */
    (xdc_Char)0x45,  /* [5367] */
    (xdc_Char)0x76,  /* [5368] */
    (xdc_Char)0x65,  /* [5369] */
    (xdc_Char)0x6e,  /* [5370] */
    (xdc_Char)0x74,  /* [5371] */
    (xdc_Char)0x73,  /* [5372] */
    (xdc_Char)0x3a,  /* [5373] */
    (xdc_Char)0x20,  /* [5374] */
    (xdc_Char)0x30,  /* [5375] */
    (xdc_Char)0x78,  /* [5376] */
    (xdc_Char)0x25,  /* [5377] */
    (xdc_Char)0x78,  /* [5378] */
    (xdc_Char)0x2c,  /* [5379] */
    (xdc_Char)0x20,  /* [5380] */
    (xdc_Char)0x65,  /* [5381] */
    (xdc_Char)0x76,  /* [5382] */
    (xdc_Char)0x65,  /* [5383] */
    (xdc_Char)0x6e,  /* [5384] */
    (xdc_Char)0x74,  /* [5385] */
    (xdc_Char)0x49,  /* [5386] */
    (xdc_Char)0x64,  /* [5387] */
    (xdc_Char)0x3a,  /* [5388] */
    (xdc_Char)0x20,  /* [5389] */
    (xdc_Char)0x30,  /* [5390] */
    (xdc_Char)0x78,  /* [5391] */
    (xdc_Char)0x25,  /* [5392] */
    (xdc_Char)0x78,  /* [5393] */
    (xdc_Char)0x0,  /* [5394] */
    (xdc_Char)0x4c,  /* [5395] */
    (xdc_Char)0x4d,  /* [5396] */
    (xdc_Char)0x5f,  /* [5397] */
    (xdc_Char)0x70,  /* [5398] */
    (xdc_Char)0x65,  /* [5399] */
    (xdc_Char)0x6e,  /* [5400] */
    (xdc_Char)0x64,  /* [5401] */
    (xdc_Char)0x3a,  /* [5402] */
    (xdc_Char)0x20,  /* [5403] */
    (xdc_Char)0x65,  /* [5404] */
    (xdc_Char)0x76,  /* [5405] */
    (xdc_Char)0x65,  /* [5406] */
    (xdc_Char)0x6e,  /* [5407] */
    (xdc_Char)0x74,  /* [5408] */
    (xdc_Char)0x3a,  /* [5409] */
    (xdc_Char)0x20,  /* [5410] */
    (xdc_Char)0x30,  /* [5411] */
    (xdc_Char)0x78,  /* [5412] */
    (xdc_Char)0x25,  /* [5413] */
    (xdc_Char)0x78,  /* [5414] */
    (xdc_Char)0x2c,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x63,  /* [5417] */
    (xdc_Char)0x75,  /* [5418] */
    (xdc_Char)0x72,  /* [5419] */
    (xdc_Char)0x72,  /* [5420] */
    (xdc_Char)0x45,  /* [5421] */
    (xdc_Char)0x76,  /* [5422] */
    (xdc_Char)0x65,  /* [5423] */
    (xdc_Char)0x6e,  /* [5424] */
    (xdc_Char)0x74,  /* [5425] */
    (xdc_Char)0x73,  /* [5426] */
    (xdc_Char)0x3a,  /* [5427] */
    (xdc_Char)0x20,  /* [5428] */
    (xdc_Char)0x30,  /* [5429] */
    (xdc_Char)0x78,  /* [5430] */
    (xdc_Char)0x25,  /* [5431] */
    (xdc_Char)0x78,  /* [5432] */
    (xdc_Char)0x2c,  /* [5433] */
    (xdc_Char)0x20,  /* [5434] */
    (xdc_Char)0x61,  /* [5435] */
    (xdc_Char)0x6e,  /* [5436] */
    (xdc_Char)0x64,  /* [5437] */
    (xdc_Char)0x4d,  /* [5438] */
    (xdc_Char)0x61,  /* [5439] */
    (xdc_Char)0x73,  /* [5440] */
    (xdc_Char)0x6b,  /* [5441] */
    (xdc_Char)0x3a,  /* [5442] */
    (xdc_Char)0x20,  /* [5443] */
    (xdc_Char)0x30,  /* [5444] */
    (xdc_Char)0x78,  /* [5445] */
    (xdc_Char)0x25,  /* [5446] */
    (xdc_Char)0x78,  /* [5447] */
    (xdc_Char)0x2c,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x6f,  /* [5450] */
    (xdc_Char)0x72,  /* [5451] */
    (xdc_Char)0x4d,  /* [5452] */
    (xdc_Char)0x61,  /* [5453] */
    (xdc_Char)0x73,  /* [5454] */
    (xdc_Char)0x6b,  /* [5455] */
    (xdc_Char)0x3a,  /* [5456] */
    (xdc_Char)0x20,  /* [5457] */
    (xdc_Char)0x30,  /* [5458] */
    (xdc_Char)0x78,  /* [5459] */
    (xdc_Char)0x25,  /* [5460] */
    (xdc_Char)0x78,  /* [5461] */
    (xdc_Char)0x2c,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x74,  /* [5464] */
    (xdc_Char)0x69,  /* [5465] */
    (xdc_Char)0x6d,  /* [5466] */
    (xdc_Char)0x65,  /* [5467] */
    (xdc_Char)0x6f,  /* [5468] */
    (xdc_Char)0x75,  /* [5469] */
    (xdc_Char)0x74,  /* [5470] */
    (xdc_Char)0x3a,  /* [5471] */
    (xdc_Char)0x20,  /* [5472] */
    (xdc_Char)0x25,  /* [5473] */
    (xdc_Char)0x64,  /* [5474] */
    (xdc_Char)0x0,  /* [5475] */
    (xdc_Char)0x4c,  /* [5476] */
    (xdc_Char)0x4d,  /* [5477] */
    (xdc_Char)0x5f,  /* [5478] */
    (xdc_Char)0x70,  /* [5479] */
    (xdc_Char)0x6f,  /* [5480] */
    (xdc_Char)0x73,  /* [5481] */
    (xdc_Char)0x74,  /* [5482] */
    (xdc_Char)0x3a,  /* [5483] */
    (xdc_Char)0x20,  /* [5484] */
    (xdc_Char)0x73,  /* [5485] */
    (xdc_Char)0x65,  /* [5486] */
    (xdc_Char)0x6d,  /* [5487] */
    (xdc_Char)0x3a,  /* [5488] */
    (xdc_Char)0x20,  /* [5489] */
    (xdc_Char)0x30,  /* [5490] */
    (xdc_Char)0x78,  /* [5491] */
    (xdc_Char)0x25,  /* [5492] */
    (xdc_Char)0x78,  /* [5493] */
    (xdc_Char)0x2c,  /* [5494] */
    (xdc_Char)0x20,  /* [5495] */
    (xdc_Char)0x63,  /* [5496] */
    (xdc_Char)0x6f,  /* [5497] */
    (xdc_Char)0x75,  /* [5498] */
    (xdc_Char)0x6e,  /* [5499] */
    (xdc_Char)0x74,  /* [5500] */
    (xdc_Char)0x3a,  /* [5501] */
    (xdc_Char)0x20,  /* [5502] */
    (xdc_Char)0x25,  /* [5503] */
    (xdc_Char)0x64,  /* [5504] */
    (xdc_Char)0x0,  /* [5505] */
    (xdc_Char)0x4c,  /* [5506] */
    (xdc_Char)0x4d,  /* [5507] */
    (xdc_Char)0x5f,  /* [5508] */
    (xdc_Char)0x70,  /* [5509] */
    (xdc_Char)0x65,  /* [5510] */
    (xdc_Char)0x6e,  /* [5511] */
    (xdc_Char)0x64,  /* [5512] */
    (xdc_Char)0x3a,  /* [5513] */
    (xdc_Char)0x20,  /* [5514] */
    (xdc_Char)0x73,  /* [5515] */
    (xdc_Char)0x65,  /* [5516] */
    (xdc_Char)0x6d,  /* [5517] */
    (xdc_Char)0x3a,  /* [5518] */
    (xdc_Char)0x20,  /* [5519] */
    (xdc_Char)0x30,  /* [5520] */
    (xdc_Char)0x78,  /* [5521] */
    (xdc_Char)0x25,  /* [5522] */
    (xdc_Char)0x78,  /* [5523] */
    (xdc_Char)0x2c,  /* [5524] */
    (xdc_Char)0x20,  /* [5525] */
    (xdc_Char)0x63,  /* [5526] */
    (xdc_Char)0x6f,  /* [5527] */
    (xdc_Char)0x75,  /* [5528] */
    (xdc_Char)0x6e,  /* [5529] */
    (xdc_Char)0x74,  /* [5530] */
    (xdc_Char)0x3a,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x25,  /* [5533] */
    (xdc_Char)0x64,  /* [5534] */
    (xdc_Char)0x2c,  /* [5535] */
    (xdc_Char)0x20,  /* [5536] */
    (xdc_Char)0x74,  /* [5537] */
    (xdc_Char)0x69,  /* [5538] */
    (xdc_Char)0x6d,  /* [5539] */
    (xdc_Char)0x65,  /* [5540] */
    (xdc_Char)0x6f,  /* [5541] */
    (xdc_Char)0x75,  /* [5542] */
    (xdc_Char)0x74,  /* [5543] */
    (xdc_Char)0x3a,  /* [5544] */
    (xdc_Char)0x20,  /* [5545] */
    (xdc_Char)0x25,  /* [5546] */
    (xdc_Char)0x64,  /* [5547] */
    (xdc_Char)0x0,  /* [5548] */
    (xdc_Char)0x4c,  /* [5549] */
    (xdc_Char)0x4d,  /* [5550] */
    (xdc_Char)0x5f,  /* [5551] */
    (xdc_Char)0x62,  /* [5552] */
    (xdc_Char)0x65,  /* [5553] */
    (xdc_Char)0x67,  /* [5554] */
    (xdc_Char)0x69,  /* [5555] */
    (xdc_Char)0x6e,  /* [5556] */
    (xdc_Char)0x3a,  /* [5557] */
    (xdc_Char)0x20,  /* [5558] */
    (xdc_Char)0x73,  /* [5559] */
    (xdc_Char)0x77,  /* [5560] */
    (xdc_Char)0x69,  /* [5561] */
    (xdc_Char)0x3a,  /* [5562] */
    (xdc_Char)0x20,  /* [5563] */
    (xdc_Char)0x30,  /* [5564] */
    (xdc_Char)0x78,  /* [5565] */
    (xdc_Char)0x25,  /* [5566] */
    (xdc_Char)0x78,  /* [5567] */
    (xdc_Char)0x2c,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x66,  /* [5570] */
    (xdc_Char)0x75,  /* [5571] */
    (xdc_Char)0x6e,  /* [5572] */
    (xdc_Char)0x63,  /* [5573] */
    (xdc_Char)0x3a,  /* [5574] */
    (xdc_Char)0x20,  /* [5575] */
    (xdc_Char)0x30,  /* [5576] */
    (xdc_Char)0x78,  /* [5577] */
    (xdc_Char)0x25,  /* [5578] */
    (xdc_Char)0x78,  /* [5579] */
    (xdc_Char)0x2c,  /* [5580] */
    (xdc_Char)0x20,  /* [5581] */
    (xdc_Char)0x70,  /* [5582] */
    (xdc_Char)0x72,  /* [5583] */
    (xdc_Char)0x65,  /* [5584] */
    (xdc_Char)0x54,  /* [5585] */
    (xdc_Char)0x68,  /* [5586] */
    (xdc_Char)0x72,  /* [5587] */
    (xdc_Char)0x65,  /* [5588] */
    (xdc_Char)0x61,  /* [5589] */
    (xdc_Char)0x64,  /* [5590] */
    (xdc_Char)0x3a,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x25,  /* [5593] */
    (xdc_Char)0x64,  /* [5594] */
    (xdc_Char)0x0,  /* [5595] */
    (xdc_Char)0x4c,  /* [5596] */
    (xdc_Char)0x44,  /* [5597] */
    (xdc_Char)0x5f,  /* [5598] */
    (xdc_Char)0x65,  /* [5599] */
    (xdc_Char)0x6e,  /* [5600] */
    (xdc_Char)0x64,  /* [5601] */
    (xdc_Char)0x3a,  /* [5602] */
    (xdc_Char)0x20,  /* [5603] */
    (xdc_Char)0x73,  /* [5604] */
    (xdc_Char)0x77,  /* [5605] */
    (xdc_Char)0x69,  /* [5606] */
    (xdc_Char)0x3a,  /* [5607] */
    (xdc_Char)0x20,  /* [5608] */
    (xdc_Char)0x30,  /* [5609] */
    (xdc_Char)0x78,  /* [5610] */
    (xdc_Char)0x25,  /* [5611] */
    (xdc_Char)0x78,  /* [5612] */
    (xdc_Char)0x0,  /* [5613] */
    (xdc_Char)0x4c,  /* [5614] */
    (xdc_Char)0x4d,  /* [5615] */
    (xdc_Char)0x5f,  /* [5616] */
    (xdc_Char)0x70,  /* [5617] */
    (xdc_Char)0x6f,  /* [5618] */
    (xdc_Char)0x73,  /* [5619] */
    (xdc_Char)0x74,  /* [5620] */
    (xdc_Char)0x3a,  /* [5621] */
    (xdc_Char)0x20,  /* [5622] */
    (xdc_Char)0x73,  /* [5623] */
    (xdc_Char)0x77,  /* [5624] */
    (xdc_Char)0x69,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x30,  /* [5628] */
    (xdc_Char)0x78,  /* [5629] */
    (xdc_Char)0x25,  /* [5630] */
    (xdc_Char)0x78,  /* [5631] */
    (xdc_Char)0x2c,  /* [5632] */
    (xdc_Char)0x20,  /* [5633] */
    (xdc_Char)0x66,  /* [5634] */
    (xdc_Char)0x75,  /* [5635] */
    (xdc_Char)0x6e,  /* [5636] */
    (xdc_Char)0x63,  /* [5637] */
    (xdc_Char)0x3a,  /* [5638] */
    (xdc_Char)0x20,  /* [5639] */
    (xdc_Char)0x30,  /* [5640] */
    (xdc_Char)0x78,  /* [5641] */
    (xdc_Char)0x25,  /* [5642] */
    (xdc_Char)0x78,  /* [5643] */
    (xdc_Char)0x2c,  /* [5644] */
    (xdc_Char)0x20,  /* [5645] */
    (xdc_Char)0x70,  /* [5646] */
    (xdc_Char)0x72,  /* [5647] */
    (xdc_Char)0x69,  /* [5648] */
    (xdc_Char)0x3a,  /* [5649] */
    (xdc_Char)0x20,  /* [5650] */
    (xdc_Char)0x25,  /* [5651] */
    (xdc_Char)0x64,  /* [5652] */
    (xdc_Char)0x0,  /* [5653] */
    (xdc_Char)0x4c,  /* [5654] */
    (xdc_Char)0x4d,  /* [5655] */
    (xdc_Char)0x5f,  /* [5656] */
    (xdc_Char)0x73,  /* [5657] */
    (xdc_Char)0x77,  /* [5658] */
    (xdc_Char)0x69,  /* [5659] */
    (xdc_Char)0x74,  /* [5660] */
    (xdc_Char)0x63,  /* [5661] */
    (xdc_Char)0x68,  /* [5662] */
    (xdc_Char)0x3a,  /* [5663] */
    (xdc_Char)0x20,  /* [5664] */
    (xdc_Char)0x6f,  /* [5665] */
    (xdc_Char)0x6c,  /* [5666] */
    (xdc_Char)0x64,  /* [5667] */
    (xdc_Char)0x74,  /* [5668] */
    (xdc_Char)0x73,  /* [5669] */
    (xdc_Char)0x6b,  /* [5670] */
    (xdc_Char)0x3a,  /* [5671] */
    (xdc_Char)0x20,  /* [5672] */
    (xdc_Char)0x30,  /* [5673] */
    (xdc_Char)0x78,  /* [5674] */
    (xdc_Char)0x25,  /* [5675] */
    (xdc_Char)0x78,  /* [5676] */
    (xdc_Char)0x2c,  /* [5677] */
    (xdc_Char)0x20,  /* [5678] */
    (xdc_Char)0x6f,  /* [5679] */
    (xdc_Char)0x6c,  /* [5680] */
    (xdc_Char)0x64,  /* [5681] */
    (xdc_Char)0x66,  /* [5682] */
    (xdc_Char)0x75,  /* [5683] */
    (xdc_Char)0x6e,  /* [5684] */
    (xdc_Char)0x63,  /* [5685] */
    (xdc_Char)0x3a,  /* [5686] */
    (xdc_Char)0x20,  /* [5687] */
    (xdc_Char)0x30,  /* [5688] */
    (xdc_Char)0x78,  /* [5689] */
    (xdc_Char)0x25,  /* [5690] */
    (xdc_Char)0x78,  /* [5691] */
    (xdc_Char)0x2c,  /* [5692] */
    (xdc_Char)0x20,  /* [5693] */
    (xdc_Char)0x6e,  /* [5694] */
    (xdc_Char)0x65,  /* [5695] */
    (xdc_Char)0x77,  /* [5696] */
    (xdc_Char)0x74,  /* [5697] */
    (xdc_Char)0x73,  /* [5698] */
    (xdc_Char)0x6b,  /* [5699] */
    (xdc_Char)0x3a,  /* [5700] */
    (xdc_Char)0x20,  /* [5701] */
    (xdc_Char)0x30,  /* [5702] */
    (xdc_Char)0x78,  /* [5703] */
    (xdc_Char)0x25,  /* [5704] */
    (xdc_Char)0x78,  /* [5705] */
    (xdc_Char)0x2c,  /* [5706] */
    (xdc_Char)0x20,  /* [5707] */
    (xdc_Char)0x6e,  /* [5708] */
    (xdc_Char)0x65,  /* [5709] */
    (xdc_Char)0x77,  /* [5710] */
    (xdc_Char)0x66,  /* [5711] */
    (xdc_Char)0x75,  /* [5712] */
    (xdc_Char)0x6e,  /* [5713] */
    (xdc_Char)0x63,  /* [5714] */
    (xdc_Char)0x3a,  /* [5715] */
    (xdc_Char)0x20,  /* [5716] */
    (xdc_Char)0x30,  /* [5717] */
    (xdc_Char)0x78,  /* [5718] */
    (xdc_Char)0x25,  /* [5719] */
    (xdc_Char)0x78,  /* [5720] */
    (xdc_Char)0x0,  /* [5721] */
    (xdc_Char)0x4c,  /* [5722] */
    (xdc_Char)0x4d,  /* [5723] */
    (xdc_Char)0x5f,  /* [5724] */
    (xdc_Char)0x73,  /* [5725] */
    (xdc_Char)0x6c,  /* [5726] */
    (xdc_Char)0x65,  /* [5727] */
    (xdc_Char)0x65,  /* [5728] */
    (xdc_Char)0x70,  /* [5729] */
    (xdc_Char)0x3a,  /* [5730] */
    (xdc_Char)0x20,  /* [5731] */
    (xdc_Char)0x74,  /* [5732] */
    (xdc_Char)0x73,  /* [5733] */
    (xdc_Char)0x6b,  /* [5734] */
    (xdc_Char)0x3a,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x30,  /* [5737] */
    (xdc_Char)0x78,  /* [5738] */
    (xdc_Char)0x25,  /* [5739] */
    (xdc_Char)0x78,  /* [5740] */
    (xdc_Char)0x2c,  /* [5741] */
    (xdc_Char)0x20,  /* [5742] */
    (xdc_Char)0x66,  /* [5743] */
    (xdc_Char)0x75,  /* [5744] */
    (xdc_Char)0x6e,  /* [5745] */
    (xdc_Char)0x63,  /* [5746] */
    (xdc_Char)0x3a,  /* [5747] */
    (xdc_Char)0x20,  /* [5748] */
    (xdc_Char)0x30,  /* [5749] */
    (xdc_Char)0x78,  /* [5750] */
    (xdc_Char)0x25,  /* [5751] */
    (xdc_Char)0x78,  /* [5752] */
    (xdc_Char)0x2c,  /* [5753] */
    (xdc_Char)0x20,  /* [5754] */
    (xdc_Char)0x74,  /* [5755] */
    (xdc_Char)0x69,  /* [5756] */
    (xdc_Char)0x6d,  /* [5757] */
    (xdc_Char)0x65,  /* [5758] */
    (xdc_Char)0x6f,  /* [5759] */
    (xdc_Char)0x75,  /* [5760] */
    (xdc_Char)0x74,  /* [5761] */
    (xdc_Char)0x3a,  /* [5762] */
    (xdc_Char)0x20,  /* [5763] */
    (xdc_Char)0x25,  /* [5764] */
    (xdc_Char)0x64,  /* [5765] */
    (xdc_Char)0x0,  /* [5766] */
    (xdc_Char)0x4c,  /* [5767] */
    (xdc_Char)0x44,  /* [5768] */
    (xdc_Char)0x5f,  /* [5769] */
    (xdc_Char)0x72,  /* [5770] */
    (xdc_Char)0x65,  /* [5771] */
    (xdc_Char)0x61,  /* [5772] */
    (xdc_Char)0x64,  /* [5773] */
    (xdc_Char)0x79,  /* [5774] */
    (xdc_Char)0x3a,  /* [5775] */
    (xdc_Char)0x20,  /* [5776] */
    (xdc_Char)0x74,  /* [5777] */
    (xdc_Char)0x73,  /* [5778] */
    (xdc_Char)0x6b,  /* [5779] */
    (xdc_Char)0x3a,  /* [5780] */
    (xdc_Char)0x20,  /* [5781] */
    (xdc_Char)0x30,  /* [5782] */
    (xdc_Char)0x78,  /* [5783] */
    (xdc_Char)0x25,  /* [5784] */
    (xdc_Char)0x78,  /* [5785] */
    (xdc_Char)0x2c,  /* [5786] */
    (xdc_Char)0x20,  /* [5787] */
    (xdc_Char)0x66,  /* [5788] */
    (xdc_Char)0x75,  /* [5789] */
    (xdc_Char)0x6e,  /* [5790] */
    (xdc_Char)0x63,  /* [5791] */
    (xdc_Char)0x3a,  /* [5792] */
    (xdc_Char)0x20,  /* [5793] */
    (xdc_Char)0x30,  /* [5794] */
    (xdc_Char)0x78,  /* [5795] */
    (xdc_Char)0x25,  /* [5796] */
    (xdc_Char)0x78,  /* [5797] */
    (xdc_Char)0x2c,  /* [5798] */
    (xdc_Char)0x20,  /* [5799] */
    (xdc_Char)0x70,  /* [5800] */
    (xdc_Char)0x72,  /* [5801] */
    (xdc_Char)0x69,  /* [5802] */
    (xdc_Char)0x3a,  /* [5803] */
    (xdc_Char)0x20,  /* [5804] */
    (xdc_Char)0x25,  /* [5805] */
    (xdc_Char)0x64,  /* [5806] */
    (xdc_Char)0x0,  /* [5807] */
    (xdc_Char)0x4c,  /* [5808] */
    (xdc_Char)0x44,  /* [5809] */
    (xdc_Char)0x5f,  /* [5810] */
    (xdc_Char)0x62,  /* [5811] */
    (xdc_Char)0x6c,  /* [5812] */
    (xdc_Char)0x6f,  /* [5813] */
    (xdc_Char)0x63,  /* [5814] */
    (xdc_Char)0x6b,  /* [5815] */
    (xdc_Char)0x3a,  /* [5816] */
    (xdc_Char)0x20,  /* [5817] */
    (xdc_Char)0x74,  /* [5818] */
    (xdc_Char)0x73,  /* [5819] */
    (xdc_Char)0x6b,  /* [5820] */
    (xdc_Char)0x3a,  /* [5821] */
    (xdc_Char)0x20,  /* [5822] */
    (xdc_Char)0x30,  /* [5823] */
    (xdc_Char)0x78,  /* [5824] */
    (xdc_Char)0x25,  /* [5825] */
    (xdc_Char)0x78,  /* [5826] */
    (xdc_Char)0x2c,  /* [5827] */
    (xdc_Char)0x20,  /* [5828] */
    (xdc_Char)0x66,  /* [5829] */
    (xdc_Char)0x75,  /* [5830] */
    (xdc_Char)0x6e,  /* [5831] */
    (xdc_Char)0x63,  /* [5832] */
    (xdc_Char)0x3a,  /* [5833] */
    (xdc_Char)0x20,  /* [5834] */
    (xdc_Char)0x30,  /* [5835] */
    (xdc_Char)0x78,  /* [5836] */
    (xdc_Char)0x25,  /* [5837] */
    (xdc_Char)0x78,  /* [5838] */
    (xdc_Char)0x0,  /* [5839] */
    (xdc_Char)0x4c,  /* [5840] */
    (xdc_Char)0x4d,  /* [5841] */
    (xdc_Char)0x5f,  /* [5842] */
    (xdc_Char)0x79,  /* [5843] */
    (xdc_Char)0x69,  /* [5844] */
    (xdc_Char)0x65,  /* [5845] */
    (xdc_Char)0x6c,  /* [5846] */
    (xdc_Char)0x64,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x74,  /* [5850] */
    (xdc_Char)0x73,  /* [5851] */
    (xdc_Char)0x6b,  /* [5852] */
    (xdc_Char)0x3a,  /* [5853] */
    (xdc_Char)0x20,  /* [5854] */
    (xdc_Char)0x30,  /* [5855] */
    (xdc_Char)0x78,  /* [5856] */
    (xdc_Char)0x25,  /* [5857] */
    (xdc_Char)0x78,  /* [5858] */
    (xdc_Char)0x2c,  /* [5859] */
    (xdc_Char)0x20,  /* [5860] */
    (xdc_Char)0x66,  /* [5861] */
    (xdc_Char)0x75,  /* [5862] */
    (xdc_Char)0x6e,  /* [5863] */
    (xdc_Char)0x63,  /* [5864] */
    (xdc_Char)0x3a,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x30,  /* [5867] */
    (xdc_Char)0x78,  /* [5868] */
    (xdc_Char)0x25,  /* [5869] */
    (xdc_Char)0x78,  /* [5870] */
    (xdc_Char)0x2c,  /* [5871] */
    (xdc_Char)0x20,  /* [5872] */
    (xdc_Char)0x63,  /* [5873] */
    (xdc_Char)0x75,  /* [5874] */
    (xdc_Char)0x72,  /* [5875] */
    (xdc_Char)0x72,  /* [5876] */
    (xdc_Char)0x54,  /* [5877] */
    (xdc_Char)0x68,  /* [5878] */
    (xdc_Char)0x72,  /* [5879] */
    (xdc_Char)0x65,  /* [5880] */
    (xdc_Char)0x61,  /* [5881] */
    (xdc_Char)0x64,  /* [5882] */
    (xdc_Char)0x3a,  /* [5883] */
    (xdc_Char)0x20,  /* [5884] */
    (xdc_Char)0x25,  /* [5885] */
    (xdc_Char)0x64,  /* [5886] */
    (xdc_Char)0x0,  /* [5887] */
    (xdc_Char)0x4c,  /* [5888] */
    (xdc_Char)0x4d,  /* [5889] */
    (xdc_Char)0x5f,  /* [5890] */
    (xdc_Char)0x73,  /* [5891] */
    (xdc_Char)0x65,  /* [5892] */
    (xdc_Char)0x74,  /* [5893] */
    (xdc_Char)0x50,  /* [5894] */
    (xdc_Char)0x72,  /* [5895] */
    (xdc_Char)0x69,  /* [5896] */
    (xdc_Char)0x3a,  /* [5897] */
    (xdc_Char)0x20,  /* [5898] */
    (xdc_Char)0x74,  /* [5899] */
    (xdc_Char)0x73,  /* [5900] */
    (xdc_Char)0x6b,  /* [5901] */
    (xdc_Char)0x3a,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x30,  /* [5904] */
    (xdc_Char)0x78,  /* [5905] */
    (xdc_Char)0x25,  /* [5906] */
    (xdc_Char)0x78,  /* [5907] */
    (xdc_Char)0x2c,  /* [5908] */
    (xdc_Char)0x20,  /* [5909] */
    (xdc_Char)0x66,  /* [5910] */
    (xdc_Char)0x75,  /* [5911] */
    (xdc_Char)0x6e,  /* [5912] */
    (xdc_Char)0x63,  /* [5913] */
    (xdc_Char)0x3a,  /* [5914] */
    (xdc_Char)0x20,  /* [5915] */
    (xdc_Char)0x30,  /* [5916] */
    (xdc_Char)0x78,  /* [5917] */
    (xdc_Char)0x25,  /* [5918] */
    (xdc_Char)0x78,  /* [5919] */
    (xdc_Char)0x2c,  /* [5920] */
    (xdc_Char)0x20,  /* [5921] */
    (xdc_Char)0x6f,  /* [5922] */
    (xdc_Char)0x6c,  /* [5923] */
    (xdc_Char)0x64,  /* [5924] */
    (xdc_Char)0x50,  /* [5925] */
    (xdc_Char)0x72,  /* [5926] */
    (xdc_Char)0x69,  /* [5927] */
    (xdc_Char)0x3a,  /* [5928] */
    (xdc_Char)0x20,  /* [5929] */
    (xdc_Char)0x25,  /* [5930] */
    (xdc_Char)0x64,  /* [5931] */
    (xdc_Char)0x2c,  /* [5932] */
    (xdc_Char)0x20,  /* [5933] */
    (xdc_Char)0x6e,  /* [5934] */
    (xdc_Char)0x65,  /* [5935] */
    (xdc_Char)0x77,  /* [5936] */
    (xdc_Char)0x50,  /* [5937] */
    (xdc_Char)0x72,  /* [5938] */
    (xdc_Char)0x69,  /* [5939] */
    (xdc_Char)0x20,  /* [5940] */
    (xdc_Char)0x25,  /* [5941] */
    (xdc_Char)0x64,  /* [5942] */
    (xdc_Char)0x0,  /* [5943] */
    (xdc_Char)0x4c,  /* [5944] */
    (xdc_Char)0x44,  /* [5945] */
    (xdc_Char)0x5f,  /* [5946] */
    (xdc_Char)0x65,  /* [5947] */
    (xdc_Char)0x78,  /* [5948] */
    (xdc_Char)0x69,  /* [5949] */
    (xdc_Char)0x74,  /* [5950] */
    (xdc_Char)0x3a,  /* [5951] */
    (xdc_Char)0x20,  /* [5952] */
    (xdc_Char)0x74,  /* [5953] */
    (xdc_Char)0x73,  /* [5954] */
    (xdc_Char)0x6b,  /* [5955] */
    (xdc_Char)0x3a,  /* [5956] */
    (xdc_Char)0x20,  /* [5957] */
    (xdc_Char)0x30,  /* [5958] */
    (xdc_Char)0x78,  /* [5959] */
    (xdc_Char)0x25,  /* [5960] */
    (xdc_Char)0x78,  /* [5961] */
    (xdc_Char)0x2c,  /* [5962] */
    (xdc_Char)0x20,  /* [5963] */
    (xdc_Char)0x66,  /* [5964] */
    (xdc_Char)0x75,  /* [5965] */
    (xdc_Char)0x6e,  /* [5966] */
    (xdc_Char)0x63,  /* [5967] */
    (xdc_Char)0x3a,  /* [5968] */
    (xdc_Char)0x20,  /* [5969] */
    (xdc_Char)0x30,  /* [5970] */
    (xdc_Char)0x78,  /* [5971] */
    (xdc_Char)0x25,  /* [5972] */
    (xdc_Char)0x78,  /* [5973] */
    (xdc_Char)0x0,  /* [5974] */
    (xdc_Char)0x4c,  /* [5975] */
    (xdc_Char)0x4d,  /* [5976] */
    (xdc_Char)0x5f,  /* [5977] */
    (xdc_Char)0x73,  /* [5978] */
    (xdc_Char)0x65,  /* [5979] */
    (xdc_Char)0x74,  /* [5980] */
    (xdc_Char)0x41,  /* [5981] */
    (xdc_Char)0x66,  /* [5982] */
    (xdc_Char)0x66,  /* [5983] */
    (xdc_Char)0x69,  /* [5984] */
    (xdc_Char)0x6e,  /* [5985] */
    (xdc_Char)0x69,  /* [5986] */
    (xdc_Char)0x74,  /* [5987] */
    (xdc_Char)0x79,  /* [5988] */
    (xdc_Char)0x3a,  /* [5989] */
    (xdc_Char)0x20,  /* [5990] */
    (xdc_Char)0x74,  /* [5991] */
    (xdc_Char)0x73,  /* [5992] */
    (xdc_Char)0x6b,  /* [5993] */
    (xdc_Char)0x3a,  /* [5994] */
    (xdc_Char)0x20,  /* [5995] */
    (xdc_Char)0x30,  /* [5996] */
    (xdc_Char)0x78,  /* [5997] */
    (xdc_Char)0x25,  /* [5998] */
    (xdc_Char)0x78,  /* [5999] */
    (xdc_Char)0x2c,  /* [6000] */
    (xdc_Char)0x20,  /* [6001] */
    (xdc_Char)0x66,  /* [6002] */
    (xdc_Char)0x75,  /* [6003] */
    (xdc_Char)0x6e,  /* [6004] */
    (xdc_Char)0x63,  /* [6005] */
    (xdc_Char)0x3a,  /* [6006] */
    (xdc_Char)0x20,  /* [6007] */
    (xdc_Char)0x30,  /* [6008] */
    (xdc_Char)0x78,  /* [6009] */
    (xdc_Char)0x25,  /* [6010] */
    (xdc_Char)0x78,  /* [6011] */
    (xdc_Char)0x2c,  /* [6012] */
    (xdc_Char)0x20,  /* [6013] */
    (xdc_Char)0x6f,  /* [6014] */
    (xdc_Char)0x6c,  /* [6015] */
    (xdc_Char)0x64,  /* [6016] */
    (xdc_Char)0x43,  /* [6017] */
    (xdc_Char)0x6f,  /* [6018] */
    (xdc_Char)0x72,  /* [6019] */
    (xdc_Char)0x65,  /* [6020] */
    (xdc_Char)0x3a,  /* [6021] */
    (xdc_Char)0x20,  /* [6022] */
    (xdc_Char)0x25,  /* [6023] */
    (xdc_Char)0x64,  /* [6024] */
    (xdc_Char)0x2c,  /* [6025] */
    (xdc_Char)0x20,  /* [6026] */
    (xdc_Char)0x6f,  /* [6027] */
    (xdc_Char)0x6c,  /* [6028] */
    (xdc_Char)0x64,  /* [6029] */
    (xdc_Char)0x41,  /* [6030] */
    (xdc_Char)0x66,  /* [6031] */
    (xdc_Char)0x66,  /* [6032] */
    (xdc_Char)0x69,  /* [6033] */
    (xdc_Char)0x6e,  /* [6034] */
    (xdc_Char)0x69,  /* [6035] */
    (xdc_Char)0x74,  /* [6036] */
    (xdc_Char)0x79,  /* [6037] */
    (xdc_Char)0x20,  /* [6038] */
    (xdc_Char)0x25,  /* [6039] */
    (xdc_Char)0x64,  /* [6040] */
    (xdc_Char)0x2c,  /* [6041] */
    (xdc_Char)0x20,  /* [6042] */
    (xdc_Char)0x6e,  /* [6043] */
    (xdc_Char)0x65,  /* [6044] */
    (xdc_Char)0x77,  /* [6045] */
    (xdc_Char)0x41,  /* [6046] */
    (xdc_Char)0x66,  /* [6047] */
    (xdc_Char)0x66,  /* [6048] */
    (xdc_Char)0x69,  /* [6049] */
    (xdc_Char)0x6e,  /* [6050] */
    (xdc_Char)0x69,  /* [6051] */
    (xdc_Char)0x74,  /* [6052] */
    (xdc_Char)0x79,  /* [6053] */
    (xdc_Char)0x20,  /* [6054] */
    (xdc_Char)0x25,  /* [6055] */
    (xdc_Char)0x64,  /* [6056] */
    (xdc_Char)0x0,  /* [6057] */
    (xdc_Char)0x4c,  /* [6058] */
    (xdc_Char)0x44,  /* [6059] */
    (xdc_Char)0x5f,  /* [6060] */
    (xdc_Char)0x73,  /* [6061] */
    (xdc_Char)0x63,  /* [6062] */
    (xdc_Char)0x68,  /* [6063] */
    (xdc_Char)0x65,  /* [6064] */
    (xdc_Char)0x64,  /* [6065] */
    (xdc_Char)0x75,  /* [6066] */
    (xdc_Char)0x6c,  /* [6067] */
    (xdc_Char)0x65,  /* [6068] */
    (xdc_Char)0x3a,  /* [6069] */
    (xdc_Char)0x20,  /* [6070] */
    (xdc_Char)0x63,  /* [6071] */
    (xdc_Char)0x6f,  /* [6072] */
    (xdc_Char)0x72,  /* [6073] */
    (xdc_Char)0x65,  /* [6074] */
    (xdc_Char)0x49,  /* [6075] */
    (xdc_Char)0x64,  /* [6076] */
    (xdc_Char)0x3a,  /* [6077] */
    (xdc_Char)0x20,  /* [6078] */
    (xdc_Char)0x25,  /* [6079] */
    (xdc_Char)0x64,  /* [6080] */
    (xdc_Char)0x2c,  /* [6081] */
    (xdc_Char)0x20,  /* [6082] */
    (xdc_Char)0x77,  /* [6083] */
    (xdc_Char)0x6f,  /* [6084] */
    (xdc_Char)0x72,  /* [6085] */
    (xdc_Char)0x6b,  /* [6086] */
    (xdc_Char)0x46,  /* [6087] */
    (xdc_Char)0x6c,  /* [6088] */
    (xdc_Char)0x61,  /* [6089] */
    (xdc_Char)0x67,  /* [6090] */
    (xdc_Char)0x3a,  /* [6091] */
    (xdc_Char)0x20,  /* [6092] */
    (xdc_Char)0x25,  /* [6093] */
    (xdc_Char)0x64,  /* [6094] */
    (xdc_Char)0x2c,  /* [6095] */
    (xdc_Char)0x20,  /* [6096] */
    (xdc_Char)0x63,  /* [6097] */
    (xdc_Char)0x75,  /* [6098] */
    (xdc_Char)0x72,  /* [6099] */
    (xdc_Char)0x53,  /* [6100] */
    (xdc_Char)0x65,  /* [6101] */
    (xdc_Char)0x74,  /* [6102] */
    (xdc_Char)0x4c,  /* [6103] */
    (xdc_Char)0x6f,  /* [6104] */
    (xdc_Char)0x63,  /* [6105] */
    (xdc_Char)0x61,  /* [6106] */
    (xdc_Char)0x6c,  /* [6107] */
    (xdc_Char)0x3a,  /* [6108] */
    (xdc_Char)0x20,  /* [6109] */
    (xdc_Char)0x25,  /* [6110] */
    (xdc_Char)0x64,  /* [6111] */
    (xdc_Char)0x2c,  /* [6112] */
    (xdc_Char)0x20,  /* [6113] */
    (xdc_Char)0x63,  /* [6114] */
    (xdc_Char)0x75,  /* [6115] */
    (xdc_Char)0x72,  /* [6116] */
    (xdc_Char)0x53,  /* [6117] */
    (xdc_Char)0x65,  /* [6118] */
    (xdc_Char)0x74,  /* [6119] */
    (xdc_Char)0x58,  /* [6120] */
    (xdc_Char)0x3a,  /* [6121] */
    (xdc_Char)0x20,  /* [6122] */
    (xdc_Char)0x25,  /* [6123] */
    (xdc_Char)0x64,  /* [6124] */
    (xdc_Char)0x2c,  /* [6125] */
    (xdc_Char)0x20,  /* [6126] */
    (xdc_Char)0x63,  /* [6127] */
    (xdc_Char)0x75,  /* [6128] */
    (xdc_Char)0x72,  /* [6129] */
    (xdc_Char)0x4d,  /* [6130] */
    (xdc_Char)0x61,  /* [6131] */
    (xdc_Char)0x73,  /* [6132] */
    (xdc_Char)0x6b,  /* [6133] */
    (xdc_Char)0x4c,  /* [6134] */
    (xdc_Char)0x6f,  /* [6135] */
    (xdc_Char)0x63,  /* [6136] */
    (xdc_Char)0x61,  /* [6137] */
    (xdc_Char)0x6c,  /* [6138] */
    (xdc_Char)0x3a,  /* [6139] */
    (xdc_Char)0x20,  /* [6140] */
    (xdc_Char)0x25,  /* [6141] */
    (xdc_Char)0x64,  /* [6142] */
    (xdc_Char)0x0,  /* [6143] */
    (xdc_Char)0x4c,  /* [6144] */
    (xdc_Char)0x44,  /* [6145] */
    (xdc_Char)0x5f,  /* [6146] */
    (xdc_Char)0x6e,  /* [6147] */
    (xdc_Char)0x6f,  /* [6148] */
    (xdc_Char)0x57,  /* [6149] */
    (xdc_Char)0x6f,  /* [6150] */
    (xdc_Char)0x72,  /* [6151] */
    (xdc_Char)0x6b,  /* [6152] */
    (xdc_Char)0x3a,  /* [6153] */
    (xdc_Char)0x20,  /* [6154] */
    (xdc_Char)0x63,  /* [6155] */
    (xdc_Char)0x6f,  /* [6156] */
    (xdc_Char)0x72,  /* [6157] */
    (xdc_Char)0x65,  /* [6158] */
    (xdc_Char)0x49,  /* [6159] */
    (xdc_Char)0x64,  /* [6160] */
    (xdc_Char)0x3a,  /* [6161] */
    (xdc_Char)0x20,  /* [6162] */
    (xdc_Char)0x25,  /* [6163] */
    (xdc_Char)0x64,  /* [6164] */
    (xdc_Char)0x2c,  /* [6165] */
    (xdc_Char)0x20,  /* [6166] */
    (xdc_Char)0x63,  /* [6167] */
    (xdc_Char)0x75,  /* [6168] */
    (xdc_Char)0x72,  /* [6169] */
    (xdc_Char)0x53,  /* [6170] */
    (xdc_Char)0x65,  /* [6171] */
    (xdc_Char)0x74,  /* [6172] */
    (xdc_Char)0x4c,  /* [6173] */
    (xdc_Char)0x6f,  /* [6174] */
    (xdc_Char)0x63,  /* [6175] */
    (xdc_Char)0x61,  /* [6176] */
    (xdc_Char)0x6c,  /* [6177] */
    (xdc_Char)0x3a,  /* [6178] */
    (xdc_Char)0x20,  /* [6179] */
    (xdc_Char)0x25,  /* [6180] */
    (xdc_Char)0x64,  /* [6181] */
    (xdc_Char)0x2c,  /* [6182] */
    (xdc_Char)0x20,  /* [6183] */
    (xdc_Char)0x63,  /* [6184] */
    (xdc_Char)0x75,  /* [6185] */
    (xdc_Char)0x72,  /* [6186] */
    (xdc_Char)0x53,  /* [6187] */
    (xdc_Char)0x65,  /* [6188] */
    (xdc_Char)0x74,  /* [6189] */
    (xdc_Char)0x58,  /* [6190] */
    (xdc_Char)0x3a,  /* [6191] */
    (xdc_Char)0x20,  /* [6192] */
    (xdc_Char)0x25,  /* [6193] */
    (xdc_Char)0x64,  /* [6194] */
    (xdc_Char)0x2c,  /* [6195] */
    (xdc_Char)0x20,  /* [6196] */
    (xdc_Char)0x63,  /* [6197] */
    (xdc_Char)0x75,  /* [6198] */
    (xdc_Char)0x72,  /* [6199] */
    (xdc_Char)0x4d,  /* [6200] */
    (xdc_Char)0x61,  /* [6201] */
    (xdc_Char)0x73,  /* [6202] */
    (xdc_Char)0x6b,  /* [6203] */
    (xdc_Char)0x4c,  /* [6204] */
    (xdc_Char)0x6f,  /* [6205] */
    (xdc_Char)0x63,  /* [6206] */
    (xdc_Char)0x61,  /* [6207] */
    (xdc_Char)0x6c,  /* [6208] */
    (xdc_Char)0x3a,  /* [6209] */
    (xdc_Char)0x20,  /* [6210] */
    (xdc_Char)0x25,  /* [6211] */
    (xdc_Char)0x64,  /* [6212] */
    (xdc_Char)0x0,  /* [6213] */
    (xdc_Char)0x4c,  /* [6214] */
    (xdc_Char)0x4d,  /* [6215] */
    (xdc_Char)0x5f,  /* [6216] */
    (xdc_Char)0x62,  /* [6217] */
    (xdc_Char)0x65,  /* [6218] */
    (xdc_Char)0x67,  /* [6219] */
    (xdc_Char)0x69,  /* [6220] */
    (xdc_Char)0x6e,  /* [6221] */
    (xdc_Char)0x3a,  /* [6222] */
    (xdc_Char)0x20,  /* [6223] */
    (xdc_Char)0x68,  /* [6224] */
    (xdc_Char)0x77,  /* [6225] */
    (xdc_Char)0x69,  /* [6226] */
    (xdc_Char)0x3a,  /* [6227] */
    (xdc_Char)0x20,  /* [6228] */
    (xdc_Char)0x30,  /* [6229] */
    (xdc_Char)0x78,  /* [6230] */
    (xdc_Char)0x25,  /* [6231] */
    (xdc_Char)0x78,  /* [6232] */
    (xdc_Char)0x2c,  /* [6233] */
    (xdc_Char)0x20,  /* [6234] */
    (xdc_Char)0x66,  /* [6235] */
    (xdc_Char)0x75,  /* [6236] */
    (xdc_Char)0x6e,  /* [6237] */
    (xdc_Char)0x63,  /* [6238] */
    (xdc_Char)0x3a,  /* [6239] */
    (xdc_Char)0x20,  /* [6240] */
    (xdc_Char)0x30,  /* [6241] */
    (xdc_Char)0x78,  /* [6242] */
    (xdc_Char)0x25,  /* [6243] */
    (xdc_Char)0x78,  /* [6244] */
    (xdc_Char)0x2c,  /* [6245] */
    (xdc_Char)0x20,  /* [6246] */
    (xdc_Char)0x70,  /* [6247] */
    (xdc_Char)0x72,  /* [6248] */
    (xdc_Char)0x65,  /* [6249] */
    (xdc_Char)0x54,  /* [6250] */
    (xdc_Char)0x68,  /* [6251] */
    (xdc_Char)0x72,  /* [6252] */
    (xdc_Char)0x65,  /* [6253] */
    (xdc_Char)0x61,  /* [6254] */
    (xdc_Char)0x64,  /* [6255] */
    (xdc_Char)0x3a,  /* [6256] */
    (xdc_Char)0x20,  /* [6257] */
    (xdc_Char)0x25,  /* [6258] */
    (xdc_Char)0x64,  /* [6259] */
    (xdc_Char)0x2c,  /* [6260] */
    (xdc_Char)0x20,  /* [6261] */
    (xdc_Char)0x69,  /* [6262] */
    (xdc_Char)0x6e,  /* [6263] */
    (xdc_Char)0x74,  /* [6264] */
    (xdc_Char)0x4e,  /* [6265] */
    (xdc_Char)0x75,  /* [6266] */
    (xdc_Char)0x6d,  /* [6267] */
    (xdc_Char)0x3a,  /* [6268] */
    (xdc_Char)0x20,  /* [6269] */
    (xdc_Char)0x25,  /* [6270] */
    (xdc_Char)0x64,  /* [6271] */
    (xdc_Char)0x2c,  /* [6272] */
    (xdc_Char)0x20,  /* [6273] */
    (xdc_Char)0x69,  /* [6274] */
    (xdc_Char)0x72,  /* [6275] */
    (xdc_Char)0x70,  /* [6276] */
    (xdc_Char)0x3a,  /* [6277] */
    (xdc_Char)0x20,  /* [6278] */
    (xdc_Char)0x30,  /* [6279] */
    (xdc_Char)0x78,  /* [6280] */
    (xdc_Char)0x25,  /* [6281] */
    (xdc_Char)0x78,  /* [6282] */
    (xdc_Char)0x0,  /* [6283] */
    (xdc_Char)0x4c,  /* [6284] */
    (xdc_Char)0x44,  /* [6285] */
    (xdc_Char)0x5f,  /* [6286] */
    (xdc_Char)0x65,  /* [6287] */
    (xdc_Char)0x6e,  /* [6288] */
    (xdc_Char)0x64,  /* [6289] */
    (xdc_Char)0x3a,  /* [6290] */
    (xdc_Char)0x20,  /* [6291] */
    (xdc_Char)0x68,  /* [6292] */
    (xdc_Char)0x77,  /* [6293] */
    (xdc_Char)0x69,  /* [6294] */
    (xdc_Char)0x3a,  /* [6295] */
    (xdc_Char)0x20,  /* [6296] */
    (xdc_Char)0x30,  /* [6297] */
    (xdc_Char)0x78,  /* [6298] */
    (xdc_Char)0x25,  /* [6299] */
    (xdc_Char)0x78,  /* [6300] */
    (xdc_Char)0x0,  /* [6301] */
    (xdc_Char)0x78,  /* [6302] */
    (xdc_Char)0x64,  /* [6303] */
    (xdc_Char)0x63,  /* [6304] */
    (xdc_Char)0x2e,  /* [6305] */
    (xdc_Char)0x0,  /* [6306] */
    (xdc_Char)0x72,  /* [6307] */
    (xdc_Char)0x75,  /* [6308] */
    (xdc_Char)0x6e,  /* [6309] */
    (xdc_Char)0x74,  /* [6310] */
    (xdc_Char)0x69,  /* [6311] */
    (xdc_Char)0x6d,  /* [6312] */
    (xdc_Char)0x65,  /* [6313] */
    (xdc_Char)0x2e,  /* [6314] */
    (xdc_Char)0x0,  /* [6315] */
    (xdc_Char)0x41,  /* [6316] */
    (xdc_Char)0x73,  /* [6317] */
    (xdc_Char)0x73,  /* [6318] */
    (xdc_Char)0x65,  /* [6319] */
    (xdc_Char)0x72,  /* [6320] */
    (xdc_Char)0x74,  /* [6321] */
    (xdc_Char)0x0,  /* [6322] */
    (xdc_Char)0x43,  /* [6323] */
    (xdc_Char)0x6f,  /* [6324] */
    (xdc_Char)0x72,  /* [6325] */
    (xdc_Char)0x65,  /* [6326] */
    (xdc_Char)0x0,  /* [6327] */
    (xdc_Char)0x44,  /* [6328] */
    (xdc_Char)0x65,  /* [6329] */
    (xdc_Char)0x66,  /* [6330] */
    (xdc_Char)0x61,  /* [6331] */
    (xdc_Char)0x75,  /* [6332] */
    (xdc_Char)0x6c,  /* [6333] */
    (xdc_Char)0x74,  /* [6334] */
    (xdc_Char)0x73,  /* [6335] */
    (xdc_Char)0x0,  /* [6336] */
    (xdc_Char)0x44,  /* [6337] */
    (xdc_Char)0x69,  /* [6338] */
    (xdc_Char)0x61,  /* [6339] */
    (xdc_Char)0x67,  /* [6340] */
    (xdc_Char)0x73,  /* [6341] */
    (xdc_Char)0x0,  /* [6342] */
    (xdc_Char)0x45,  /* [6343] */
    (xdc_Char)0x72,  /* [6344] */
    (xdc_Char)0x72,  /* [6345] */
    (xdc_Char)0x6f,  /* [6346] */
    (xdc_Char)0x72,  /* [6347] */
    (xdc_Char)0x0,  /* [6348] */
    (xdc_Char)0x47,  /* [6349] */
    (xdc_Char)0x61,  /* [6350] */
    (xdc_Char)0x74,  /* [6351] */
    (xdc_Char)0x65,  /* [6352] */
    (xdc_Char)0x0,  /* [6353] */
    (xdc_Char)0x4c,  /* [6354] */
    (xdc_Char)0x6f,  /* [6355] */
    (xdc_Char)0x67,  /* [6356] */
    (xdc_Char)0x0,  /* [6357] */
    (xdc_Char)0x4d,  /* [6358] */
    (xdc_Char)0x61,  /* [6359] */
    (xdc_Char)0x69,  /* [6360] */
    (xdc_Char)0x6e,  /* [6361] */
    (xdc_Char)0x0,  /* [6362] */
    (xdc_Char)0x4d,  /* [6363] */
    (xdc_Char)0x65,  /* [6364] */
    (xdc_Char)0x6d,  /* [6365] */
    (xdc_Char)0x6f,  /* [6366] */
    (xdc_Char)0x72,  /* [6367] */
    (xdc_Char)0x79,  /* [6368] */
    (xdc_Char)0x0,  /* [6369] */
    (xdc_Char)0x52,  /* [6370] */
    (xdc_Char)0x65,  /* [6371] */
    (xdc_Char)0x67,  /* [6372] */
    (xdc_Char)0x69,  /* [6373] */
    (xdc_Char)0x73,  /* [6374] */
    (xdc_Char)0x74,  /* [6375] */
    (xdc_Char)0x72,  /* [6376] */
    (xdc_Char)0x79,  /* [6377] */
    (xdc_Char)0x0,  /* [6378] */
    (xdc_Char)0x53,  /* [6379] */
    (xdc_Char)0x74,  /* [6380] */
    (xdc_Char)0x61,  /* [6381] */
    (xdc_Char)0x72,  /* [6382] */
    (xdc_Char)0x74,  /* [6383] */
    (xdc_Char)0x75,  /* [6384] */
    (xdc_Char)0x70,  /* [6385] */
    (xdc_Char)0x0,  /* [6386] */
    (xdc_Char)0x53,  /* [6387] */
    (xdc_Char)0x79,  /* [6388] */
    (xdc_Char)0x73,  /* [6389] */
    (xdc_Char)0x74,  /* [6390] */
    (xdc_Char)0x65,  /* [6391] */
    (xdc_Char)0x6d,  /* [6392] */
    (xdc_Char)0x0,  /* [6393] */
    (xdc_Char)0x53,  /* [6394] */
    (xdc_Char)0x79,  /* [6395] */
    (xdc_Char)0x73,  /* [6396] */
    (xdc_Char)0x53,  /* [6397] */
    (xdc_Char)0x74,  /* [6398] */
    (xdc_Char)0x64,  /* [6399] */
    (xdc_Char)0x0,  /* [6400] */
    (xdc_Char)0x54,  /* [6401] */
    (xdc_Char)0x65,  /* [6402] */
    (xdc_Char)0x78,  /* [6403] */
    (xdc_Char)0x74,  /* [6404] */
    (xdc_Char)0x0,  /* [6405] */
    (xdc_Char)0x74,  /* [6406] */
    (xdc_Char)0x69,  /* [6407] */
    (xdc_Char)0x2e,  /* [6408] */
    (xdc_Char)0x0,  /* [6409] */
    (xdc_Char)0x73,  /* [6410] */
    (xdc_Char)0x79,  /* [6411] */
    (xdc_Char)0x73,  /* [6412] */
    (xdc_Char)0x62,  /* [6413] */
    (xdc_Char)0x69,  /* [6414] */
    (xdc_Char)0x6f,  /* [6415] */
    (xdc_Char)0x73,  /* [6416] */
    (xdc_Char)0x2e,  /* [6417] */
    (xdc_Char)0x0,  /* [6418] */
    (xdc_Char)0x66,  /* [6419] */
    (xdc_Char)0x61,  /* [6420] */
    (xdc_Char)0x6d,  /* [6421] */
    (xdc_Char)0x69,  /* [6422] */
    (xdc_Char)0x6c,  /* [6423] */
    (xdc_Char)0x79,  /* [6424] */
    (xdc_Char)0x2e,  /* [6425] */
    (xdc_Char)0x0,  /* [6426] */
    (xdc_Char)0x61,  /* [6427] */
    (xdc_Char)0x72,  /* [6428] */
    (xdc_Char)0x6d,  /* [6429] */
    (xdc_Char)0x2e,  /* [6430] */
    (xdc_Char)0x0,  /* [6431] */
    (xdc_Char)0x49,  /* [6432] */
    (xdc_Char)0x6e,  /* [6433] */
    (xdc_Char)0x74,  /* [6434] */
    (xdc_Char)0x72,  /* [6435] */
    (xdc_Char)0x69,  /* [6436] */
    (xdc_Char)0x6e,  /* [6437] */
    (xdc_Char)0x73,  /* [6438] */
    (xdc_Char)0x69,  /* [6439] */
    (xdc_Char)0x63,  /* [6440] */
    (xdc_Char)0x73,  /* [6441] */
    (xdc_Char)0x53,  /* [6442] */
    (xdc_Char)0x75,  /* [6443] */
    (xdc_Char)0x70,  /* [6444] */
    (xdc_Char)0x70,  /* [6445] */
    (xdc_Char)0x6f,  /* [6446] */
    (xdc_Char)0x72,  /* [6447] */
    (xdc_Char)0x74,  /* [6448] */
    (xdc_Char)0x0,  /* [6449] */
    (xdc_Char)0x54,  /* [6450] */
    (xdc_Char)0x61,  /* [6451] */
    (xdc_Char)0x73,  /* [6452] */
    (xdc_Char)0x6b,  /* [6453] */
    (xdc_Char)0x53,  /* [6454] */
    (xdc_Char)0x75,  /* [6455] */
    (xdc_Char)0x70,  /* [6456] */
    (xdc_Char)0x70,  /* [6457] */
    (xdc_Char)0x6f,  /* [6458] */
    (xdc_Char)0x72,  /* [6459] */
    (xdc_Char)0x74,  /* [6460] */
    (xdc_Char)0x0,  /* [6461] */
    (xdc_Char)0x42,  /* [6462] */
    (xdc_Char)0x49,  /* [6463] */
    (xdc_Char)0x4f,  /* [6464] */
    (xdc_Char)0x53,  /* [6465] */
    (xdc_Char)0x0,  /* [6466] */
    (xdc_Char)0x6b,  /* [6467] */
    (xdc_Char)0x6e,  /* [6468] */
    (xdc_Char)0x6c,  /* [6469] */
    (xdc_Char)0x2e,  /* [6470] */
    (xdc_Char)0x0,  /* [6471] */
    (xdc_Char)0x43,  /* [6472] */
    (xdc_Char)0x6c,  /* [6473] */
    (xdc_Char)0x6f,  /* [6474] */
    (xdc_Char)0x63,  /* [6475] */
    (xdc_Char)0x6b,  /* [6476] */
    (xdc_Char)0x0,  /* [6477] */
    (xdc_Char)0x49,  /* [6478] */
    (xdc_Char)0x64,  /* [6479] */
    (xdc_Char)0x6c,  /* [6480] */
    (xdc_Char)0x65,  /* [6481] */
    (xdc_Char)0x0,  /* [6482] */
    (xdc_Char)0x49,  /* [6483] */
    (xdc_Char)0x6e,  /* [6484] */
    (xdc_Char)0x74,  /* [6485] */
    (xdc_Char)0x72,  /* [6486] */
    (xdc_Char)0x69,  /* [6487] */
    (xdc_Char)0x6e,  /* [6488] */
    (xdc_Char)0x73,  /* [6489] */
    (xdc_Char)0x69,  /* [6490] */
    (xdc_Char)0x63,  /* [6491] */
    (xdc_Char)0x73,  /* [6492] */
    (xdc_Char)0x0,  /* [6493] */
    (xdc_Char)0x45,  /* [6494] */
    (xdc_Char)0x76,  /* [6495] */
    (xdc_Char)0x65,  /* [6496] */
    (xdc_Char)0x6e,  /* [6497] */
    (xdc_Char)0x74,  /* [6498] */
    (xdc_Char)0x0,  /* [6499] */
    (xdc_Char)0x51,  /* [6500] */
    (xdc_Char)0x75,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x75,  /* [6503] */
    (xdc_Char)0x65,  /* [6504] */
    (xdc_Char)0x0,  /* [6505] */
    (xdc_Char)0x53,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x6d,  /* [6508] */
    (xdc_Char)0x61,  /* [6509] */
    (xdc_Char)0x70,  /* [6510] */
    (xdc_Char)0x68,  /* [6511] */
    (xdc_Char)0x6f,  /* [6512] */
    (xdc_Char)0x72,  /* [6513] */
    (xdc_Char)0x65,  /* [6514] */
    (xdc_Char)0x0,  /* [6515] */
    (xdc_Char)0x53,  /* [6516] */
    (xdc_Char)0x77,  /* [6517] */
    (xdc_Char)0x69,  /* [6518] */
    (xdc_Char)0x0,  /* [6519] */
    (xdc_Char)0x54,  /* [6520] */
    (xdc_Char)0x61,  /* [6521] */
    (xdc_Char)0x73,  /* [6522] */
    (xdc_Char)0x6b,  /* [6523] */
    (xdc_Char)0x0,  /* [6524] */
    (xdc_Char)0x68,  /* [6525] */
    (xdc_Char)0x65,  /* [6526] */
    (xdc_Char)0x61,  /* [6527] */
    (xdc_Char)0x70,  /* [6528] */
    (xdc_Char)0x73,  /* [6529] */
    (xdc_Char)0x2e,  /* [6530] */
    (xdc_Char)0x0,  /* [6531] */
    (xdc_Char)0x48,  /* [6532] */
    (xdc_Char)0x65,  /* [6533] */
    (xdc_Char)0x61,  /* [6534] */
    (xdc_Char)0x70,  /* [6535] */
    (xdc_Char)0x42,  /* [6536] */
    (xdc_Char)0x75,  /* [6537] */
    (xdc_Char)0x66,  /* [6538] */
    (xdc_Char)0x0,  /* [6539] */
    (xdc_Char)0x48,  /* [6540] */
    (xdc_Char)0x65,  /* [6541] */
    (xdc_Char)0x61,  /* [6542] */
    (xdc_Char)0x70,  /* [6543] */
    (xdc_Char)0x4d,  /* [6544] */
    (xdc_Char)0x65,  /* [6545] */
    (xdc_Char)0x6d,  /* [6546] */
    (xdc_Char)0x0,  /* [6547] */
    (xdc_Char)0x76,  /* [6548] */
    (xdc_Char)0x37,  /* [6549] */
    (xdc_Char)0x72,  /* [6550] */
    (xdc_Char)0x2e,  /* [6551] */
    (xdc_Char)0x0,  /* [6552] */
    (xdc_Char)0x76,  /* [6553] */
    (xdc_Char)0x69,  /* [6554] */
    (xdc_Char)0x6d,  /* [6555] */
    (xdc_Char)0x2e,  /* [6556] */
    (xdc_Char)0x0,  /* [6557] */
    (xdc_Char)0x48,  /* [6558] */
    (xdc_Char)0x77,  /* [6559] */
    (xdc_Char)0x69,  /* [6560] */
    (xdc_Char)0x0,  /* [6561] */
    (xdc_Char)0x65,  /* [6562] */
    (xdc_Char)0x78,  /* [6563] */
    (xdc_Char)0x63,  /* [6564] */
    (xdc_Char)0x2e,  /* [6565] */
    (xdc_Char)0x0,  /* [6566] */
    (xdc_Char)0x45,  /* [6567] */
    (xdc_Char)0x78,  /* [6568] */
    (xdc_Char)0x63,  /* [6569] */
    (xdc_Char)0x65,  /* [6570] */
    (xdc_Char)0x70,  /* [6571] */
    (xdc_Char)0x74,  /* [6572] */
    (xdc_Char)0x69,  /* [6573] */
    (xdc_Char)0x6f,  /* [6574] */
    (xdc_Char)0x6e,  /* [6575] */
    (xdc_Char)0x0,  /* [6576] */
    (xdc_Char)0x67,  /* [6577] */
    (xdc_Char)0x61,  /* [6578] */
    (xdc_Char)0x74,  /* [6579] */
    (xdc_Char)0x65,  /* [6580] */
    (xdc_Char)0x73,  /* [6581] */
    (xdc_Char)0x2e,  /* [6582] */
    (xdc_Char)0x0,  /* [6583] */
    (xdc_Char)0x47,  /* [6584] */
    (xdc_Char)0x61,  /* [6585] */
    (xdc_Char)0x74,  /* [6586] */
    (xdc_Char)0x65,  /* [6587] */
    (xdc_Char)0x48,  /* [6588] */
    (xdc_Char)0x77,  /* [6589] */
    (xdc_Char)0x69,  /* [6590] */
    (xdc_Char)0x0,  /* [6591] */
    (xdc_Char)0x47,  /* [6592] */
    (xdc_Char)0x61,  /* [6593] */
    (xdc_Char)0x74,  /* [6594] */
    (xdc_Char)0x65,  /* [6595] */
    (xdc_Char)0x4d,  /* [6596] */
    (xdc_Char)0x75,  /* [6597] */
    (xdc_Char)0x74,  /* [6598] */
    (xdc_Char)0x65,  /* [6599] */
    (xdc_Char)0x78,  /* [6600] */
    (xdc_Char)0x0,  /* [6601] */
    (xdc_Char)0x68,  /* [6602] */
    (xdc_Char)0x61,  /* [6603] */
    (xdc_Char)0x6c,  /* [6604] */
    (xdc_Char)0x2e,  /* [6605] */
    (xdc_Char)0x0,  /* [6606] */
    (xdc_Char)0x43,  /* [6607] */
    (xdc_Char)0x61,  /* [6608] */
    (xdc_Char)0x63,  /* [6609] */
    (xdc_Char)0x68,  /* [6610] */
    (xdc_Char)0x65,  /* [6611] */
    (xdc_Char)0x0,  /* [6612] */
    (xdc_Char)0x43,  /* [6613] */
    (xdc_Char)0x61,  /* [6614] */
    (xdc_Char)0x63,  /* [6615] */
    (xdc_Char)0x68,  /* [6616] */
    (xdc_Char)0x65,  /* [6617] */
    (xdc_Char)0x4e,  /* [6618] */
    (xdc_Char)0x75,  /* [6619] */
    (xdc_Char)0x6c,  /* [6620] */
    (xdc_Char)0x6c,  /* [6621] */
    (xdc_Char)0x0,  /* [6622] */
    (xdc_Char)0x74,  /* [6623] */
    (xdc_Char)0x6d,  /* [6624] */
    (xdc_Char)0x73,  /* [6625] */
    (xdc_Char)0x35,  /* [6626] */
    (xdc_Char)0x37,  /* [6627] */
    (xdc_Char)0x30,  /* [6628] */
    (xdc_Char)0x2e,  /* [6629] */
    (xdc_Char)0x0,  /* [6630] */
    (xdc_Char)0x74,  /* [6631] */
    (xdc_Char)0x69,  /* [6632] */
    (xdc_Char)0x6d,  /* [6633] */
    (xdc_Char)0x65,  /* [6634] */
    (xdc_Char)0x72,  /* [6635] */
    (xdc_Char)0x73,  /* [6636] */
    (xdc_Char)0x2e,  /* [6637] */
    (xdc_Char)0x0,  /* [6638] */
    (xdc_Char)0x72,  /* [6639] */
    (xdc_Char)0x74,  /* [6640] */
    (xdc_Char)0x69,  /* [6641] */
    (xdc_Char)0x2e,  /* [6642] */
    (xdc_Char)0x0,  /* [6643] */
    (xdc_Char)0x54,  /* [6644] */
    (xdc_Char)0x69,  /* [6645] */
    (xdc_Char)0x6d,  /* [6646] */
    (xdc_Char)0x65,  /* [6647] */
    (xdc_Char)0x72,  /* [6648] */
    (xdc_Char)0x0,  /* [6649] */
    (xdc_Char)0x74,  /* [6650] */
    (xdc_Char)0x69,  /* [6651] */
    (xdc_Char)0x2e,  /* [6652] */
    (xdc_Char)0x73,  /* [6653] */
    (xdc_Char)0x79,  /* [6654] */
    (xdc_Char)0x73,  /* [6655] */
    (xdc_Char)0x62,  /* [6656] */
    (xdc_Char)0x69,  /* [6657] */
    (xdc_Char)0x6f,  /* [6658] */
    (xdc_Char)0x73,  /* [6659] */
    (xdc_Char)0x2e,  /* [6660] */
    (xdc_Char)0x6b,  /* [6661] */
    (xdc_Char)0x6e,  /* [6662] */
    (xdc_Char)0x6c,  /* [6663] */
    (xdc_Char)0x2e,  /* [6664] */
    (xdc_Char)0x54,  /* [6665] */
    (xdc_Char)0x61,  /* [6666] */
    (xdc_Char)0x73,  /* [6667] */
    (xdc_Char)0x6b,  /* [6668] */
    (xdc_Char)0x2e,  /* [6669] */
    (xdc_Char)0x49,  /* [6670] */
    (xdc_Char)0x64,  /* [6671] */
    (xdc_Char)0x6c,  /* [6672] */
    (xdc_Char)0x65,  /* [6673] */
    (xdc_Char)0x54,  /* [6674] */
    (xdc_Char)0x61,  /* [6675] */
    (xdc_Char)0x73,  /* [6676] */
    (xdc_Char)0x6b,  /* [6677] */
    (xdc_Char)0x0,  /* [6678] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[52] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x189e,  /* left */
        (xdc_Bits16)0x18a3,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18ac,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18b3,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18b8,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18c1,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18c7,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18cd,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18d2,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18d6,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18db,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18e2,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18eb,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18f3,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18fa,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1901,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1906,  /* left */
        (xdc_Bits16)0x190a,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1913,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x191b,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1920,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1932,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x193e,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1943,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1948,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x194e,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1953,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x195e,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1964,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x196a,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1974,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1978,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x197d,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0x1984,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0x198c,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1994,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1999,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x199e,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x19a2,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19a7,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x19b1,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x19b8,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x19c0,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x19ca,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x19cf,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x19d5,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x18b3,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x199e,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x19df,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x18b3,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x19e7,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x19ef,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x19f4,  /* right */
    },  /* [51] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1a17;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x34;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)__prms, __eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.hal.CacheNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_CacheNull_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_hal_CacheNull_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_hal_CacheNull_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_hal_CacheNull_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_hal_CacheNull_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_hal_CacheNull_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_hal_CacheNull_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_hal_CacheNull_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_hal_CacheNull_wait();
}


/*
 * ======== ti.sysbios.hal.Core_CoreProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.v7r.tms570.Core */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_CoreProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_v7r_tms570_Core_Module__startupDone__S();
}

/* getId__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_getId__E( void )
{
    return ti_sysbios_family_arm_v7r_tms570_Core_getId();
}

/* interruptCore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_interruptCore__E( xdc_UInt coreId )
{
    ti_sysbios_family_arm_v7r_tms570_Core_interruptCore(coreId);
}

/* lock__E */
xdc_IArg ti_sysbios_hal_Core_CoreProxy_lock__E( void )
{
    return ti_sysbios_family_arm_v7r_tms570_Core_lock();
}

/* unlock__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_unlock__E( void )
{
    ti_sysbios_family_arm_v7r_tms570_Core_unlock();
}

/* hwiDisable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiDisable__E( void )
{
    return ti_sysbios_family_arm_v7r_tms570_Core_hwiDisable();
}

/* hwiEnable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiEnable__E( void )
{
    return ti_sysbios_family_arm_v7r_tms570_Core_hwiEnable();
}

/* hwiRestore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_hwiRestore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_v7r_tms570_Core_hwiRestore(key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.v7r.vim.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_v7r_vim_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_v7r_vim_Hwi_Params *)__prms, __eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_v7r_vim_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getFunc((ti_sysbios_family_arm_v7r_vim_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_setFunc((ti_sysbios_family_arm_v7r_vim_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getHookContext((ti_sysbios_family_arm_v7r_vim_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_setHookContext((ti_sysbios_family_arm_v7r_vim_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_getIrp((ti_sysbios_family_arm_v7r_vim_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)__prms, __eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.rti.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_rti_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_timers_rti_Timer_create(id, tickFxn, (const ti_sysbios_timers_rti_Timer_Params *)__prms, __eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_timers_rti_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_rti_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_rti_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_rti_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_rti_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_rti_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getMaxTicks((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_rti_Timer_setNextTick((ti_sysbios_timers_rti_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_rti_Timer_start((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_rti_Timer_stop((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_rti_Timer_setPeriod((ti_sysbios_timers_rti_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_rti_Timer_setPeriodMicroSecs((ti_sysbios_timers_rti_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getPeriod((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getCount((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_rti_Timer_getFreq((ti_sysbios_timers_rti_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_rti_Timer_getFunc((ti_sysbios_timers_rti_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_rti_Timer_setFunc((ti_sysbios_timers_rti_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_rti_Timer_trigger((ti_sysbios_timers_rti_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getExpiredCounts((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_rti_Timer_getExpiredTicks((ti_sysbios_timers_rti_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_timers_rti_Timer_getCurrentTick((ti_sysbios_timers_rti_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getDefaultStackSize();
}

/* getCheckValueAddr__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_getCheckValueAddr__E( xdc_Ptr curTask )
{
    return ti_sysbios_family_arm_TaskSupport_getCheckValueAddr(curTask);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)__prms, __eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)__prms, __eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)__prms, __eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysStd_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysStd_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysStd_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysStd_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysStd_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysStd_ready();
}


/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_v7r_vim_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_v7r_vim_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_v7r_vim_Hwi___S1) - sizeof(ti_sysbios_family_arm_v7r_vim_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_v7r_vim_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_v7r_vim_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapBuf_Object2__ s0; char c; } ti_sysbios_heaps_HeapBuf___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__DESC__C, ".const:ti_sysbios_heaps_HeapBuf_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapBuf_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapBuf_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapBuf_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapBuf___S1) - sizeof(ti_sysbios_heaps_HeapBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapBuf_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapBuf_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.timers.rti.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_rti_Timer_Object2__ s0; char c; } ti_sysbios_timers_rti_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__DESC__C, ".const:ti_sysbios_timers_rti_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_rti_Timer_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_timers_rti_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_rti_Timer___S1) - sizeof(ti_sysbios_timers_rti_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_rti_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_timers_rti_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_rti_Timer_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.exc.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_exc_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.v7r.tms570.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_v7r_tms570_Core_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_v7r_tms570_Core_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.v7r.vim.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_arm_v7r_vim_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_arm_v7r_vim_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_arm_v7r_vim_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_arm_v7r_vim_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_arm_v7r_vim_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_v7r_vim_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_v7r_vim_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_v7r_vim_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_v7r_vim_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_v7r_vim_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_v7r_vim_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_v7r_vim_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_v7r_vim_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_v7r_vim_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_v7r_vim_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_v7r_vim_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_v7r_vim_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_v7r_vim_Hwi_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_v7r_vim_Hwi_Object__ * const)ti_sysbios_family_arm_v7r_vim_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_v7r_vim_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_v7r_vim_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_v7r_vim_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_v7r_vim_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_family_arm_v7r_vim_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_v7r_vim_Hwi_Params __prms;
    ti_sysbios_family_arm_v7r_vim_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_v7r_vim_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_arm_v7r_vim_Hwi_Handle ti_sysbios_family_arm_v7r_vim_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_v7r_vim_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_Params __prms;
    ti_sysbios_family_arm_v7r_vim_Hwi_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_v7r_vim_Hwi_Instance_init__E(__obj, intNum, hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_family_arm_v7r_vim_Hwi_construct(ti_sysbios_family_arm_v7r_vim_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_v7r_vim_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_v7r_vim_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_v7r_vim_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_v7r_vim_Hwi_destruct(ti_sysbios_family_arm_v7r_vim_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_v7r_vim_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_v7r_vim_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_v7r_vim_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_v7r_vim_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_v7r_vim_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_v7r_vim_Hwi_delete(ti_sysbios_family_arm_v7r_vim_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_v7r_vim_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateHwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateHwi_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateHwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateHwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateHwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateHwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateHwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateHwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateHwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateHwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateHwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateHwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateHwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateHwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateMutex_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateMutex_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateMutex_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateMutex_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateMutex_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateMutex_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateMutex_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateMutex_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateMutex_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateMutex_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateMutex_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateMutex_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateMutex_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateMutex_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.CacheNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_CacheNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_hal_CacheNull_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.hal.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Core_CoreProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Core_CoreProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Core_CoreProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Hwi_Object__ * const)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__obj, intNum, hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapBuf_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapBuf_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapBuf_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapBuf_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapBuf_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapBuf_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapBuf_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapBuf_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapBuf_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapBuf_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapBuf_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__S( void )
{
    return ti_sysbios_heaps_HeapBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapBuf_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapBuf_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapBuf_Object__ * const)ti_sysbios_heaps_HeapBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapBuf_Params __prms;
    ti_sysbios_heaps_HeapBuf_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E(__obj, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_heaps_HeapBuf_Handle ti_sysbios_heaps_HeapBuf_create( const ti_sysbios_heaps_HeapBuf_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapBuf_Params __prms;
    ti_sysbios_heaps_HeapBuf_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E(__obj, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_heaps_HeapBuf_construct(ti_sysbios_heaps_HeapBuf_Struct *__obj, const ti_sysbios_heaps_HeapBuf_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapBuf_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E((xdc_Ptr)__obj, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_heaps_HeapBuf_destruct(ti_sysbios_heaps_HeapBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, *((ti_sysbios_heaps_HeapBuf_Object**)instp), (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_heaps_HeapBuf_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapBuf_delete(ti_sysbios_heaps_HeapBuf_Handle *instp)
{
    ti_sysbios_heaps_HeapBuf_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Clock_Object__ * const)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__obj, __args->clockFxn, __args->timeout, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__obj, clockFxn, timeout, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Event_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Event_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Event_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Event_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Event_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Event_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Event_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Event_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Event_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Event_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Event_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Event_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Event_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Event_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Event_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Event_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Event_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Event_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Event_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Event_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Event_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Event_Object__ * const)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Queue_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Queue_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Queue_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Queue_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Queue_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Queue_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Queue_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Queue_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Queue_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Queue_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Queue_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Queue_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Queue_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Queue_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Queue_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Queue_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Queue_Object__ * const)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Semaphore_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Semaphore_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Semaphore_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Semaphore_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Semaphore_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Semaphore_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Semaphore_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Semaphore_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Semaphore_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Semaphore_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Semaphore_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Semaphore_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Semaphore_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Semaphore_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Semaphore_Object__ * const)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__obj, __args->count, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__obj;


    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__obj, count, &__prms);
    return __obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Swi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Swi_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Swi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Swi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Swi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Swi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Swi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Swi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Swi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Swi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Swi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Swi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Swi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Swi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Swi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Swi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__obj, __args->swiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__obj, swiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Task_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Task_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Task_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Task_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Task_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Task_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Task_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Task_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Task_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Task_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Task_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Task_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Task_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Task_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Task_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Task_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Task_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Task_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Task_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Task_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Task_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__obj, __args->fxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__obj, fxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.rti.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_timers_rti_Timer_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_timers_rti_Timer_Module__id *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_timers_rti_Timer_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_timers_rti_Timer_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_timers_rti_Timer_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_timers_rti_Timer_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_timers_rti_Timer_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_timers_rti_Timer_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_timers_rti_Timer_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_timers_rti_Timer_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_timers_rti_Timer_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_timers_rti_Timer_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_timers_rti_Timer_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_rti_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_rti_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_rti_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_rti_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_rti_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_timers_rti_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_timers_rti_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_rti_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_timers_rti_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_timers_rti_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_timers_rti_Timer_Object__count__C == 0) {
        return NULL;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_timers_rti_Timer_Object__ * const)ti_sysbios_timers_rti_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_rti_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_rti_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_rti_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    const ti_sysbios_timers_rti_Timer_Args__create *__args = __aa;
    ti_sysbios_timers_rti_Timer_Params __prms;
    ti_sysbios_timers_rti_Timer_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E(__obj, __args->id, __args->tickFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_timers_rti_Timer_Handle ti_sysbios_timers_rti_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_rti_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_timers_rti_Timer_Params __prms;
    ti_sysbios_timers_rti_Timer_Object *__obj;

    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);
    if (__obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E(__obj, id, tickFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* construct */
void ti_sysbios_timers_rti_Timer_construct(ti_sysbios_timers_rti_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_rti_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_timers_rti_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, __eb);

    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_timers_rti_Timer_destruct(ti_sysbios_timers_rti_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_rti_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, *((ti_sysbios_timers_rti_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_timers_rti_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_timers_rti_Timer_delete(ti_sysbios_timers_rti_Timer_Handle *instp)
{
    ti_sysbios_timers_rti_Timer_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Main_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Main_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Memory_HeapProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Memory_HeapProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Memory_HeapProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Memory_HeapProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysStd SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysStd_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_System_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_System_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_System_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_System_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (const void *)&xdc_runtime_SysStd_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_heaps_HeapMem_Handle heap0 = (ti_sysbios_heaps_HeapMem_Handle)((ti_sysbios_heaps_HeapMem_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0]);

