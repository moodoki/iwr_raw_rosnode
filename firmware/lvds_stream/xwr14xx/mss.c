/*
 *   @file  mss.c
 *
 *   @brief
 *      MSS Implementation of the LVDS Stream which executes on the XWR14xx
 *
 *  \par
 *  NOTE:
 *      (C) Copyright 2017 Texas Instruments, Inc.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** @mainpage       LVDS Stream Application
 *
 * The LVDS Stream application supports the following:-
 *  1. \ref TEST_FRAMEWORK
 *  2. \ref LVDS_STREAM
 *  3. XWR14xx: \ref MSS_XWR14_LVDS_STREAM_APP
 *  4. XWR16xx: \ref MSS_XWR16_LVDS_STREAM_APP and \ref DSS_XWR16_LVDS_STREAM_APP
 *  5. XWR16xx: \ref MSS_XWR18_LVDS_STREAM_APP and \ref DSS_XWR18_LVDS_STREAM_APP
 */

/** @defgroup MSS_XWR14_LVDS_STREAM_APP MSS LVDS Stream Application for XWR14xx
 *
 * ## Introduction #
 *
 * The MSS LVDS Stream application on the XWR14xx is responsible
 * for the following:-
 *  - Setup of the control path
 *      This is done via the MMWave Module.
 *  - Setup of the data path
 *      This is done via the Test Framework. The MSS is responsible for
 *      the execution of the data profile so the application loads the
 *      LVDS Stream Profile.
 *
 * The application initializes the modules for the control & data path.
 * This would imply the creation of the following tasks:-
 *
 * 1. mmWave Task: Responsible for the execution of the communication
 *    between the MSS & BSS. This would include the configuration of the
 *    BSS and handling any control notifications from the BSS. For more
 *    information please refer to the mmWave documentation.
 *
 * 2. Framework Task: This is the task which is responsible for the
 *    execution and configuration of the LVDS Stream Profile.
 *
 * At this time control & data tasks have been initialized and are
 * operational.
 *
 * ## Configuration #
 *
 * The application exposes a CLI which allows the system to be configured
 * with the required parameters. Example CLI scripts are located in the
 * same directory as the test code.
 *
 * The CLI configuration commands will configure and setup the mmWave
 * which in turn will configure the BSS.
 *
 * Once the mmWave link has been configured it is time to now configure
 * the Test Framework. The LVDS Stream profile exposes additional command
 * which are configured via the \ref TestFmk_ioctl. The configuration is
 * then finalized.
 *
 * ## Start #
 *
 * The data & control paths have now been configured. Before we can start
 * the mmWave sensor the Test Framework needs to notify the profile that
 * the configuration needs to be applied. Once the profile has been
 * successfully started the application can now start the mmWave sensor.
 * This will now cause the ADC Data to be received and the profile is
 * notified via the chirp ISR.
 *
 * ## Stop #
 *
 * There are two scenarios in which the Test Framework & Profile are
 * stopped:-
 *
 * 1. Frame Configuration is complete
 * 2. CLI sensorStop command is activated
 *
 * In both the scenarios the BSS will inform the application via the
 * event RL_RF_AE_FRAME_END_SB. At this time we can stop the data path
 * using the \ref TestFmk_stop.
 */

/**************************************************************************
 *************************** Include Files ********************************
 **************************************************************************/

/* Standard Include Files. */
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/* BIOS/XDC Include Files. */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/IHeap.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/heaps/HeapBuf.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/family/arm/v7r/vim/Hwi.h>

/* mmWave SDK Include Files: */
#include <ti/common/sys_common.h>
#include <ti/common/mmwave_error.h>
#include <ti/drivers/soc/soc.h>
#include <ti/drivers/esm/esm.h>
#include <ti/drivers/pinmux/pinmux.h>
#include <ti/drivers/uart/UART.h>
#include <ti/drivers/crc/crc.h>
#include <ti/drivers/mailbox/mailbox.h>
#include <ti/drivers/adcbuf/ADCBuf.h>
#include <ti/drivers/edma/edma.h>
#include <ti/drivers/osal/DebugP.h>
#include <ti/drivers/osal/HwiP.h>
#include <ti/control/mmwave/mmwave.h>
#include <ti/control/mmwavelink/mmwavelink.h>
#include <ti/control/mmwavelink/include/rl_driver.h>
#include <ti/utils/cli/cli.h>
#include <ti/drivers/test/common/framework.h>
#include <ti/drivers/test/lvds_stream/lvds_stream.h>
#include <ti/drivers/test/lvds_stream/xwr14xx/mss_header.h>
#include <ti/utils/hsiheader/hsiheader.h>

/** @addtogroup MSS_XWR14_LVDS_STREAM_APP
 @{ */

/**************************************************************************
 *************************** Local Definitions ****************************
 **************************************************************************/

/**
 * @brief   Task Priority for the mmWave control module:
 */
#define MSS_APP_MMWAVE_CTRL_TASK_PRIORITY       5U

/**
 * @brief   Task Priority for the Test Framework module:
 *  This should always have a lower priority in the system than the control
 *  task priority.
 */
#define MSS_APP_TEST_FRAMEWORK_TASK_PRIORITY    (MSS_APP_MMWAVE_CTRL_TASK_PRIORITY - 1U)

/**************************************************************************
 *************************** Local Functions ******************************
 **************************************************************************/

static int32_t LVDSStream_eventCallbackFxn
(
    uint16_t    msgId,
    uint16_t    sbId,
    uint16_t    sbLen,
    uint8_t*    payload
);
static void LVDSStream_reportFxn
(
    TestFmk_Report  reportType,
    int32_t         errCode,
    uint32_t        arg0,
    uint32_t        arg1
);
static void LVDSStream_mmWaveCtrlTask(UArg arg0, UArg arg1);
static void LVDSStream_fmkTask(UArg arg0, UArg arg1);
static void LVDSStream_initTask(UArg arg0, UArg arg1);
static int32_t LVDSStream_configCQ (LVDSStream_MCB* ptrLVDSStreamMCB, uint16_t* cqSize, int32_t* errCode);

/**************************************************************************
 *************************** Global Definitions ***************************
 **************************************************************************/

/**
 * @brief
 *  Global Variable for tracking information required by the LVDS Stream
 *  application
 */
LVDSStream_MCB    gLVDSStreamMCB;

/**
 * @brief   This is the SW Buffer1 which is streamed out if the CLI configuration
 * enables software streaming.
 */
#pragma DATA_SECTION(gSwBuffer1, ".swBuffer1");
#pragma DATA_ALIGN(gSwBuffer1, 8);
uint16_t gSwBuffer1[64] =
{
    200U,
    201U,
    202U,
    203U,
    204U,
    205U,
    206U,
    207U,
    208U,
    209U,
    210U,
    211U,
};

/**
 * @brief   This is the SW Buffer2 which is streamed out if the CLI configuration
 * enables software streaming.
 */
#pragma DATA_SECTION(gSwBuffer2, ".swBuffer2");
#pragma DATA_ALIGN(gSwBuffer2, 8);
uint16_t gSwBuffer2[64] =
{
    300U,
    301U,
    302U,
    303U,
    304U,
    305U,
    306U,
    307U,
    308U,
    309U,
    310U,
    311U,
};

/**************************************************************************
 ************************** LVDS Stream Functions *************************
 **************************************************************************/

/**
 *  @b Description
 *  @n
 *      Registered event function which is invoked when an event from the
 *      BSS is received.
 *
 *  @param[in]  msgId
 *      Message Identifier
 *  @param[in]  sbId
 *      Subblock identifier
 *  @param[in]  sbLen
 *      Length of the subblock
 *  @param[in]  payload
 *      Pointer to the payload buffer
 *
 *  @retval
 *      Always return 0 to pass the event message to the remote domain
 */
static int32_t LVDSStream_eventCallbackFxn
(
    uint16_t    msgId,
    uint16_t    sbId,
    uint16_t    sbLen,
    uint8_t*    payload
)
{
    int32_t     errCode;
    uint16_t    asyncSB = RL_GET_SBID_FROM_UNIQ_SBID(sbId);

    /* Process the received message: */
    switch (msgId)
    {
        case RL_RF_ASYNC_EVENT_MSG:
        {
            /* Received Asychronous Message: */
            switch (asyncSB)
            {
                case RL_RF_AE_CPUFAULT_SB:
                case RL_RF_AE_ESMFAULT_SB:
                case RL_RF_AE_ANALOG_FAULT_SB:
                {
                    /* Fault has been reported by the BSS */
                    DebugP_assert (0);
                    break;
                }
                case RL_RF_AE_INITCALIBSTATUS_SB:
                {
                    /* This event should be handled by mmwave internally, ignore the event here */
                    break;
                }
                case RL_RF_AE_FRAME_TRIGGER_RDY_SB:
                {
                    gLVDSStreamMCB.stats.frameTrigEvt++;
                    break;
                }
                case RL_RF_AE_MON_TIMING_FAIL_REPORT_SB:
                {
                    gLVDSStreamMCB.stats.monRepEvt++;
                    break;
                }
                case RL_RF_AE_RUN_TIME_CALIB_REPORT_SB:
                {
                    gLVDSStreamMCB.stats.calibRepEvt++;
                    break;
                }
                case RL_RF_AE_FRAME_END_SB:
                {
                    /******************************************************************
                     * The ASYNC Event can be generated on either of the following
                     * conditions:-
                     *  1. Sensor Stop CLI command has been issued which has caused
                     *     the MMWave_stop to be issued and the BSS has acknowledged
                     *     this
                     *  2. The configuration has caused all the frames to be sent out.
                     *
                     * In both the cases the profile can be stopped.
                     ******************************************************************/
                    if (TestFmk_stop (gLVDSStreamMCB.fmkHandle, &errCode) < 0)
                    {
                        System_printf ("Error: Unable to stop the profile [Error: %d]\n", errCode);
                        return -1;
                    }
                    break;
                }
                default:
                {
                    DebugP_assert (0);
                    break;
                }
            }
            break;
        }
        default:
        {
            DebugP_assert (0);
            break;
        }
    }
    return 0;
}

/**
 *  @b Description
 *  @n
 *      This is the registered Test Framework Report function. This is invoked by the
 *      Test Framework to report the status
 *
 *  @param[in]  reportType
 *      Report Type
 *  @param[in]  errCode
 *      Error code associated with the status event.
 *  @param[in]  arg0
 *      Optional argument. This is status specific so please refer to the documentation
 *      about the status
 *  @param[in]  arg1
 *      Optional argument. This is status specific so please refer to the documentation
 *      about the status
 *
 *  @retval
 *      Not Applicable.
 */
static void LVDSStream_reportFxn
(
    TestFmk_Report  reportType,
    int32_t         errCode,
    uint32_t        arg0,
    uint32_t        arg1
)
{
    MMWave_CalibrationCfg       calibrationCfg;

    /* Process the Report Status:*/
    switch (reportType)
    {
        case TestFmk_Report_PROFILE_LOADED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been loaded successfully. */
                System_printf ("Debug: Profile has been loaded successfully\n");
            }
            else
            {
                /* Error: Unable to load the profile. */
                System_printf ("Error: Unable to load the profile [Error code %d]\n", errCode);
            }
            break;
        }
        case TestFmk_Report_PROFILE_OPENED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been opened successfully. */
                System_printf ("Debug: Profile has been opened successfully\n");
            }
            else
            {
                /* Error: Unable to open the profile. */
                System_printf ("Error: Unable to open the profile [Error code %d]\n", errCode);
            }
            break;
        }
        case TestFmk_Report_PROFILE_CLOSED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been closed successfully. */
                System_printf ("Debug: Profile has been closed successfully\n");
            }
            else
            {
                /* Error: Unable to close the profile. */
                System_printf ("Error: Unable to close the profile [Error code %d]\n", errCode);
            }
            break;
        }
        case TestFmk_Report_SET_CFG:
        {
            break;
        }
        case TestFmk_Report_IOCTL:
        {
            break;
        }
        case TestFmk_Report_PROFILE_STARTED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been configured successfully. */
                System_printf ("Debug: Profile has been started successfully\n");

                /* Initialize the calibration configuration: */
                memset ((void*)&calibrationCfg, 0, sizeof(MMWave_CalibrationCfg));

                /* Populate the calibration configuration: */
                calibrationCfg.dfeDataOutputMode                          = MMWave_DFEDataOutputMode_FRAME;
                calibrationCfg.u.chirpCalibrationCfg.enableCalibration    = true;
                calibrationCfg.u.chirpCalibrationCfg.enablePeriodicity    = true;
                calibrationCfg.u.chirpCalibrationCfg.periodicTimeInFrames = 10U;

                /* Start the mmWave: This will start the sensor. */
                if (MMWave_start (gLVDSStreamMCB.ctrlHandle, &calibrationCfg, &errCode) < 0)
                {
                    System_printf ("Error: Unable to start the mmWave module [Error: %d]\n", errCode);
                    return;
                }
            }
            else
            {
                /* Error: Unable to start the profile. */
                System_printf ("Error: Unable to start the profile [Error code %d]\n", errCode);
            }
            break;
        }
        case TestFmk_Report_PROFILE_STOPPED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been closed successfully. */
                System_printf ("Debug: Profile has been stopped successfully\n");
            }
            else
            {
                /* Error: Unable to close the profile. */
                System_printf ("Error: Unable to stop the profile [Error code %d]\n", errCode);
            }
            break;
        }
        case TestFmk_Report_PROFILE_UNLOADED:
        {
            /* Was there an error reported? */
            if (errCode == 0)
            {
                /* Success: The profile has been unloaded successfully. */
                System_printf ("Debug: Profile has been unloaded successfully\n");
            }
            else
            {
                /* Error: Unable to unload the profile. */
                System_printf ("Error: Unable to unload the profile [Error code %d]\n", errCode);
            }
            break;
        }
        default:
        {
            DebugP_assert (0);
            break;
        }
    }
    return;
}

/**
 *  @b Description
 *  @n
 *      The task is used to provide an execution context for the mmWave
 *      control task
 *
 *  @retval
 *      Not Applicable.
 */
static void LVDSStream_mmWaveCtrlTask(UArg arg0, UArg arg1)
{
    int32_t errCode;

    while (1)
    {
        /* Execute the mmWave control module: */
        if (MMWave_execute (gLVDSStreamMCB.ctrlHandle, &errCode) < 0)
            System_printf ("Error: mmWave control execution failed [Error code %d]\n", errCode);
    }
}

/**
 *  @b Description
 *  @n
 *      The task is used to provide an execution context for the Test Framework
 *
 *  @retval
 *      Not Applicable.
 */
static void LVDSStream_fmkTask(UArg arg0, UArg arg1)
{
    int32_t             errCode;
    TestFmk_Result      result;

    while (1)
    {
        /* Execute the Test Framework module: */
        if (TestFmk_execute (gLVDSStreamMCB.fmkHandle, &result, &errCode) < 0)
            System_printf ("Error: Test Framework execution failed [Error code %d]\n", errCode);
    }
}

/**
 *  @b Description
 *  @n
 *      The function is used to configure the chirp quality
 *
 *  @param[in]  ptrLVDSStreamMCB
 *      Pointer to the LVDS Stream MCB
 *  @param[out] cq1Size
 *      Size of the CQ1
 *  @param[out] cq2Size
 *      Size of the CQ2
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t LVDSStream_configCQ
(
    LVDSStream_MCB*     ptrLVDSStreamMCB,
    uint16_t*           cqSize,
    int32_t*            errCode
)
{
    int32_t             retVal = MINUS_ONE;
    rlRxSatMonConf_t    rxSatMonitorCfg;
    rlSigImgMonConf_t   signalImgbandMonitorCfg;
    rlMonAnaEnables_t   analogMonCfg;

    /* Initialize the size of the Chirp Quality: */
    *cqSize = 0U;
    *(cqSize + 1U) = 0U;
    *(cqSize + 2U) = 0U;

    /**********************************************************************************
     * The LVDS Stream hardcodes the Rx Saturation Monitoring configuration:
     **********************************************************************************/
    memset ((void*)&rxSatMonitorCfg, 0, sizeof(rlRxSatMonConf_t));

    /* Populate the configuration: */
    rxSatMonitorCfg.profileIndx             = 0U;
    rxSatMonitorCfg.satMonSel               = 3U;
    rxSatMonitorCfg.primarySliceDuration    = 4U;
    rxSatMonitorCfg.numSlices               = 127U;
    rxSatMonitorCfg.rxChannelMask           = 0U;

    /* Configure the Rx Saturation Monitor: */
    *errCode = rlRfRxIfSatMonConfig (RL_DEVICE_MAP_INTERNAL_BSS, &rxSatMonitorCfg);
    if (*errCode != RL_RET_CODE_OK)
    {
        System_printf ("Error: Rx Saturation Monitor failed [Error = %d]\n", *errCode);
        goto exit;
    }

    /* Setup the size of the CQ1 */
    *(cqSize + 1U) = HSIHeader_toCBUFFUnits(2 * rxSatMonitorCfg.numSlices);

    /**********************************************************************************
     * The LVDS Stream hardcodes the Signal & Image Band Monitoring configuration:
     **********************************************************************************/
    memset ((void*)&signalImgbandMonitorCfg, 0, sizeof(rlSigImgMonConf_t));

    /* Populate the configuration: */
    signalImgbandMonitorCfg.profileIndx          = 0U;
    signalImgbandMonitorCfg.numSlices            = 111U;
    signalImgbandMonitorCfg.timeSliceNumSamples  = 4U;

    /* Configure the Signal & Image Band Monitor: */
    *errCode = rlRfRxSigImgMonConfig(RL_DEVICE_MAP_INTERNAL_BSS, &signalImgbandMonitorCfg);
    if (*errCode != RL_RET_CODE_OK)
    {
        System_printf ("Error: Signal & Image Band Monitor failed [Error = %d]\n", *errCode);
        goto exit;
    }

    /* Setup the size of the CQ2 */
    *(cqSize + 2U) = HSIHeader_toCBUFFUnits(signalImgbandMonitorCfg.numSlices);

    /**********************************************************************************
     * The LVDS Stream hardcodes the Analog Monitoring:
     **********************************************************************************/
    memset ((void*)&analogMonCfg, 0, sizeof(rlMonAnaEnables_t));

    /* Always enable the receive saturation & signal & image band:-
     *  As per the mmWave Link documentation:-
     *      24 - RX_IF_SATURATION_MONITOR_EN
     *      25 - RX_SIG_IMG_BAND_MONITORING_EN */
    analogMonCfg.enMask = CSL_FMKR (24U, 24U, 1U) |
                          CSL_FMKR (25U, 25U, 1U);

    /* Configure the Analog Monitor: */
    *errCode = rlRfAnaMonConfig(RL_DEVICE_MAP_INTERNAL_BSS, &analogMonCfg);
    if (*errCode != RL_RET_CODE_OK)
    {
        System_printf ("Error: Analog Monitor failed [Error = %d]\n", *errCode);
        goto exit;
    }

    /* CQ was configured successfully */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      The function is invoked from the CLI once the "sensorStart"
 *      command is received. This is an indication that all the CLI
 *      configuration commands have been completed. We should have
 *      all the information in the "configuration" block. The
 *      function will apply all these configurations
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t LVDSStream_start (void)
{
    rlDevHsiClk_t                           hsiClkgs;
    MMWave_ErrorLevel                       errorLevel;
    int16_t                                 mmWaveError;
    int16_t                                 subSysError;
    uint32_t                                numChirpsPerFrame;
    int32_t                                 errCode;
    uint16_t                                cqSize[ADCBufMMWave_CQType_MAX_CQ];
    int32_t                                 retVal;
    TestFmk_LVDSStreamProfileUserBufCfg     lvdsStreamProfileUserCfg;

    /* Do we need to open the mmWave or is this already open? */
    if (gLVDSStreamMCB.isMMWaveControlOpened == false)
    {
        /******************************************************************
         * Open the mmWave Module:
         ******************************************************************/
        gLVDSStreamMCB.cfg.openCfg.freqLimitLow  = 760U;
        gLVDSStreamMCB.cfg.openCfg.freqLimitHigh = 810U;

        /* No Custom calibration: */
        gLVDSStreamMCB.cfg.openCfg.useCustomCalibration        = false;
        gLVDSStreamMCB.cfg.openCfg.customCalibrationEnableMask = 0x0;

        /* Open the mmWave Module: */
        if (MMWave_open (gLVDSStreamMCB.ctrlHandle, &gLVDSStreamMCB.cfg.openCfg, NULL, &errCode) < 0)
        {
            MMWave_decodeError (errCode, &errorLevel, &mmWaveError, &subSysError);
            System_printf ("Error: Unable to open the mmWave module [Error: %d mmWave: %d SubSys: %d]\n",
                            errCode, mmWaveError, subSysError);
            return -1;
        }
        System_printf ("Debug: mmWave has been opened\n");

        /******************************************************************
         * Open the Test Framework profile:
         ******************************************************************/
        if (TestFmk_open (gLVDSStreamMCB.fmkHandle, &gLVDSStreamMCB.cfg.openCfg, &errCode) < 0)
        {
            System_printf ("Error: Unable to open the test framework profile [Error: %d]\n", errCode);
            return -1;
        }
        gLVDSStreamMCB.isMMWaveControlOpened = true;
    }

    /******************************************************************
     * Configure the mmWave Module:
     ******************************************************************/
    if (MMWave_config (gLVDSStreamMCB.ctrlHandle, &gLVDSStreamMCB.cfg.ctrlCfg, &errCode) < 0)
    {
        MMWave_decodeError (errCode, &errorLevel, &mmWaveError, &subSysError);
        System_printf ("Error: Unable to configure the mmWave module [Error: %d mmWave: %d SubSys: %d]\n",
                        errCode, mmWaveError, subSysError);
        return -1;
    }

    /*************************************************************************************
     * Configure the Chirp Quality:
     *************************************************************************************/
    if (LVDSStream_configCQ (&gLVDSStreamMCB, &cqSize[0], &errCode) < 0)
    {
        System_printf ("Error: CQ configuration failed [Error: %d]\n", errCode);
        return -1;
    }

    /*************************************************************************************
     * Setup the HSI Clock through the mmWave Link:
     *************************************************************************************/
    memset ((void*)&hsiClkgs, 0, sizeof(rlDevHsiClk_t));

    /* Setup the HSI Clock as per the Radar Interface Document:
     * - This is set to 600Mhtz DDR Mode */
    hsiClkgs.hsiClk = 0x9;

    /* Setup the HSI in the radar link: */
    retVal = rlDeviceSetHsiClk(RL_DEVICE_MAP_CASCADED_1, &hsiClkgs);
    if (retVal != RL_RET_CODE_OK)
    {
        /* Error: Unable to set the HSI clock */
        System_printf ("Error: Setting up the HSI Clock in BSS Failed [Error %d]\n", retVal);
        return -1;
    }

    /* Do we need to add the delay for the Data Card? */
    if (gLVDSStreamMCB.isDataCardDelayCompleted == false)
    {
        /* YES: As per the documentation we need to add the delay: */
        Task_sleep(HSI_DCA_MIN_DELAY_MSEC);

        /* We dont need to add anymore delays: */
        gLVDSStreamMCB.isDataCardDelayCompleted = true;
    }

    /******************************************************************
     * Profile specific configuration:
     * - Setup the number of chirps per frame
     ******************************************************************/
    numChirpsPerFrame = (gLVDSStreamMCB.cfg.ctrlCfg.u.frameCfg.frameCfg.chirpEndIdx -
                         gLVDSStreamMCB.cfg.ctrlCfg.u.frameCfg.frameCfg.chirpStartIdx + 1) *
                         gLVDSStreamMCB.cfg.ctrlCfg.u.frameCfg.frameCfg.numLoops;

    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       LVDS_STREAM_PROFILE_SET_NUM_CHIRPS_PER_FRAME,
                       &numChirpsPerFrame,
                       sizeof (uint32_t),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to configure the number of chirps [Error: %d]\n", errCode);
        return -1;
    }

    /******************************************************************
     * Profile specific configuration:
     * - Setup the HW Session Data Format
     ******************************************************************/
    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       LVDS_STREAM_PROFILE_SET_HW_SESSION_DATA_FMT,
                       &gLVDSStreamMCB.cfg.hwSessionDataFormat,
                       sizeof (CBUFF_DataFmt),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to configure the number of chirps [Error: %d]\n", errCode);
        return -1;
    }

    /******************************************************************
     * Profile specific configuration:
     * - Enable/Disable Header Mode:
     ******************************************************************/
    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       LVDS_STREAM_PROFILE_SET_HEADER_MODE,
                       &gLVDSStreamMCB.cfg.enableHeaderMode,
                       sizeof(gLVDSStreamMCB.cfg.enableHeaderMode),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to configure the header mode [Error: %d]\n", errCode);
        return -1;
    }

    /******************************************************************
     * Chirp Quality:
     * - CQ Size
     ******************************************************************/
    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       LVDS_STREAM_PROFILE_SET_CQ_SIZE,
                       &cqSize,
                       sizeof(cqSize),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to setup the CQ Size [Error: %d]\n", errCode);
        return -1;
    }

    /******************************************************************
     * Profile specific configuration:
     * - Enable/Disable User Buffer Mode:
     ******************************************************************/
    if (gLVDSStreamMCB.cfg.enableUserBuffer == true)
    {
        /* User Buffer is enabled: */
        lvdsStreamProfileUserCfg.ptrUserBuffer1  = (uint8_t*)&gSwBuffer1;
        lvdsStreamProfileUserCfg.sizeUserBuffer1 = sizeof(gSwBuffer1);
        lvdsStreamProfileUserCfg.ptrUserBuffer2  = (uint8_t*)&gSwBuffer2;
        lvdsStreamProfileUserCfg.sizeUserBuffer2 = sizeof(gSwBuffer2);
    }
    else
    {
        /* User Buffer is disabled: */
        lvdsStreamProfileUserCfg.ptrUserBuffer1  = NULL;
        lvdsStreamProfileUserCfg.sizeUserBuffer1 = 0U;
        lvdsStreamProfileUserCfg.ptrUserBuffer2  = NULL;
        lvdsStreamProfileUserCfg.sizeUserBuffer2 = 0U;
    }
    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       LVDS_STREAM_PROFILE_SET_USERBUF_STREAM,
                       &lvdsStreamProfileUserCfg,
                       sizeof (lvdsStreamProfileUserCfg),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to configure the user buffer [Error: %d]\n", errCode);
        return -1;
    }

    /******************************************************************
     * Finalize the configuration:
     ******************************************************************/
    if (TestFmk_ioctl (gLVDSStreamMCB.fmkHandle,
                       TEST_FMK_CMD_SET_CONFIG,
                       &gLVDSStreamMCB.cfg.testFmkCfg,
                       sizeof(gLVDSStreamMCB.cfg.testFmkCfg),
                       &errCode) < 0)
    {
        System_printf ("Error: Unable to finalize the configuration [Error: %d]\n", errCode);
        return -1;
    }
    System_printf ("Debug: Finalized the LVDS Stream configuration. Starting the sensor...\n");

    /******************************************************************
     * Start the Profile:
     ******************************************************************/
    if (TestFmk_start (gLVDSStreamMCB.fmkHandle, &errCode) < 0)
    {
        System_printf ("Error: Unable to start the profile [Error: %d]\n", errCode);
        return -1;
    }

    /********************************************************************************
     * The profile is sent a message and it will be started on the reception of the
     * report. Do not start the sensor till we know that the profile is ready.
     ********************************************************************************/
    return 0;
}

/**
 *  @b Description
 *  @n
 *      The function is invoked from the CLI once the "sensorStop"
 *      command is received. This is an indication that the sensor
 *      needs to be stopped. This will involve stopping the BSS and
 *      the profile.
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t LVDSStream_stop (void)
{
    int32_t             errCode;
    MMWave_ErrorLevel   errorLevel;
    int16_t             mmWaveError;
    int16_t             subSysError;

    /******************************************************************
     * Stop the mmWave control:
     ******************************************************************/
    if (MMWave_stop (gLVDSStreamMCB.ctrlHandle, &errCode) < 0)
    {
        /* Decode the error: */
        MMWave_decodeError (errCode, &errorLevel, &mmWaveError, &subSysError);
        if (errorLevel == MMWave_ErrorLevel_ERROR)
        {
            /* Error: Unable to stop the sensor */
            System_printf ("Error: Unable to stop the mmWave module [Error: %d mmWave: %d SubSys: %d]\n",
                            errCode, mmWaveError, subSysError);
            return -1;
        }
    }

    /******************************************************************
     * Sensor has been stopped. We need to wait for the acknowledgment
     * back from the BSS that the stop has been completed.
     ******************************************************************/
    return 0;
}

/**
 *  @b Description
 *  @n
 *      MSS SubSystem Initialization Task which initializes the various
 *      components in the MSS subsystem.
 *
 *  @retval
 *      Not Applicable.
 */
static void LVDSStream_initTask(UArg arg0, UArg arg1)
{
    Task_Params         taskParams;
    int32_t             errCode;
    MMWave_InitCfg      initCfg;
    TestFmk_InitCfg     fmkInitCfg;
    UART_Params         params;

    /* Debug Message: */
    System_printf("Debug: Launched the Demo Initialization Task\n");

    /*****************************************************************************
     * Initialize the mmWave SDK components:
     *****************************************************************************/

    /* Initialize the UART */
    UART_init();

    /* Initialize the Mailbox */
    Mailbox_init(MAILBOX_TYPE_MSS);

    /*****************************************************************************
     * Open & configure the drivers:
     *****************************************************************************/

    /* Setup the default UART Parameters */
    UART_Params_init(&params);
    params.clockFrequency = gLVDSStreamMCB.cfg.sysClockFrequency;
    params.baudRate       = 115200;
    params.isPinMuxDone   = 1;

    /* Open the UART Instance */
    gLVDSStreamMCB.commandUartHandle = UART_open(0, &params);
    if (gLVDSStreamMCB.commandUartHandle == NULL)
    {
        System_printf("Error: Unable to open the Command UART Instance\n");
        return;
    }
    System_printf("Debug: UART Instance %p has been opened successfully\n", gLVDSStreamMCB.commandUartHandle);

    /*****************************************************************************
     * Initialization of the mmWave control module
     *****************************************************************************/
    memset ((void*)&initCfg, 0 , sizeof(MMWave_InitCfg));

    /* Populate the init configuration for mmwave library: */
    initCfg.domain                      = MMWave_Domain_MSS;
    initCfg.socHandle                   = gLVDSStreamMCB.socHandle;
    initCfg.eventFxn                    = LVDSStream_eventCallbackFxn;
    initCfg.linkCRCCfg.useCRCDriver     = 1U;
    initCfg.linkCRCCfg.crcChannel       = CRC_Channel_CH1;
    initCfg.cfgMode                     = MMWave_ConfigurationMode_FULL;

    /* Initialize and setup the mmWave Control module */
    gLVDSStreamMCB.ctrlHandle = MMWave_init (&initCfg, &errCode);
    if (gLVDSStreamMCB.ctrlHandle == NULL)
    {
        /* Error: Unable to initialize the mmWave control module */
        System_printf("Error: mmWave Control Initialization failed [Error code %d]\n", errCode);
        return;
    }

    /* Synchronization: This will synchronize the execution of the control module
     * between the domains. This is a prerequiste and always needs to be invoked. */
    while (1)
    {
        int32_t syncStatus;

        /* Get the synchronization status: */
        syncStatus = MMWave_sync (gLVDSStreamMCB.ctrlHandle , &errCode);
        if (syncStatus < 0)
        {
            /* Error: Unable to synchronize the mmWave control module */
            System_printf ("Error: mmWave Control Synchronization failed [Error code %d]\n", errCode);
            return;
        }
        if (syncStatus == 1)
        {
            /* Synchronization acheived: */
            break;
        }
        /* Sleep and poll again: */
        Task_sleep(1);
    }
    System_printf("Debug: mmWave Control Sync was successful\n");

    /* Initialize and Launch the mmWave Link Management Task: */
    Task_Params_init(&taskParams);
    taskParams.priority  = MSS_APP_MMWAVE_CTRL_TASK_PRIORITY;
    taskParams.stackSize = 4*1024;
    Task_create(LVDSStream_mmWaveCtrlTask, &taskParams, NULL);

    /*****************************************************************************
     * Initialization of the Test Framework:
     *****************************************************************************/
    memset ((void *)&fmkInitCfg, 0, sizeof(TestFmk_InitCfg));

    /* Setup the configuration: */
    fmkInitCfg.socHandle  = gLVDSStreamMCB.socHandle;
    fmkInitCfg.ctrlHandle = gLVDSStreamMCB.ctrlHandle;
    fmkInitCfg.reportFxn  = LVDSStream_reportFxn;

    /* Initialize the Test Framework: */
    gLVDSStreamMCB.fmkHandle = TestFmk_init (&fmkInitCfg, &errCode);
    if (gLVDSStreamMCB.fmkHandle == NULL)
    {
        System_printf ("Error: Unable to initialize the Test Framework [Error: %d]\n", errCode);
        return;
    }
    System_printf ("Debug: Test Framework Initialized\n");

    /* Synchronization: This will synchronize the execution of the control module
     * between the domains. This is a prerequiste and always needs to be invoked. */
    while (1)
    {
        int32_t syncStatus;

        /* Get the synchronization status: */
        syncStatus = TestFmk_synch (gLVDSStreamMCB.fmkHandle, &errCode);
        if (syncStatus < 0)
        {
            /* Error: Unable to synchronize the framework */
            System_printf ("Error: Framework Synchronization failed [Error code %d]\n", errCode);
            return;
        }
        if (syncStatus == 1)
        {
            /* Synchronization acheived: */
            break;
        }
        /* Sleep and poll again: */
        Task_sleep(1);
    }
    System_printf("Debug: Framework Sync was successful\n");

    /* Launch the Test Framework Task:
     * - This is always a lower priority than the mmWave control task because
     *   control events should always be higher priority. */
    Task_Params_init(&taskParams);
    taskParams.priority  = MSS_APP_TEST_FRAMEWORK_TASK_PRIORITY;
    taskParams.stackSize = 4*1024;
    Task_create(LVDSStream_fmkTask, &taskParams, NULL);

    /*************************************************************************
     * The Framework is operational and we can now load the profile
     *************************************************************************/
    if (TestFmk_loadProfile (gLVDSStreamMCB.fmkHandle, &gLVDSStreamProfileCfg, &errCode) < 0)
    {
        System_printf ("Error: Unable to load the profile [Error: %d]\n", errCode);
        return;
    }

    /*****************************************************************************
     * CLI Initialization:
     *****************************************************************************/
    LVDSStream_initCLI();
    return;
}

/**
 *  @b Description
 *  @n
 *      This is the entry point into the LVDS Stream Unit Test
 *
 *  @retval
 *      Not Applicable.
 */
int main (void)
{
    Task_Params	    taskParams;
    int32_t         errCode;
    SOC_Cfg         socCfg;

    /* Initialize the ESM: Dont clear errors as TI RTOS does it */
    ESM_init(0U);

    /* Initialize the Streaming Demo MCB */
    memset ((void*)&gLVDSStreamMCB, 0, sizeof(LVDSStream_MCB));

    /* Initialize the SOC confiugration: */
    memset ((void *)&socCfg, 0, sizeof(SOC_Cfg));

    /* Populate the SOC configuration: */
    socCfg.clockCfg = SOC_SysClock_INIT;

    /* Initialize the SOC Module: This is done as soon as the application is started
     * to ensure that the MPU is correctly configured. */
    gLVDSStreamMCB.socHandle = SOC_init (&socCfg, &errCode);
    if (gLVDSStreamMCB.socHandle == NULL)
    {
        System_printf ("Error: SOC Module Initialization failed [Error code %d]\n", errCode);
        return 0;
    }

    /* Initialize the configuration: */
    gLVDSStreamMCB.cfg.sysClockFrequency = MSS_SYS_VCLK;

    /* Setup the PINMUX to bring out the UART-1 */
    Pinmux_Set_OverrideCtrl(SOC_XWR14XX_PINN6_PADBE, PINMUX_OUTEN_RETAIN_HW_CTRL, PINMUX_INPEN_RETAIN_HW_CTRL);
    Pinmux_Set_FuncSel(SOC_XWR14XX_PINN6_PADBE, SOC_XWR14XX_PINN6_PADBE_MSS_UARTA_TX);
    Pinmux_Set_OverrideCtrl(SOC_XWR14XX_PINN5_PADBD, PINMUX_OUTEN_RETAIN_HW_CTRL, PINMUX_INPEN_RETAIN_HW_CTRL);
    Pinmux_Set_FuncSel(SOC_XWR14XX_PINN5_PADBD, SOC_XWR14XX_PINN5_PADBD_MSS_UARTA_RX);

    /* Initialize the Task Parameters. */
    Task_Params_init(&taskParams);
    Task_create(LVDSStream_initTask, &taskParams, NULL);

    /* Start BIOS */
    BIOS_start();
    return 0;
}

/**
@}
*/

