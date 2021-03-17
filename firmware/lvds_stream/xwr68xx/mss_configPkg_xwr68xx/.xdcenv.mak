#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_73_01_01/packages;C:/ti/mmwave_sdk_03_02_00_04/packages
override XDCROOT = C:/ti/xdctools_3_50_08_24_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_73_01_01/packages;C:/ti/mmwave_sdk_03_02_00_04/packages;C:/ti/xdctools_3_50_08_24_core/packages;..
HOSTOS = Windows
endif
