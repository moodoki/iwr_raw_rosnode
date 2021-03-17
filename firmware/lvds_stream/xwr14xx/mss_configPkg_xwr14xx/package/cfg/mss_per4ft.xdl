/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.platforms.cortexR package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"C:\ti\mmwave_sdk_02_01_00_04\packages\ti\drivers\test\lvds_stream\xwr14xx\mss_configPkg_xwr14xx\package\cfg\mss_per4ft.oer4ft"
-l"C:\ti\mmwave_sdk_02_01_00_04\packages\ti\drivers\test\lvds_stream\xwr14xx\mss_configPkg_xwr14xx\package\cfg\mss_per4ft.src\sysbios\sysbios.aer4ft"
-l"C:\ti\bios_6_53_02_00\packages\ti\targets\arm\rtsarm\lib\ti.targets.arm.rtsarm.aer4ft"
-l"C:\ti\bios_6_53_02_00\packages\ti\targets\arm\rtsarm\lib\boot.aer4ft"
-l"C:\ti\bios_6_53_02_00\packages\ti\targets\arm\rtsarm\lib\auto_init.aer4ft"

--retain="*(xdc.meta)"

/* C6x Elf symbols */
--symbol_map __TI_STACK_SIZE=__STACK_SIZE
--symbol_map __TI_STACK_BASE=__stack
--symbol_map _stack=__stack


--args 0x0
-heap  0x0
-stack 0x1000

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.arm.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from ti.targets.arm.rtsarm (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from ti.sysbios.family.arm (ti/sysbios/family/arm/linkcmd.xdt): */
--retain "*(.vecs)"

/* Content from xdc.services.getset (null): */

/* Content from ti.sysbios.rts (ti/sysbios/rts/linkcmd.xdt): */

/* Content from xdc.runtime.knl (null): */

/* Content from ti.sysbios.family.arm.a15 (null): */

/* Content from xdc.platform (null): */

/* Content from ti.catalog.arm.cortexr4 (null): */

/* Content from ti.catalog (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.catalog.arm.cortexr5 (null): */

/* Content from ti.platforms.cortexR (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.hal (null): */

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.timers.rti (null): */

/* Content from ti.sysbios.family.arm.exc (null): */

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.heaps (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from ti.sysbios.family.arm.v7r.vim (ti/sysbios/family/arm/v7r/vim/linkcmd.xdt): */


ti_sysbios_family_arm_v7r_vim_Hwi_vim = 4294966764;

/* Content from ti.sysbios.family.arm.v7r.tms570 (ti/sysbios/family/arm/v7r/tms570/linkcmd.xdt): */
--diag_suppress=10063

/* Content from mss_configPkg_xwr14xx (null): */

/* Content from xdc.services.io (null): */



/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;


SECTIONS
{
    .myFiqStack: load > DATA_RAM
    .vecs: load > VECTORS



    xdc.meta: type = COPY
}
