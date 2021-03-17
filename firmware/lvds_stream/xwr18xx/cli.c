/*
 *   @file  cli.c
 *
 *   @brief
 *      LVDS Stream CLI Implementation
 *
 *  \par
 *  NOTE:
 *      (C) Copyright 2016 Texas Instruments, Inc.
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

/**************************************************************************
 *************************** Include Files ********************************
 **************************************************************************/

/* Standard Include Files. */
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <strings.h>
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

/* mmWave SDK Include Files: */
#include <ti/common/sys_common.h>
#include <ti/common/mmwave_sdk_version.h>
#include <ti/drivers/uart/UART.h>
#include <ti/drivers/osal/DebugP.h>
#include <ti/control/mmwavelink/mmwavelink.h>

/* Demo Include Files */
#include <ti/utils/cli/cli.h>
#include <ti/drivers/test/lvds_stream/xwr18xx/mss_header.h>

/**************************************************************************
 ************************* CLI Local Functions ****************************
 **************************************************************************/

/* CLI Command Functions */
static int32_t LVDSStream_CLISensorStart (int32_t argc, char* argv[]);
static int32_t LVDSStream_CLISensorStop (int32_t argc, char* argv[]);
static int32_t LVDSStream_CLITestFmkCfg (int32_t argc, char* argv[]);
static int32_t LVDSStream_CLISetLVDSStreamProfileCfg (int32_t argc, char* argv[]);

/**************************************************************************
 **************************** CLI Functions *******************************
 **************************************************************************/

/**
 *  @b Description
 *  @n
 *      This is the CLI Handler for the sensor start command
 *
 *  @param[in] argc
 *      Number of arguments
 *  @param[in] argv
 *      Arguments
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t LVDSStream_CLISensorStart (int32_t argc, char* argv[])
{
    /* Get the open configuration from the CLI mmWave Extension */
    CLI_getMMWaveExtensionOpenConfig(&gLVDSStreamMCB.cfg.openCfg);

    /* Get the configuration from the CLI mmWave Extension */
    CLI_getMMWaveExtensionConfig (&gLVDSStreamMCB.cfg.ctrlCfg);

    /* Start the LVDS Stream application: Consume the configuration and setup
     * the sensor & profile. */
    return LVDSStream_start();
}

/**
 *  @b Description
 *  @n
 *      This is the CLI Handler for the sensor stop command
 *
 *  @param[in] argc
 *      Number of arguments
 *  @param[in] argv
 *      Arguments
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t LVDSStream_CLISensorStop (int32_t argc, char* argv[])
{
    /* Stop the sensor & profile */
    return LVDSStream_stop();
}

/**
 *  @b Description
 *  @n
 *      This is the CLI Handler for the High Speed Interface
 *
 *  @param[in] argc
 *      Number of arguments
 *  @param[in] argv
 *      Arguments
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t LVDSStream_CLISetLVDSStreamProfileCfg (int32_t argc, char* argv[])
{
    /* Sanity Check: Minimum argument check */
    if (argc != 4)
    {
        CLI_write ("Error: Invalid usage of the CLI Set High Speed Interface command\n");
        return -1;
    }

    /*******************************************************************************
     * Select the Header Mode:
     * - Valid CLI Input is "enable" or "disable"
     *******************************************************************************/
    if (strcasecmp ("enable", argv[1]) == 0)
    {
        /* Enable Header Mode: */
        gLVDSStreamMCB.cfg.enableHeaderMode = true;
    }
    else if (strcasecmp ("disable", argv[1]) == 0)
    {
        /* Disable Header Mode: */
        gLVDSStreamMCB.cfg.enableHeaderMode = false;
    }
    else
    {
        CLI_write ("Error: Header Mode: Valid CLI Input is either 'disable' or 'enable'\n");
        return -1;
    }

    /*******************************************************************************
     * Select the HW Format:
     * - Valid CLI Input is "ADC", "CP_ADC" and "CP_ADC_CQ"
     *******************************************************************************/
    if (strcasecmp ("ADC", argv[2]) == 0)
    {
        gLVDSStreamMCB.cfg.hwSessionDataFormat = CBUFF_DataFmt_ADC_DATA;
    }
    else if (strcasecmp ("CP_ADC", argv[2]) == 0)
    {
        gLVDSStreamMCB.cfg.hwSessionDataFormat = CBUFF_DataFmt_CP_ADC;
    }
    else if (strcasecmp ("ADC_CP", argv[2]) == 0)
    {
        gLVDSStreamMCB.cfg.hwSessionDataFormat = CBUFF_DataFmt_ADC_CP;
    }
    else if (strcasecmp ("CP_ADC_CQ", argv[2]) == 0)
    {
        gLVDSStreamMCB.cfg.hwSessionDataFormat = CBUFF_DataFmt_CP_ADC_CQ;
    }
    else
    {
        CLI_write ("Error: Data Formats supported are 'ADC', 'CP_ADC', 'ADC_CP' or 'ADC_USER'\n");
        return -1;
    }

    /*******************************************************************************
     * Select the SW Streaming Mode:
     * - Valid CLI Input is "enable" or "disable"
     *******************************************************************************/
    if (strcasecmp ("disable", argv[3]) == 0)
    {
        gLVDSStreamMCB.cfg.enableUserBuffer = false;
    }
    else if (strcasecmp ("enable", argv[3]) == 0)
    {
        gLVDSStreamMCB.cfg.enableUserBuffer = true;
    }
    else
    {
        CLI_write ("Error: SW Streaming Mode: Valid CLI Input is either 'disable' or 'enable'\n");
        return -1;
    }

    return 0;
}

/**
 *  @b Description
 *  @n
 *      This is the CLI Handler for the ADCBUF configuration
 *
 *  @param[in] argc
 *      Number of arguments
 *  @param[in] argv
 *      Arguments
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t LVDSStream_CLITestFmkCfg (int32_t argc, char* argv[])
{
    TestFmk_Cfg     testFmkCfg;
    rlProfileCfg_t  profileCfg;
    uint32_t        numProfile;
    int32_t         errCode;

    /* Sanity Check: Minimum argument check */
    if (argc != 5)
    {
        CLI_write ("Error: Invalid usage of the CLI command\n");
        return -1;
    }

    /* Get the configuration from the CLI mmWave Extension */
    CLI_getMMWaveExtensionOpenConfig(&gLVDSStreamMCB.cfg.openCfg);
    CLI_getMMWaveExtensionConfig (&gLVDSStreamMCB.cfg.ctrlCfg);

    /* Initialize the Test Framework configuration: */
    memset ((void *)&testFmkCfg, 0, sizeof(TestFmk_Cfg));

    /* Populate configuration: */
    testFmkCfg.dfeDataOutputMode = gLVDSStreamMCB.cfg.ctrlCfg.dfeDataOutputMode;
    testFmkCfg.adcFmt            = (uint8_t) atoi (argv[1]);
    testFmkCfg.iqSwapSel         = (uint8_t) atoi (argv[2]);
    testFmkCfg.chInterleave      = (uint8_t) atoi (argv[3]);
    testFmkCfg.chirpThreshold    = (uint8_t) atoi (argv[4]);
    testFmkCfg.rxChannelEn       = gLVDSStreamMCB.cfg.openCfg.chCfg.rxChannelEn;

    /* Enable Chirp Quality (Always) */
    testFmkCfg.enableCQ            = 1U;
    testFmkCfg.cqCfg.cqDataWidth   = 1U;
    testFmkCfg.cqCfg.cq1AddrOffset = 0x0U;      /* CQ1 starts from the beginning of the buffer */
    testFmkCfg.cqCfg.cq2AddrOffset = 0x1000U;   /* Address should be 16 bytes aligned */

    /* Populate the DFE Data Output Mode specific configuration: */
    if (gLVDSStreamMCB.cfg.ctrlCfg.dfeDataOutputMode == MMWave_DFEDataOutputMode_CONTINUOUS)
    {
        /* Continuous Mode: */
        testFmkCfg.u.contCfg.dataTransSize = gLVDSStreamMCB.cfg.ctrlCfg.u.continuousModeCfg.dataTransSize;

        /* Sanity Checking: */
        if (testFmkCfg.u.contCfg.dataTransSize == 0U)
        {
            CLI_write ("Error: The 'testFmkCfg' command should only be invoked after the 'contModeCfg'\n");
            return -1;
        }
    }
    else
    {
        /* Frame Mode: Get the profile configuration */
        DebugP_assert (MMWave_getNumProfiles(gLVDSStreamMCB.ctrlHandle, &numProfile, &errCode) == 0);
        if (numProfile == 0U)
        {
            CLI_write ("Error: The 'testFmkCfg' command should only be invoked after the 'profileCfg'\n");
            return -1;
        }
        DebugP_assert (numProfile == 1U);
        DebugP_assert (MMWave_getProfileCfg (gLVDSStreamMCB.cfg.ctrlCfg.u.frameCfg.profileHandle[0U],
                                             &profileCfg, &errCode) == 0);

        /* Populate the number of ADC Samples: */
        testFmkCfg.u.frameCfg.numADCSamples = profileCfg.numAdcSamples;
        if (testFmkCfg.u.frameCfg.numADCSamples == 0U)
        {
            CLI_write ("Error: Number of ADC Samples is set to 0 in the profileCfg\n");
            return -1;
        }
    }

    /* Save Configuration to use later */
    memcpy((void *)&gLVDSStreamMCB.cfg.testFmkCfg, (void *)&testFmkCfg, sizeof(TestFmk_Cfg));
    return 0;
}

/**
 *  @b Description
 *  @n
 *      The function is used to initialize the CLI module
 *
 *  @retval
 *      Not Applicable.
 */
int32_t LVDSStream_initCLI (void)
{
    CLI_Cfg     cliCfg;
    char        demoBanner[256];

    /* Create Demo Banner to be printed out by CLI */
    sprintf(&demoBanner[0],
            "******************************************\n"      \
            "xWR18xx LVDS Stream %02d.%02d.%02d.%02d\n"         \
            "******************************************\n",
            MMWAVE_SDK_VERSION_MAJOR,
            MMWAVE_SDK_VERSION_MINOR,
            MMWAVE_SDK_VERSION_BUGFIX,
            MMWAVE_SDK_VERSION_BUILD
            );

    /* Initialize the CLI configuration: */
    memset ((void *)&cliCfg, 0, sizeof(CLI_Cfg));

    /* Populate the CLI configuration: */
    cliCfg.socHandle = gLVDSStreamMCB.socHandle;
    cliCfg.cliPrompt                    = "LVDS Stream:/>";
    cliCfg.cliBanner                    = demoBanner;
    cliCfg.cliUartHandle                = gLVDSStreamMCB.commandUartHandle;
    cliCfg.taskPriority                 = 2;
    cliCfg.enableMMWaveExtension        = 1U;
    cliCfg.mmWaveHandle                 = gLVDSStreamMCB.ctrlHandle;
    cliCfg.usePolledMode                = true;
    cliCfg.tableEntry[0].cmd            = "sensorStart";
    cliCfg.tableEntry[0].helpString     = "No arguments";
    cliCfg.tableEntry[0].cmdHandlerFxn  = LVDSStream_CLISensorStart;
    cliCfg.tableEntry[1].cmd            = "sensorStop";
    cliCfg.tableEntry[1].helpString     = "No arguments";
    cliCfg.tableEntry[1].cmdHandlerFxn  = LVDSStream_CLISensorStop;
    cliCfg.tableEntry[2].cmd            = "setProfileCfg";
    cliCfg.tableEntry[2].helpString     = "<Enable/Disable Header> <DataFmt> <Enable/Disable SW>";
    cliCfg.tableEntry[2].cmdHandlerFxn  = LVDSStream_CLISetLVDSStreamProfileCfg;
    cliCfg.tableEntry[3].cmd            = "testFmkCfg";
    cliCfg.tableEntry[3].helpString     = "<adcOutputFmt> <SampleSwap> <ChanInterleave> <ChirpThreshold>";
    cliCfg.tableEntry[3].cmdHandlerFxn  = LVDSStream_CLITestFmkCfg;

    /* Open the CLI: */
    if (CLI_open (&cliCfg) < 0)
    {
        System_printf ("Error: Unable to open the CLI\n");
        return -1;
    }
    System_printf ("Debug: CLI module has been opened successfully\n");
    return 0;
}

