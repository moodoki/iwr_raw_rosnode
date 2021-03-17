###################################################################################
# LVDS Stream Test makefile
###################################################################################

include $(MMWAVE_SDK_INSTALL_PATH)/ti/common/mmwave_sdk.mak

ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr14xx)
include ./$(MMWAVE_SDK_DEVICE_TYPE)/mss.mak
LVDS_STREAM_BIN = $(MMWAVE_SDK_DEVICE_TYPE)_lvds_stream.bin
endif

ifneq ($(filter $(MMWAVE_SDK_DEVICE_TYPE),xwr16xx xwr18xx xwr68xx), )
include ./$(MMWAVE_SDK_DEVICE_TYPE)/mss.mak
include ./$(MMWAVE_SDK_DEVICE_TYPE)/dss.mak

LVDS_STREAM_BIN = $(MMWAVE_SDK_DEVICE_TYPE)_lvds_stream.bin
endif

ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr14xx)
RADARSS_IMAGE_BIN = $(XWR14XX_RADARSS_IMAGE_BIN)
else ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr16xx)
RADARSS_IMAGE_BIN = $(XWR16XX_RADARSS_IMAGE_BIN)
else ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr18xx)
RADARSS_IMAGE_BIN = $(XWR18XX_RADARSS_IMAGE_BIN)
else ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr68xx)
RADARSS_IMAGE_BIN = $(XWR68XX_RADARSS_IMAGE_BIN)
else
$(error Unsupported device $(MMWAVE_SDK_DEVICE).)
endif

###################################################################################
# Standard Targets which need to be implemented by each mmWave SDK module. This
# plugs into the release scripts.
###################################################################################

.PHONY: all clean test testClean mssTest mssTestClean help

ifeq ($(MMWAVE_SDK_DEVICE_TYPE),xwr14xx)
testClean: 	mssTestClean
	@$(DEL) $(LVDS_STREAM_BIN)
test: 		mssTest
	@$(GENERATE_METAIMAGE) $(LVDS_STREAM_BIN) $(SHMEM_ALLOC) $(MSS_LVDS_STREAM_UNIT_TEST_OUT) $(RADARSS_IMAGE_BIN) NULL
endif

ifneq ($(filter $(MMWAVE_SDK_DEVICE_TYPE),xwr16xx xwr18xx xwr68xx), )
testClean: 	mssTestClean dssTestClean
	@$(DEL) $(LVDS_STREAM_BIN)

test: mssTest dssTest
	@$(GENERATE_METAIMAGE) $(LVDS_STREAM_BIN) 0x02000006 $(MSS_LVDS_STREAM_UNIT_TEST_OUT) $(RADARSS_IMAGE_BIN) $(DSS_LVDS_STREAM_OUT)
endif

# Clean: This cleans all the objects
clean:      testClean

# This will build the lvds_stream test
all: test

# Help: This displays the MAKEFILE Usage.
help:
	@echo '****************************************************************************************'
	@echo '* Makefile Targets for the Memory Capture test '
	@echo 'clean             -> Clean out all the objects'
	@echo 'test              -> Builds all the unit tests for the SOC'
	@echo 'testClean         -> Cleans all the Unit Tests for the SOC'
	@echo '****************************************************************************************'


