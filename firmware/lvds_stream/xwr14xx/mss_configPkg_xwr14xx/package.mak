#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = mss_configPkg_xwr14xx
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
C:/ti/xdctools_3_50_04_43_core/packages/xdc/utils.js:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/utils.js
C:/ti/xdctools_3_50_04_43_core/packages/xdc/xdc.tci:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/xdc.tci
C:/ti/xdctools_3_50_04_43_core/packages/xdc/template.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/template.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/om2.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/om2.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/xmlgen.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/xmlgen.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/xmlgen2.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/xmlgen2.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/Warnings.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/Warnings.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/IPackage.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/IPackage.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/package.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/package.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/global/Clock.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/global/Clock.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/global/Trace.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/global/Trace.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/bld.js:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/bld.js
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/BuildEnvironment.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/PackageContents.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/PackageContents.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/_gen.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/_gen.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Library.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Library.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Executable.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Executable.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Repository.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Repository.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Configuration.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Configuration.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Script.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Script.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Manifest.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Manifest.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Utils.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/Utils.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget2.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget2.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget3.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITarget3.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/ITargetFilter.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/package.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/bld/package.xs
package.mak: config.bld
C:/ti/bios_6_53_02_00/packages/ti/targets/ITarget.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/ITarget.xs
C:/ti/bios_6_53_02_00/packages/ti/targets/C28_large.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/C28_large.xs
C:/ti/bios_6_53_02_00/packages/ti/targets/C28_float.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/C28_float.xs
C:/ti/bios_6_53_02_00/packages/ti/targets/package.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/package.xs
C:/ti/bios_6_53_02_00/packages/ti/targets/arm/elf/IArm.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/arm/elf/IArm.xs
C:/ti/bios_6_53_02_00/packages/ti/targets/arm/elf/package.xs:
package.mak: C:/ti/bios_6_53_02_00/packages/ti/targets/arm/elf/package.xs
package.mak: package.bld
C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/compiler.opt.xdt:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/compiler.opt.xdt
C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/io/File.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/io/File.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/io/package.xs:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/services/io/package.xs
C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/compiler.defs.xdt:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/compiler.defs.xdt
C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt
C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/package.xs.xdt:
package.mak: C:/ti/xdctools_3_50_04_43_core/packages/xdc/tools/configuro/template/package.xs.xdt
endif

ti.targets.arm.elf.R4Ft.rootDir ?= C:/ti/ti-cgt-arm_16.9.6.LTS
ti.targets.arm.elf.packageBase ?= C:/ti/bios_6_53_02_00/packages/ti/targets/arm/elf/
.PRECIOUS: $(XDCCFGDIR)/%.oer4ft
.PHONY: all,er4ft .dlls,er4ft .executables,er4ft test,er4ft
all,er4ft: .executables,er4ft
.executables,er4ft: .libraries,er4ft
.executables,er4ft: .dlls,er4ft
.dlls,er4ft: .libraries,er4ft
.libraries,er4ft: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,er4ft
	@$(ECHO) xdc .executables,er4ft
	@$(ECHO) xdc .libraries,er4ft
	@$(ECHO) xdc .dlls,er4ft


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_mss_configPkg_xwr14xx.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package mss_configPkg_xwr14xx" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

.dlls,er4ft .dlls: mss.per4ft

-include package/cfg/mss_per4ft.mak
-include package/cfg/mss_per4ft.cfg.mak
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/mss_per4ft.dep
endif
mss.per4ft: package/cfg/mss_per4ft.xdl
	@


ifeq (,$(wildcard .libraries,er4ft))
mss.per4ft package/cfg/mss_per4ft.c: .libraries,er4ft
endif

package/cfg/mss_per4ft.c package/cfg/mss_per4ft.h package/cfg/mss_per4ft.xdl: override _PROG_NAME := mss.xer4ft
package/cfg/mss_per4ft.c package/cfg/mss_per4ft.xdl: override _PROG_XSOPTS = -DMMWAVE_SDK_DEVICE_TYPE=xwr14xx
package/cfg/mss_per4ft.c: package/cfg/mss_per4ft.cfg
package/cfg/mss_per4ft.xdc.inc: package/cfg/mss_per4ft.xdl
package/cfg/mss_per4ft.xdl package/cfg/mss_per4ft.c: .interfaces

clean:: clean,er4ft
	-$(RM) package/cfg/mss_per4ft.cfg
	-$(RM) package/cfg/mss_per4ft.dep
	-$(RM) package/cfg/mss_per4ft.c
	-$(RM) package/cfg/mss_per4ft.xdc.inc

clean,er4ft::
	-$(RM) mss.per4ft
.executables,er4ft .executables: mss.xer4ft

mss.xer4ft: |mss.per4ft

-include package/cfg/mss.xer4ft.mak
mss.xer4ft: package/cfg/mss_per4ft.oer4ft 
	$(RM) $@
	@$(MSG) lnker4ft $@ ...
	$(RM) $(XDCCFGDIR)/$@.map
	$(ti.targets.arm.elf.R4Ft.rootDir)/bin/armlnk -fs $(XDCCFGDIR)$(dir $@). -q -u _c_int00 --silicon_version=7R4 --strict_compatibility=on  -o $@ package/cfg/mss_per4ft.oer4ft   package/cfg/mss_per4ft.xdl  -w -c -m $(XDCCFGDIR)/$@.map -l $(ti.targets.arm.elf.R4Ft.rootDir)/lib/libc.a
	
mss.xer4ft: export C_DIR=
mss.xer4ft: PATH:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)
mss.xer4ft: Path:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)

mss.test test,er4ft test: mss.xer4ft.test

mss.xer4ft.test:: mss.xer4ft
ifeq (,$(_TESTLEVEL))
	@$(MAKE) -R -r --no-print-directory -f $(XDCROOT)/packages/xdc/bld/xdc.mak _TESTLEVEL=1 mss.xer4ft.test
else
	@$(MSG) running $<  ...
	$(call EXEC.mss.xer4ft, ) 
endif

clean,er4ft::
	-$(RM) $(wildcard .tmp,mss.xer4ft,*)


clean:: clean,er4ft

clean,er4ft::
	-$(RM) mss.xer4ft
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
mss_per4ft.oer4ft,copy : package/cfg/mss_per4ft.oer4ft
mss_per4ft.ser4ft,copy : package/cfg/mss_per4ft.ser4ft

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,mss_configPkg_xwr14xx
ifeq (,$(MK_NOGENDEPS))
-include package/rel/mss_configPkg_xwr14xx.tar.dep
endif
package/rel/mss_configPkg_xwr14xx/mss_configPkg_xwr14xx/package/package.rel.xml: package/package.bld.xml
package/rel/mss_configPkg_xwr14xx/mss_configPkg_xwr14xx/package/package.rel.xml: package/build.cfg
package/rel/mss_configPkg_xwr14xx/mss_configPkg_xwr14xx/package/package.rel.xml: package/package.xdc.inc
package/rel/mss_configPkg_xwr14xx/mss_configPkg_xwr14xx/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

mss_configPkg_xwr14xx.tar: package/rel/mss_configPkg_xwr14xx.xdc.inc package/rel/mss_configPkg_xwr14xx/mss_configPkg_xwr14xx/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/mss_configPkg_xwr14xx.xdc.inc,package/rel/mss_configPkg_xwr14xx.tar.dep)


release release,mss_configPkg_xwr14xx: all mss_configPkg_xwr14xx.tar
clean:: .clean
	-$(RM) mss_configPkg_xwr14xx.tar
	-$(RM) package/rel/mss_configPkg_xwr14xx.xdc.inc
	-$(RM) package/rel/mss_configPkg_xwr14xx.tar.dep

clean:: .clean
	-$(RM) .libraries $(wildcard .libraries,*)
clean:: 
	-$(RM) .dlls $(wildcard .dlls,*)
#
# The following clean rule removes user specified
# generated files or directories.
#

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard package))
    $(shell $(MKDIR) package)
endif
ifeq (,$(wildcard package/cfg))
    $(shell $(MKDIR) package/cfg)
endif
ifeq (,$(wildcard package/lib))
    $(shell $(MKDIR) package/lib)
endif
ifeq (,$(wildcard package/rel))
    $(shell $(MKDIR) package/rel)
endif
ifeq (,$(wildcard package/internal))
    $(shell $(MKDIR) package/internal)
endif
endif
clean::
	-$(RMDIR) package

include custom.mak