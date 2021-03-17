## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,er4ft linker.cmd package/cfg/mss_per4ft.oer4ft

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/mss_per4ft.xdl
	$(SED) 's"^\"\(package/cfg/mss_per4ftcfg.cmd\)\"$""\"C:/ti/mmwave_sdk_02_01_00_04/packages/ti/demo/lvds_stream/xwr68xx/mss_configPkg_xwr68xx/\1\""' package/cfg/mss_per4ft.xdl > $@
	-$(SETDATE) -r:max package/cfg/mss_per4ft.h compiler.opt compiler.opt.defs
