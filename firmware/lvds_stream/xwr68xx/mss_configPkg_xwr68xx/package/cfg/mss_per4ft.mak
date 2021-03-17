#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.R4Ft{1,0,16.9,6
#
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/mss_per4ft.oer4ft.dep
package/cfg/mss_per4ft.oer4ft.dep: ;
endif

package/cfg/mss_per4ft.oer4ft: | .interfaces
package/cfg/mss_per4ft.oer4ft: package/cfg/mss_per4ft.c package/cfg/mss_per4ft.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cler4ft $< ...
	$(ti.targets.arm.elf.R4Ft.rootDir)/bin/armcl -c  --enum_type=int -qq -pdsw225 -ms --fp_mode=strict --code_state=16 --float_support=vfpv3d16 --endian=little -mv7R4 --abi=eabi -eo.oer4ft -ea.ser4ft   -Dxdc_cfg__xheader__='"mss_configPkg_xwr68xx/package/cfg/mss_per4ft.h"'  -Dxdc_target_name__=R4Ft -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_6 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.R4Ft.rootDir)/include  -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oer4ft $< -C   --enum_type=int -qq -pdsw225 -ms --fp_mode=strict --code_state=16 --float_support=vfpv3d16 --endian=little -mv7R4 --abi=eabi -eo.oer4ft -ea.ser4ft   -Dxdc_cfg__xheader__='"mss_configPkg_xwr68xx/package/cfg/mss_per4ft.h"'  -Dxdc_target_name__=R4Ft -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_6 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.R4Ft.rootDir)/include  -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mss_per4ft.oer4ft: export C_DIR=
package/cfg/mss_per4ft.oer4ft: PATH:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)
package/cfg/mss_per4ft.oer4ft: Path:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)

package/cfg/mss_per4ft.ser4ft: | .interfaces
package/cfg/mss_per4ft.ser4ft: package/cfg/mss_per4ft.c package/cfg/mss_per4ft.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cler4ft -n $< ...
	$(ti.targets.arm.elf.R4Ft.rootDir)/bin/armcl -c -n -s --symdebug:none --enum_type=int -qq -pdsw225 --code_state=16 --float_support=vfpv3d16 --endian=little -mv7R4 --abi=eabi -eo.oer4ft -ea.ser4ft   -Dxdc_cfg__xheader__='"mss_configPkg_xwr68xx/package/cfg/mss_per4ft.h"'  -Dxdc_target_name__=R4Ft -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_6 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.R4Ft.rootDir)/include  -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oer4ft $< -C  -n -s --symdebug:none --enum_type=int -qq -pdsw225 --code_state=16 --float_support=vfpv3d16 --endian=little -mv7R4 --abi=eabi -eo.oer4ft -ea.ser4ft   -Dxdc_cfg__xheader__='"mss_configPkg_xwr68xx/package/cfg/mss_per4ft.h"'  -Dxdc_target_name__=R4Ft -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_6 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.R4Ft.rootDir)/include  -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/mss_per4ft.ser4ft: export C_DIR=
package/cfg/mss_per4ft.ser4ft: PATH:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)
package/cfg/mss_per4ft.ser4ft: Path:=$(ti.targets.arm.elf.R4Ft.rootDir)/bin/;$(PATH)

clean,er4ft ::
	-$(RM) package/cfg/mss_per4ft.oer4ft
	-$(RM) package/cfg/mss_per4ft.ser4ft

mss.per4ft: package/cfg/mss_per4ft.oer4ft package/cfg/mss_per4ft.mak

clean::
	-$(RM) package/cfg/mss_per4ft.mak