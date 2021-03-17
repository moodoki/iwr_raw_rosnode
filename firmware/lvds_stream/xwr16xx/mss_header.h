/**
 *   @file  mss_header.h
 *
 *   @brief
 *      This is the header file used by the LVDS Stream application
 *      which executes on the XWR14xx
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
#ifndef MSS_HEADER_H
#define MSS_HEADER_H

#include <stdint.h>
#include <ti/drivers/soc/soc.h>
#include <ti/drivers/uart/UART.h>
#include <ti/drivers/cbuff/cbuff.h>
#include <ti/control/mmwave/mmwave.h>
#include <ti/drivers/test/common/framework.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief
 *  LVDS Strea, Configuration
 *
 * @details
 *  The structure is used to hold all the relevant configuration
 *  which is used to execute the Memory capture unit test
 */
typedef struct LVDSStream_Cfg_t
{
    /**
     * @brief   System Clock Frequency
     */
    uint32_t                sysClockFrequency;

    /**
     * @brief   mmWave control configuration:
     */
    MMWave_CtrlCfg          ctrlCfg;

    /**
     * @brief   mmWave open configuration:
     */
    MMWave_OpenCfg          openCfg;

    /**
     * @brief   Test Framework configuration:
     */
    TestFmk_Cfg             testFmkCfg;

    /**
     * @brief   LVDS Stream Profile configuration: Set this flag
     * to true to inform the profile that headers need to be added
     * to the stream; else raw data is streamed out
     */
    bool                    enableHeaderMode;

    /**
     * @brief   LVDS Stream Profile configuration: This is the
     * HW Session Data Format which identifies the format of the
     * data stream which is to be sent out.
     */
    CBUFF_DataFmt           hwSessionDataFormat;

    /**
     * @brief   LVDS Stream Profile configuration: Set this flag
     * to inform the profile that user buffers need to be streamed
     * out too.
     */
    bool                    enableUserBuffer;

    /**
     * @brief   From the MSS perspective this is a dummy SW Buffer
     * to be filled out. The actual SW buffer resides in the DSS
     * domain. As mentioned in the comments there are multiple
     * techinques to fix this issue. The implementation chosen here
     * is a more complicated approach to showcase how the framework
     * can be used to pass configuration between the domains.
     */
    uint32_t                dummySWBuffer;
}LVDSStream_Cfg;

/**
 * @brief
 *  LVDS Stream statistics
 *
 * @details
 *  The structure is used to hold the statistics information for the
 *  LVDS Stream Unit Tests
 */
typedef struct LVDSStream_Stats_t
{
    /**
     * @brief   Counter which tracks the number of frame trigger from BSS
     */
    uint32_t     frameTrigEvt;

    /**
     * @brief   Counter which tracks the number of Monitoring Report received from BSS
     */
    uint32_t     monRepEvt;

    /**
     * @brief   Counter which tracks the number of Calibration Report received from BSS
     */
    uint32_t     calibRepEvt;
}LVDSStream_Stats;

/**
 * @brief
 *  Stream Demo Master Control Block
 *
 * @details
 *  The structure is used to hold all the relevant information for the
 *  Stream Demo.
 */
typedef struct LVDSStream_MCB_t
{
    /**
     * @brief   Configuration which is used to execute the demo
     */
    LVDSStream_Cfg      cfg;

    /**
     * @brief   SOC Handle:
     */
    SOC_Handle          socHandle;

    /**
     * @brief   This is the mmWave control handle which is used to configure the BSS.
     */
    MMWave_Handle       ctrlHandle;

    /**
     * @brief   UART Handle for the CLI
     */
    UART_Handle         commandUartHandle;

    /**
     * @brief   Status flag which indicates that the mmWave module has been opened
     */
    bool                isMMWaveControlOpened;

    /**
     * @brief   Delay Flag: This is needed for the Data Card as documented in the UG.
     * The DCA1000EVM FPGA needs a minimum delay of 12ms between Bit clock starts and
     * actual LVDS Data start to lock the LVDS PLL IP. The flag ensures that we add
     * the delay only the first time we start the sensor.
     */
    bool                isDataCardDelayCompleted;

    /**
     * @brief   Test Framework Handle:
     */
    TestFmk_Handle      fmkHandle;

    /**
     * @brief   Statistics associated with the Stream Demo
     */
    LVDSStream_Stats    stats;
}LVDSStream_MCB;

/**************************************************************************
 *************************** Global Definitions ***************************
 **************************************************************************/
extern LVDSStream_MCB   gLVDSStreamMCB;

extern int32_t LVDSStream_initCLI (void);
extern int32_t LVDSStream_start (void);
extern int32_t LVDSStream_stop  (void);

#ifdef __cplusplus
}
#endif

#endif /* MSS_HEADER_H */
