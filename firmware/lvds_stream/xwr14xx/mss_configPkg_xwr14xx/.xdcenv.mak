#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_53_02_00/packages;C:/ti/mmwave_sdk_02_01_00_04/packages
override XDCROOT = C:/ti/xdctools_3_50_04_43_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_53_02_00/packages;C:/ti/mmwave_sdk_02_01_00_04/packages;C:/ti/xdctools_3_50_04_43_core/packages;..
HOSTOS = Windows
endif
