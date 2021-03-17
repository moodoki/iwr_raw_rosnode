###################################################################################
# LVDS Stream: DSS Makefile
###################################################################################
.PHONY: dssTest dssTestClean

###################################################################################
# Setup the VPATH:
###################################################################################
vpath %.c $(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/test/common
vpath %.c $(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/test/lvds_stream
vpath %.c $(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/test/lvds_stream/$(MMWAVE_SDK_DEVICE_TYPE)

###################################################################################
# Additional libraries which are required to build the DEMO:
###################################################################################
DSS_LVDS_STREAM_STD_LIBS = $(C674_COMMON_STD_LIB)						\
   			-llibedma_$(MMWAVE_SDK_DEVICE_TYPE).$(C674_LIB_EXT)			\
   			-llibmailbox_$(MMWAVE_SDK_DEVICE_TYPE).$(C674_LIB_EXT)		\
   			-llibcbuff_$(MMWAVE_SDK_DEVICE_TYPE).$(C674_LIB_EXT)		\
   			-llibadcbuf_$(MMWAVE_SDK_DEVICE_TYPE).$(C674_LIB_EXT)		\
   			-llibhsiheader_$(MMWAVE_SDK_DEVICE_TYPE).$(C674_LIB_EXT)

DSS_LVDS_STREAM_LOC_LIBS = $(C674_COMMON_LOC_LIB)						\
   			-i$(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/edma/lib			\
   			-i$(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/mailbox/lib	    	\
	        -i$(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/cbuff/lib			\
	        -i$(MMWAVE_SDK_INSTALL_PATH)/ti/drivers/adcbuf/lib			\
	        -i$(MMWAVE_SDK_INSTALL_PATH)/ti/utils/hsiheader/lib

###################################################################################
# Stream Wave Demo
###################################################################################
DSS_LVDS_STREAM_CFG       = $(MMWAVE_SDK_DEVICE_TYPE)/dss.cfg
DSS_LVDS_STREAM_CONFIGPKG = $(MMWAVE_SDK_DEVICE_TYPE)/dss_configPkg_$(MMWAVE_SDK_DEVICE_TYPE)
DSS_LVDS_STREAM_MAP       = $(MMWAVE_SDK_DEVICE_TYPE)/$(MMWAVE_SDK_DEVICE_TYPE)_lvds_stream_dss.map
DSS_LVDS_STREAM_OUT       = $(MMWAVE_SDK_DEVICE_TYPE)/$(MMWAVE_SDK_DEVICE_TYPE)_lvds_stream_dss.$(C674_EXE_EXT)
DSS_LVDS_STREAM_CMD       = $(MMWAVE_SDK_DEVICE_TYPE)/dss_linker.cmd
DSS_LVDS_STREAM_SOURCES   = dss.c					\
						    framework_core.c 		\
							framework_ipc.c			\
							framework_ipc_local.c 	\
							framework_listlib.c 	\
							framework_$(MMWAVE_SDK_DEVICE_TYPE).c		\
							lvds_stream.c
DSS_LVDS_STREAM_DEPENDS   = $(addprefix $(PLATFORM_OBJDIR)/, $(DSS_LVDS_STREAM_SOURCES:.c=.$(C674_DEP_EXT)))
DSS_LVDS_STREAM_OBJECTS   = $(addprefix $(PLATFORM_OBJDIR)/, $(DSS_LVDS_STREAM_SOURCES:.c=.$(C674_OBJ_EXT)))

###################################################################################
# RTSC Configuration:
###################################################################################
dssStreamDemoRTSC: $(DSP_CFG)
	@echo 'Configuring RTSC packages...'
	$(XS) --xdcpath="$(XDCPATH)" xdc.tools.configuro $(C674_XSFLAGS) -o $(DSS_LVDS_STREAM_CONFIGPKG) $(DSS_LVDS_STREAM_CFG)
	@echo 'Finished configuring packages'
	@echo ' '

###################################################################################
# Build the Stream Wave Demo
###################################################################################
dssTest: BUILD_CONFIGPKG=$(DSS_LVDS_STREAM_CONFIGPKG)
dssTest: C674_CFLAGS += --cmd_file=$(BUILD_CONFIGPKG)/compiler.opt
dssTest: buildDirectories dssStreamDemoRTSC $(DSS_LVDS_STREAM_OBJECTS)
	$(C674_LD) $(C674_LDFLAGS) $(DSS_LVDS_STREAM_LOC_LIBS) $(DSS_LVDS_STREAM_STD_LIBS) 					\
	-l$(DSS_LVDS_STREAM_CONFIGPKG)/linker.cmd --map_file=$(DSS_LVDS_STREAM_MAP) $(DSS_LVDS_STREAM_OBJECTS) 	\
	$(PLATFORM_C674X_LINK_CMD) $(DSS_LVDS_STREAM_CMD) $(C674_LD_RTS_FLAGS) -o $(DSS_LVDS_STREAM_OUT)
	@echo '******************************************************************************'
	@echo 'Built the DSS LVDS Stream'
	@echo '******************************************************************************'

###################################################################################
# Cleanup the Stream Wave Demo
###################################################################################
dssTestClean:
	@echo 'Cleaning the DSS LVDS Stream Objects'
	@rm -f $(DSS_LVDS_STREAM_OBJECTS) $(DSS_LVDS_STREAM_MAP) $(DSS_LVDS_STREAM_OUT) \
			$(DSS_LVDS_STREAM_DEPENDS) $(DSS_LVDS_STREAM_ROV_XS)
	@echo 'Cleaning the DSS LVDS Stream RTSC package'
	@$(DEL) $(DSS_LVDS_STREAM_CONFIGPKG)
	@$(DEL) $(PLATFORM_OBJDIR)

###################################################################################
# Dependency handling
###################################################################################
-include $(DSS_LVDS_STREAM_DEPENDS)

