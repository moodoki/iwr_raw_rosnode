/**
 *   @file  lvds_stream.c
 *
 *   @brief
 *      LVDS Stream Profile written to conform to the Test Framework.
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

/**************************************************************************
 *************************** Include Files ********************************
 **************************************************************************/
#include <stdint.h>
#include <string.h>

/* mmWave SDK Include Files: */
#include <ti/drivers/soc/soc.h>
#include <ti/common/sys_common.h>
#include <ti/drivers/osal/DebugP.h>
#include <ti/drivers/osal/MemoryP.h>
#include <ti/drivers/adcbuf/ADCBuf.h>
#include <ti/drivers/edma/edma.h>
#include <ti/drivers/test/common/framework.h>
#include <ti/drivers/cbuff/cbuff.h>
#include <ti/drivers/test/lvds_stream/lvds_stream.h>
#include <ti/utils/hsiheader/hsiheader.h>

/**************************************************************************
 ************************** Local Functions *******************************
 **************************************************************************/

static TestFmk_ProfileHandle TestFmkLVDSStream_init
(
    TestFmk_Handle      fmkHandle,
    TestFmk_InitCfg*    ptrInitCfg,
    SemaphoreP_Handle   fmkSemHandle,
    int32_t*            errCode
);
static int32_t TestFmkLVDSStream_open
(
    TestFmk_ProfileHandle   handle,
    MMWave_OpenCfg*         ptrOpenCfg,
    int32_t*                errCode
);
static int32_t TestFmkLVDSStream_finalizeCfg
(
    TestFmk_ProfileHandle   handle,
    TestFmk_Cfg*            ptrTestFmkCfg,
    int32_t*                errCode
);
static int32_t TestFmkLVDSStream_execute
(
    TestFmk_ProfileHandle handle,
    TestFmk_Result*       ptrResult,
    int32_t*              errCode
);
static int32_t TestFmkLVDSStream_control
(
    TestFmk_ProfileHandle   handle,
    uint32_t                cmd,
    void*                   arg,
    uint32_t                argLen,
    int32_t*                errCode
);
static int32_t TestFmkLVDSStream_EDMAAllocateCBUFFChannel
(
    CBUFF_EDMAInfo*         ptrEDMAInfo,
    CBUFF_EDMAChannelCfg*   ptrEDMACfg
);
static void TestFmkLVDSStream_EDMAFreeCBUFFChannel
(
    CBUFF_EDMAChannelCfg* ptrEDMACfg
);

static int32_t TestFmkLVDSStream_start  (TestFmk_ProfileHandle handle, int32_t* errCode);
static int32_t TestFmkLVDSStream_stop   (TestFmk_ProfileHandle handle, int32_t* errCode);
static int32_t TestFmkLVDSStream_close  (TestFmk_ProfileHandle handle, int32_t* errCode);
static int32_t TestFmkLVDSStream_deinit (TestFmk_ProfileHandle handle, int32_t* errCode);
static void    TestFmkLVDSStream_chirpAvailable (TestFmk_ProfileHandle handle);
static void    TestFmkLVDSStream_HwTriggerFrameDone (CBUFF_SessionHandle sessionHandle);
static void    TestFmkLVDSStream_SwTriggerFrameDone (CBUFF_SessionHandle sessionHandle);

/**************************************************************************
 ************************** Local Structures ******************************
 **************************************************************************/

/** @addtogroup LVDS_STREAM_DATA_STRUCTURES
 @{ */

/**
 * @brief   This is the maximum number of EDMA Channels which is used by
 * the HW Session
 */
#define LVDS_STREAM_PROFILE_HW_SESSION_MAX_EDMA_CHANNEL             13U

/**
 * @brief   This is the maximum number of EDMA Channels which is used by
 * the HW Session
 */
#define LVDS_STREAM_PROFILE_SW_SESSION_MAX_EDMA_CHANNEL             3U

/**
 * @brief
 *  LVDS Stream Profile Configuration
 *
 * @details
 *  The structure is used to hold all the configuration required by the
 *  LVDS Stream
 */
typedef struct LVDSStreamProfileCfg_t
{
    /**
     * @brief   Number of chirps per frame configured in the CBUFF HW Session
     */
    uint32_t                                numChirpsPerFrame;

    /**
     * @brief   HW Session Data Format
     */
    CBUFF_DataFmt                           hwSessionDataFormat;

    /**
     * @brief   User Buffer configuration:
     */
    TestFmk_LVDSStreamProfileUserBufCfg     userBufferCfg;

    /**
     * @brief   Flag to enable header mode
     */
    bool                                    enableHeader;

    /**
     * @brief   CQ Size (In CBUFF Units)
     */
    uint16_t                                cqSize[ADCBufMMWave_CQType_MAX_CQ];
}LVDSStreamProfileCfg;

/**
 * @brief
 *  LVDS Stream Profile MCB
 *
 * @details
 *  The structure is used to track all the information which is required for
 *  the Capture Profile to execute.
 */
typedef struct LVDSStreamProfile_MCB_t
{
    /**
     * @brief   LVDS Stream Profile configuration:
     */
    LVDSStreamProfileCfg    cfg;

    /**
     * @brief   SOC Handle
     */
    SOC_Handle              socHandle;

    /**
     * @brief   Test Framework Handle:
     */
    TestFmk_Handle          fmkHandle;

    /**
     * @brief   EDMA Handle
     */
    EDMA_Handle             edmaHandle[EDMA_NUM_CC];

    /**
     * @brief   ADCBUF Driver Handle:
     */
    ADCBuf_Handle           adcBufHandle;

    /**
     * @brief   Handle to the framework semaphore:
     */
    SemaphoreP_Handle       fmkSemHandle;

    /**
     * @brief   Handle to the CBUFF Driver
     */
    CBUFF_Handle            cbuffHandle;

    /**
     * @brief   Handle to the HW CBUFF Session Handle
     */
    CBUFF_SessionHandle     hwSessionHandle;

    /**
     * @brief   Handle to the HW CBUFF Session Configuration
     */
    CBUFF_SessionCfg        hwSessionCfg;

    /**
     * @brief   Handle to the SW CBUFF Session Handle
     */
    CBUFF_SessionHandle     swSessionHandle;

    /**
     * @brief   Handle to the SW CBUFF Session Configuration
     */
    CBUFF_SessionCfg        swSessionCfg;

    /**
     * @brief   EDMA Channel Allocator Index for the HW Session
     */
    uint8_t                 hwSessionEDMAChannelAllocatorIndex;

    /**
     * @brief   EDMA Channel Resource Table: This is used for creating the CBUFF Session.
     */
    CBUFF_EDMAChannelCfg    hwSessionEDMAChannelTable[LVDS_STREAM_PROFILE_HW_SESSION_MAX_EDMA_CHANNEL];

    /**
     * @brief   EDMA Channel Allocator Index for the SW Session
     */
    uint8_t                 swSessionEDMAChannelAllocatorIndex;

    /**
     * @brief   EDMA Channel Resource Table: This is used for creating the CBUFF Session.
     */
    CBUFF_EDMAChannelCfg    swSessionEDMAChannelTable[LVDS_STREAM_PROFILE_SW_SESSION_MAX_EDMA_CHANNEL];

    /**
     * @brief   Flag which indicates the status of the EDMA Transfer
     */
    volatile bool           isEDMATranferStarted;

    /**
     * @brief   Flag which indicates that the chirp was detected
     */
    volatile bool           chirpAvailableDetected;

    /**
     * @brief   Flag which indicates that the profile is being stopped.
     */
    bool                    isStopInProgress;

    /**
     * @brief   Counter which tracks the number of Chirp Available Interrupts.
     */
    uint32_t                numChirpAvailable;

    /**
     * @brief   Counter which tracks the number of EDMA Transfer Interrupts.
     */
    uint32_t                dmaIntCounter;

    /**
     * @brief   EDMA Channel Identifier
     */
    uint8_t                 channelId;

    /**
     * @brief   Link EDMA Channel Identifier
     */
    uint8_t                 linkChannelId;

    /**
     * @brief   Frame Count used to configure DMA channel
     */
    uint8_t                 dmaFrameCnt;

    /**
     * @brief   Element size (in number of bytes) used to configure DMA channel
     */
    uint16_t                dmaElemSize;

    /**
     * @brief   Number of bytes of each dma transfer. It is used to calculate next buffer address.
     */
    uint16_t                dmaBlockSize;

    /**
     * @brief   Current data cube address
     */
    uint32_t                currDstAddr;

    /**
     * @brief   End of data cube address
     */
    uint32_t                endDstAddr;

    /**
     * @brief   Streaming statistics:
     */
    CBUFF_Stats             cbuffStats;
}LVDSStreamProfile_MCB;

/**
@}
*/

/**************************************************************************
 ************************* Global Declarations ****************************
 **************************************************************************/

/** @addtogroup LVDS_STREAM_GLOBAL
 @{ */

/**
 * @brief   Capture Profile Configuration: This should be used while loading
 * the profile into the Test Framework
 */
TestFmk_ProfileCfg gLVDSStreamProfileCfg =
{
    TestFmkLVDSStream_init,            /* Initialization Function:         */
    TestFmkLVDSStream_open,            /* Open Function:                   */
    TestFmkLVDSStream_finalizeCfg,     /* Finalize Configuration Function: */
    TestFmkLVDSStream_start,           /* Start Function:                  */
    TestFmkLVDSStream_execute,         /* Execute Function:                */
    TestFmkLVDSStream_control,         /* Control Function:                */
    TestFmkLVDSStream_stop,            /* Stop Function:                   */
    TestFmkLVDSStream_close,           /* Close Function:                  */
    TestFmkLVDSStream_deinit,          /* Deinitialization Function:       */
    TestFmkLVDSStream_chirpAvailable,  /* Chirp Available Function:        */
    NULL                               /* Frame Start Function:            */
};

/**
 * @brief   This is the data cube data buffer which is exposed to the application and is
 * used to store the ADC samples. Applications would need to place this in an appropriate
 * memory section using the linker command file.
 */
#pragma DATA_SECTION(gDataCube, ".dataCubeMemory");
#pragma DATA_ALIGN(gDataCube, 8);
uint8_t gDataCube[LVDS_STREAM_PROFILE_MEM_CAPTURE_SIZE];

/**
 * @brief   This is memory which is allocated for creating headers which are attached to
 * the streams being sent by the CBUFF sessions
 */
#pragma DATA_SECTION(gHWSessionHSIHeader, ".cbuffHeader");
#pragma DATA_SECTION(gSWSessionHSIHeader, ".cbuffHeader");
HSIHeader gHWSessionHSIHeader;
HSIHeader gSWSessionHSIHeader;

/**
 * @brief   This is the pointer to the LVDS Stream Profile MCB.
 */
LVDSStreamProfile_MCB*   gPtrLVDSStreamProfileMCB;

/**
@}
*/

/**************************************************************************
 *********************** LVDS Stream Functions ****************************
 **************************************************************************/

/**
 *  @b Description
 *  @n
 *      This is the registered callback function which is invoked after the
 *      frame done interrupt is received for the hardware session.
 *
 *  @param[in]  sessionHandle
 *      Handle to the session
 *
 *  @retval
 *      Not applicable
 */
static void TestFmkLVDSStream_HwTriggerFrameDone (CBUFF_SessionHandle sessionHandle)
{
    int32_t     errCode;

    /* Is the profile being stopped? */
    if (gPtrLVDSStreamProfileMCB->isStopInProgress == false)
    {
        /* NO: Profile is not being stopped. Sanity Checking: HW Session should be active */
        DebugP_assert (sessionHandle == gPtrLVDSStreamProfileMCB->hwSessionHandle);

        /* HW session is complete: Do we need to trigger the sw session? */
        if (gPtrLVDSStreamProfileMCB->swSessionHandle != NULL)
        {
            /* YES: Deactivate the hardware session */
            DebugP_assert (CBUFF_deactivateSession (gPtrLVDSStreamProfileMCB->hwSessionHandle, &errCode) == 0);

            /* Activate the software session */
            DebugP_assert (CBUFF_activateSession (gPtrLVDSStreamProfileMCB->swSessionHandle, &errCode) == 0);
        }
    }
    else
    {
        /* YES: Ignore the interrupt. CBUFF Sessions are going to be deactivated
         * and deleted since the profile is being stopped. */
    }
    return;

}

/**
 *  @b Description
 *  @n
 *      This is the registered callback function which is invoked after the
 *      frame done interrupt is received for the software session.
 *
 *  @param[in]  sessionHandle
 *      Handle to the session
 *
 *  @retval
 *      Not applicable
 */
static void TestFmkLVDSStream_SwTriggerFrameDone (CBUFF_SessionHandle sessionHandle)
{
    int32_t     errCode;

    /* Is the profile being stopped? */
    if (gPtrLVDSStreamProfileMCB->isStopInProgress == false)
    {
        /* NO: Profile is not being stopped. Sanity Checking: SW Session should be active */
        DebugP_assert (sessionHandle == gPtrLVDSStreamProfileMCB->swSessionHandle);

        /* SW session is complete: Deactivate the software session */
        DebugP_assert (CBUFF_deactivateSession (gPtrLVDSStreamProfileMCB->swSessionHandle, &errCode) == 0);

        /* Activate the hardware session */
        DebugP_assert (CBUFF_activateSession (gPtrLVDSStreamProfileMCB->hwSessionHandle, &errCode) == 0);
    }
    else
    {
        /* YES: Ignore the interrupt. CBUFF Sessions are going to be deactivated
         * and deleted since the profile is being stopped. */
    }
    return;
}

/**
 *  @b Description
 *  @n
 *      This is the registered CBUFF EDMA channel allocation function
 *      which allocates EDMA channels for CBUFF Sessions
 *
 *  @param[in]  ptrEDMAInfo
 *      Pointer to the EDMA Information
 *  @param[out]  ptrEDMACfg
 *      Populated EDMA channel configuration
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_EDMAAllocateCBUFFChannel
(
    CBUFF_EDMAInfo*         ptrEDMAInfo,
    CBUFF_EDMAChannelCfg*   ptrEDMACfg
)
{
    int32_t     retVal = MINUS_ONE;

    /* The LVDS Stream Profile can support upto 2 sessions */
    DebugP_assert (ptrEDMAInfo->dmaNum < 2U);

    /* Which DMA number is being used for the allocation? */
    if (ptrEDMAInfo->dmaNum == 0U)
    {
        /* Sanity Check: Are there sufficient EDMA channels? */
        if (gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelAllocatorIndex >= LVDS_STREAM_PROFILE_HW_SESSION_MAX_EDMA_CHANNEL)
        {
            /* Error: All the EDMA channels are allocated */
            goto exit;
        }

        /* Copy over the allocated EDMA configuration. */
        memcpy ((void *)ptrEDMACfg,
                (void*)&gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelTable[gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelAllocatorIndex],
                sizeof(CBUFF_EDMAChannelCfg));

        /* Increment the allocator index: */
        gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelAllocatorIndex++;
    }
    else
    {
        /* Sanity Check: Are there sufficient EDMA channels? */
        if (gPtrLVDSStreamProfileMCB->swSessionEDMAChannelAllocatorIndex >= LVDS_STREAM_PROFILE_SW_SESSION_MAX_EDMA_CHANNEL)
        {
            /* Error: All the EDMA channels are allocated */
            goto exit;
        }

        /* Copy over the allocated EDMA configuration. */
        memcpy ((void *)ptrEDMACfg,
                (void*)&gPtrLVDSStreamProfileMCB->swSessionEDMAChannelTable[gPtrLVDSStreamProfileMCB->swSessionEDMAChannelAllocatorIndex],
                sizeof(CBUFF_EDMAChannelCfg));

        /* Increment the allocator index: */
        gPtrLVDSStreamProfileMCB->swSessionEDMAChannelAllocatorIndex++;
    }

    /* EDMA Channel allocated successfully */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      This is the registered CBUFF EDMA channel free function which frees EDMA channels
 *      which had been allocated for use by a CBUFF Sessions
 *
 *  @retval
 *      Not applicable
 */
static void TestFmkLVDSStream_EDMAFreeCBUFFChannel (CBUFF_EDMAChannelCfg* ptrEDMACfg)
{
    uint8_t    index;

    /* Is the EDMA Channel being cleaned belong to the HW EDMA Table? */
    for (index = 0U; index < LVDS_STREAM_PROFILE_HW_SESSION_MAX_EDMA_CHANNEL; index++)
    {
        /* Do we have a match? */
        if (memcmp ((void*)ptrEDMACfg,
                    (void*)&gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelTable[index],
                    sizeof(CBUFF_EDMAChannelCfg)) == 0)
        {
            /* Yes: Decrement the HW Session index */
            gPtrLVDSStreamProfileMCB->hwSessionEDMAChannelAllocatorIndex--;
            goto exit;
        }
    }

    /* Is the EDMA Channel being cleaned belong to the SW EDMA Table? */
    for (index = 0U; index < LVDS_STREAM_PROFILE_SW_SESSION_MAX_EDMA_CHANNEL; index++)
    {
        /* Do we have a match? */
        if (memcmp ((void*)ptrEDMACfg,
                    (void*)&gPtrLVDSStreamProfileMCB->swSessionEDMAChannelTable[index],
                    sizeof(CBUFF_EDMAChannelCfg)) == 0)
        {
            /* Yes: Decrement the SW Session index */
            gPtrLVDSStreamProfileMCB->swSessionEDMAChannelAllocatorIndex--;
            goto exit;
        }
    }

    /* Sanity Check: We should have had a match. An assertion is thrown to indicate that the EDMA channel
     * being cleaned up does not belong to either table*/
    DebugP_assert (0);

exit:
    return;
}

/**
 *  @b Description
 *  @n
 *      Profile Chirp Available Function which is invoked by the framework
 *      on the reception of the chirp available ISR
 *
 *  @param[in]  handle
 *      Profile handle
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Not applicable
 */
static void TestFmkLVDSStream_chirpAvailable (TestFmk_ProfileHandle handle)
{
    LVDSStreamProfile_MCB*     ptrLVDSStreamProfile;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Increment the counter: */
    ptrLVDSStreamProfile->numChirpAvailable++;

    /* Set the flag to indicate that the chirp is available: */
    ptrLVDSStreamProfile->chirpAvailableDetected = true;
    return;
}

/**
 *  @b Description
 *  @n
 *      This is the function which is registered by the profile and is invoked
 *      on the completion of the EDMA Transfer
 *
 *  @param[in]  arg
 *      This is the handle to the profile
 *  @param[in]  tcCode
 *      Transfer completion code for the channel that completes transfer.
 *
 *  @retval
 *      Not Applicable.
 */
static void TestFmkLVDSStream_edmaCallbackFxn(uintptr_t arg, uint8_t tcCode)
{
    LVDSStreamProfile_MCB*     ptrLVDSStreamProfile;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)arg;

    /* Track the number of EDMA Interrupts */
    ptrLVDSStreamProfile->dmaIntCounter++;

    /* Reset the flag to indicate that the transfer was completed: */
    ptrLVDSStreamProfile->isEDMATranferStarted = false;

    /* Update the current destination address: */
    ptrLVDSStreamProfile->currDstAddr = ptrLVDSStreamProfile->currDstAddr + ptrLVDSStreamProfile->dmaBlockSize;
}

/**
 *  @b Description
 *  @n
 *      Profile Execute Function which is invoked by the framework
 *      to execute the profile
 *
 *  @param[in]  handle
 *      Profile handle
 *  @param[out]  ptrResult
 *      Pointer to the result
 *  @param[out] errCode
 *      Error code populated by the API
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t TestFmkLVDSStream_execute
(
    TestFmk_ProfileHandle   handle,
    TestFmk_Result*         ptrResult,
    int32_t*                errCode
)
{
    LVDSStreamProfile_MCB*     ptrLVDSStreamProfile;
    int32_t                 retVal = MINUS_ONE;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Did we get a chirp interrupt? */
    if (ptrLVDSStreamProfile->chirpAvailableDetected == false)
    {
        /* NO: There is nothing to do. This is not an error */
        retVal = 0;
        goto exit;
    }

    /* Reset the flag: */
    ptrLVDSStreamProfile->chirpAvailableDetected = false;

    /* Sanity Check: Previous EDMA Transfers should be completed before initiating a new transfer */
    DebugP_assert (ptrLVDSStreamProfile->isEDMATranferStarted == false);

    /* Take a snapshot of the CBUFF statistics: */
    DebugP_assert (CBUFF_control (ptrLVDSStreamProfile->cbuffHandle,
                                  CBUFF_Command_GET_CBUFF_STATS,
                                  &ptrLVDSStreamProfile->cbuffStats,
                                  sizeof (CBUFF_Stats),
                                  errCode) == 0);

    /* Can we DMA the data? Do we have sufficient space? */
    if( (ptrLVDSStreamProfile->currDstAddr + ptrLVDSStreamProfile->dmaBlockSize) < ptrLVDSStreamProfile->endDstAddr)
    {
        /* YES: The ADC sample can be placed into the Data Cube Memory: */
        *errCode = EDMA_setDestinationAddress (ptrLVDSStreamProfile->edmaHandle[0],
                                               (uint16_t)ptrLVDSStreamProfile->channelId,
                                               ptrLVDSStreamProfile->currDstAddr);
        if(*errCode != EDMA_NO_ERROR)
        {
            /* Error: Unable to set the destination address. Error code is setup. */
            goto exit;
        }

        /* Trigger DMA transfer */
        *errCode = EDMA_startDmaTransfer(ptrLVDSStreamProfile->edmaHandle[0], ptrLVDSStreamProfile->channelId);
        if(*errCode != EDMA_NO_ERROR)
        {
            /* Error: Unable to trigger the DMA Transfer. Error code is setup. */
            goto exit;
        }

        /* EDMA Transfer has been started: */
        ptrLVDSStreamProfile->isEDMATranferStarted = true;
    }

    /* We have successfully executed the profile: */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      Profile Start Function which is invoked by the framework
 *      during the start process.
 *
 *  @param[in]  handle
 *      Handle to the Profile
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_start (TestFmk_ProfileHandle handle, int32_t* errCode)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    uint32_t                dstAddress;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Reset the statistics: */
    ptrLVDSStreamProfile->dmaIntCounter     = 0U;
    ptrLVDSStreamProfile->numChirpAvailable = 0U;

    /* Get the destination address: */
    dstAddress = SOC_translateAddress((uint32_t)&gDataCube[0], SOC_TranslateAddr_Dir_TO_EDMA, NULL);

    /* Reset the current destination address: */
    ptrLVDSStreamProfile->currDstAddr = dstAddress;
    ptrLVDSStreamProfile->endDstAddr  = (uint32_t)(dstAddress + sizeof(gDataCube));

    /* Reset the data cube memory: */
    memset ((void*)&gDataCube[0], 0xCC, sizeof(gDataCube));

    /* There is no chirp available interrupt detected */
    ptrLVDSStreamProfile->chirpAvailableDetected = false;

    /* There is no EDMA Transfer which has been started */
    ptrLVDSStreamProfile->isEDMATranferStarted   = false;

    /* Activate the CBUFF HW Session: */
    return CBUFF_activateSession (ptrLVDSStreamProfile->hwSessionHandle, errCode);
}

/**
 *  @b Description
 *  @n
 *      Profile Stop Function which is invoked by the framework
 *      during the stop process.
 *
 *  @param[in]  handle
 *      Handle to the Profile
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_stop (TestFmk_ProfileHandle handle, int32_t* errCode)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    int32_t                 retVal = MINUS_ONE;
    uintptr_t               key;
    CBUFF_SessionHandle     currentActiveSession;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Set the flag this will ensure that the profile is being stopped. */
    ptrLVDSStreamProfile->isStopInProgress = true;

    /**********************************************************************************
     * Get the current activate session: This needs to be done with interrupts disabled
     * because we dont want the sessions to be switched in the ISR context
     **********************************************************************************/
    key = HwiP_disable();

    /* Get the current active session:  */
    retVal = CBUFF_control (ptrLVDSStreamProfile->cbuffHandle, CBUFF_Command_GET_ACTIVE_SESSION,
                            &currentActiveSession, sizeof(CBUFF_SessionHandle), errCode);
    if (retVal < 0)
    {
        /* Error: Unable to get the current active session. */
        HwiP_restore (key);
        goto exit;
    }

    /* Was there a session which was active? */
    if (currentActiveSession != NULL)
    {
        /* YES: Deactivate the session */
        retVal = CBUFF_deactivateSession (currentActiveSession, errCode);
        if (retVal < 0)
        {
            /* Error: Unable to deactivate the current session. */
            HwiP_restore (key);
            goto exit;
        }
    }

    /* End of the critical section: There are no more active sessions. */
    HwiP_restore(key);

    /* Clear out the CBUFF statistics: */
    DebugP_assert (CBUFF_control (ptrLVDSStreamProfile->cbuffHandle,
                                  CBUFF_Command_CLEAR_CBUFF_STATS,
                                  NULL,
                                  0U,
                                  errCode) == 0);

    /* Set the flag to indicate that the profile has been stopped. */
    ptrLVDSStreamProfile->isStopInProgress = false;

    /* Streaming Profile has been stopped: */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      Profile registered function which provides profile specific
 *      configurability.
 *
 *  @param[in]  handle
 *      Handle to the Module
 *  @param[in]  cmd
 *      Capture Profile specific commands
 *  @param[in]  arg
 *      Command specific arguments
 *  @param[in]  argLen
 *      Length of the arguments which is also command specific
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_control
(
    TestFmk_ProfileHandle   handle,
    uint32_t                cmd,
    void*                   arg,
    uint32_t                argLen,
    int32_t*                errCode
)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    uint8_t                 headerStatus;
    int32_t                 retVal = MINUS_ONE;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Process the command: */
    switch (cmd)
    {
        case LVDS_STREAM_PROFILE_SET_NUM_CHIRPS_PER_FRAME:
        {
            /* Sanity Check: Validate the arguments */
            if (argLen != sizeof (uint32_t))
            {
                /* Error: Please refer to the documentation. */
                *errCode = TESTFMK_EINVAL;
                goto exit;
            }

            /* Setup the number of chirps per frame: */
            ptrLVDSStreamProfile->cfg.numChirpsPerFrame = *(uint32_t*)arg;
            break;
        }
        case LVDS_STREAM_PROFILE_SET_HW_SESSION_DATA_FMT:
        {
            /* Sanity Check: Validate the arguments */
            if (argLen != sizeof (CBUFF_DataFmt))
            {
                /* Error: Please refer to the documentation. */
                *errCode = TESTFMK_EINVAL;
                goto exit;
            }

            /* Setup the HW Session Data Format: */
            ptrLVDSStreamProfile->cfg.hwSessionDataFormat = *(CBUFF_DataFmt*)arg;
            break;
        }
        case LVDS_STREAM_PROFILE_SET_USERBUF_STREAM:
        {
            /* Sanity Check: Validate the arguments */
            if (argLen != sizeof (TestFmk_LVDSStreamProfileUserBufCfg))
            {
                /* Error: Please refer to the documentation. */
                *errCode = TESTFMK_EINVAL;
                goto exit;
            }

            /* Copy over the user buffer configuration: */
            memcpy ((void*)&ptrLVDSStreamProfile->cfg.userBufferCfg, (void*)arg,
                    sizeof(TestFmk_LVDSStreamProfileUserBufCfg));
            break;
        }
        case LVDS_STREAM_PROFILE_SET_HEADER_MODE:
        {
            /* Sanity Check: Validate the arguments */
            if (argLen != sizeof (uint8_t))
            {
                /* Error: Please refer to the documentation. */
                *errCode = TESTFMK_EINVAL;
                goto exit;
            }

            /* Get the header status: */
            headerStatus = *(uint8_t*)arg;
            if (headerStatus == 1U)
            {
                /* Set the Header Mode: */
                ptrLVDSStreamProfile->cfg.enableHeader = true;
            }
            else
            {
                /* No Header Mode: */
                ptrLVDSStreamProfile->cfg.enableHeader = false;
            }
            break;
        }
        case LVDS_STREAM_PROFILE_SET_CQ_SIZE:
        {
            /* Sanity Check: Validate the arguments */
            if (argLen != (sizeof (uint16_t) * ADCBufMMWave_CQType_MAX_CQ))
            {
                /* Error: Please refer to the documentation. */
                *errCode = TESTFMK_EINVAL;
                goto exit;
            }

            /* Copy over the CQ Size Information into the LVDS Stream profile configuration */
            memcpy ((void*)&ptrLVDSStreamProfile->cfg.cqSize, (void*)arg, argLen);
            break;
        }
        default:
        {
            /* Error: This is not a supported command. Please refer to the profile
             * documentation */
            *errCode = TESTFMK_ENOTSUP;
            goto exit;
        }
    }

    /* Setup the return value: */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      Profile registered function which is invoked to finalize
 *      the configuration.
 *
 *  @param[in]  handle
 *      Handle to the profile
 *  @param[in]  ptrTestFmkCfg
 *      Pointer to the Test Framework configuration
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_finalizeCfg
(
    TestFmk_ProfileHandle   handle,
    TestFmk_Cfg*            ptrTestFmkCfg,
    int32_t*                errCode
)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    int32_t                 retVal = MINUS_ONE;
    uint8_t                 numBytesPerSample;
    uint32_t                maxADCSize;
    uint32_t                srcAddress;
    uint32_t                dstAddress;
    uint8_t                 channel;
    uint8_t                 numRxChannels = 0U;
    uint32_t                adcBaseAddress;
    EDMA_channelConfig_t    edmaChannelCfg;
    EDMA_paramSetConfig_t*  ptrEDMAParamSetCfg;
    EDMA_paramConfig_t      edmaParamCfg;
    CBUFF_SessionCfg*       ptrSessionCfg;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;
    DebugP_assert (ptrLVDSStreamProfile != NULL);

    /* Sanity Checking: LVDS Stream Profile only supports Frame & Continuous Mode */
    if ((ptrTestFmkCfg->dfeDataOutputMode != MMWave_DFEDataOutputMode_FRAME) &&
        (ptrTestFmkCfg->dfeDataOutputMode != MMWave_DFEDataOutputMode_CONTINUOUS))
    {
        /* Error: Invalid configuration */
        *errCode = TESTFMK_ENOTSUP;
        goto exit;
    }

    /* Sanity Checking: DFE Mode specific validations */
    if (ptrTestFmkCfg->dfeDataOutputMode == MMWave_DFEDataOutputMode_FRAME)
    {
        /* Frame Mode: Number of chirps per frame should have been configured */
        if (ptrLVDSStreamProfile->cfg.numChirpsPerFrame == 0U)
        {
            /* Error: Invalid configuration */
            *errCode = TESTFMK_EINVAL;
            goto exit;
        }
    }
    else
    {
        /* Continuous Mode: This does not support streaming of User Data. There is no
         * Frame done interrupt received in this mode. SW Session cannot be scheduled */
        if (ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer1 != NULL)
        {
            /* Error: Invalid configuration */
            *errCode = TESTFMK_EINVAL;
            goto exit;
        }
    }

    /* Sanity Checking: There should be at least 1 active channel */
    if (ptrTestFmkCfg->rxChannelEn == 0U)
    {
        /* Error: Invalid configuration */
        *errCode = TESTFMK_EINVAL;
        goto exit;
    }

    /* Get the EDMA Handles from the Framework Module: */
    if (ptrLVDSStreamProfile->edmaHandle[0] == NULL)
    {
        if (TestFmk_ioctl (ptrLVDSStreamProfile->fmkHandle, TEST_FMK_CMD_GET_EDMA_HANDLE,
                           (void*)&ptrLVDSStreamProfile->edmaHandle[0],
                           sizeof(ptrLVDSStreamProfile->edmaHandle),
                           errCode) < 0)
        {
            /* Error: Unable to get the EDMA Handle: */
            goto exit;
        }
    }

    /* Get the ADC Handles from the Framework Module: */
    if (ptrLVDSStreamProfile->adcBufHandle == NULL)
    {
        if (TestFmk_ioctl (ptrLVDSStreamProfile->fmkHandle, TEST_FMK_CMD_GET_ADCBUF_HANDLE,
                           (void*)&ptrLVDSStreamProfile->adcBufHandle,
                           sizeof(ptrLVDSStreamProfile->adcBufHandle),
                           errCode) < 0)
        {
            /* Error: Unable to get the ADCBUF Handle: */
            goto exit;
        }
    }

    /* Disable the EDMA Channel Identifier */
    *errCode = EDMA_disableChannel(ptrLVDSStreamProfile->edmaHandle[0],
                                   ptrLVDSStreamProfile->channelId,
                                   EDMA3_CHANNEL_TYPE_DMA);
    if (*errCode != EDMA_NO_ERROR)
    {
        /* Error: Unable to disable the channel */
        goto exit;
    }

    /* Are we getting reconfigured? */
    if (ptrLVDSStreamProfile->hwSessionHandle != NULL)
    {
        /* YES: There was a previous session which existed. We need to delete
         * it because we will be creating a new session here. */
        if (CBUFF_deleteSession (ptrLVDSStreamProfile->hwSessionHandle, errCode) < 0)
        {
            /* Error: Unable to delete the session. */
            goto exit;
        }

        /* Did we stream out with the HSI Header? */
        if (ptrLVDSStreamProfile->hwSessionCfg.header.size != 0U)
        {
            /* Delete the HSI Header: */
            if (HSIHeader_deleteHeader (&gHWSessionHSIHeader, errCode) < 0)
            {
                /* Error: Unable to delete the HSI Header */
                goto exit;
            }
        }
    }

    /* Are we getting reconfigured? */
    if (ptrLVDSStreamProfile->swSessionHandle != NULL)
    {
        /* YES: There was a previous session which existed. We need to delete
         * it because we will be creating a new session here. */
        if (CBUFF_deleteSession (ptrLVDSStreamProfile->swSessionHandle, errCode) < 0)
        {
            /* Error: Unable to delete the session. */
            goto exit;
        }

        /* Did we stream out with the HSI Header? */
        if (ptrLVDSStreamProfile->swSessionCfg.header.size != 0U)
        {
            /* Delete the HSI Header: */
            if (HSIHeader_deleteHeader (&gSWSessionHSIHeader, errCode) < 0)
            {
                /* Error: Unable to delete the HSI Header */
                goto exit;
            }
        }
    }

    /* Calculate the number of bytes per sample for REAL or COMPLEX */
    if (ptrTestFmkCfg->adcFmt == 0)
    {
        /* COMPLEX: There are 4 bytes per sample */
        numBytesPerSample = 4U;
    }
    else
    {
        /* REAL: There are 2 bytes per sample */
        numBytesPerSample = 2U;
    }

    /* Cycle through and determine the number of channels which are active: */
    for (channel = 0U; channel < SYS_COMMON_NUM_RX_CHANNEL; channel++)
    {
        /* Is the channel enabled? */
        if (ptrTestFmkCfg->rxChannelEn & (0x1<<channel))
        {
            /* Increment and track the number of active channels */
            numRxChannels = numRxChannels + 1U;
        }
    }

    /************************************************************************
     * Platform Specific Definitions:
     ************************************************************************/
#ifdef SOC_XWR16XX
#ifdef SUBSYS_MSS
    adcBaseAddress = SOC_XWR16XX_MSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_XWR16XX_MSS_ADCBUF_SIZE;
#else
    adcBaseAddress = SOC_XWR16XX_DSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_XWR16XX_DSS_ADCBUF_SIZE;
#endif
#elif defined(SOC_XWR18XX)
#ifdef SUBSYS_MSS
    adcBaseAddress = SOC_XWR18XX_MSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_XWR18XX_MSS_ADCBUF_SIZE;
#else
    adcBaseAddress = SOC_XWR18XX_DSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_XWR18XX_DSS_ADCBUF_SIZE;
#endif
#elif defined(SOC_XWR68XX)
#ifdef SUBSYS_MSS
    adcBaseAddress = SOC_XWR68XX_MSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_ADCBUF_SIZE;
#else
    adcBaseAddress = SOC_XWR68XX_DSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_ADCBUF_SIZE;
#endif
#else
    adcBaseAddress = SOC_XWR14XX_MSS_ADCBUF_BASE_ADDRESS;
    maxADCSize     = SOC_XWR14XX_MSS_ADCBUF_SIZE;
#endif

    /* Compute the DMA Element Size: */
    if (ptrTestFmkCfg->dfeDataOutputMode == MMWave_DFEDataOutputMode_FRAME)
    {
        /* Frame Mode: */
        ptrLVDSStreamProfile->dmaElemSize = ptrTestFmkCfg->u.frameCfg.numADCSamples * numBytesPerSample * numRxChannels;
    }
    else
    {
        /* Continuous Mode: */
        ptrLVDSStreamProfile->dmaElemSize = ptrTestFmkCfg->u.contCfg.dataTransSize * numBytesPerSample * numRxChannels;
    }

    /* Setup the DMA Parameters: */
    ptrLVDSStreamProfile->dmaFrameCnt  = ptrTestFmkCfg->chirpThreshold;
    ptrLVDSStreamProfile->dmaBlockSize = ptrLVDSStreamProfile->dmaElemSize * ptrLVDSStreamProfile->dmaFrameCnt;

    /* Validate data size: We cannot DMA beyond the maximum ADC size for the device */
    if ((ptrLVDSStreamProfile->dmaElemSize * ptrLVDSStreamProfile->dmaFrameCnt) > maxADCSize)
    {
        /* Error: Invalid size */
        *errCode = TESTFMK_EPROFERR;
        goto exit;
    }

    /* Get the source & destination address: */
    srcAddress = SOC_translateAddress(adcBaseAddress, SOC_TranslateAddr_Dir_TO_EDMA, NULL);
    dstAddress = SOC_translateAddress((uint32_t)&gDataCube[0], SOC_TranslateAddr_Dir_TO_EDMA,NULL);

    /* Initialize EDMA channel configuration */
    memset((void *)&edmaChannelCfg, 0, sizeof(EDMA_channelConfig_t));

    /* Populate the EDMA channel configuration: */
    edmaChannelCfg.channelId                        = ptrLVDSStreamProfile->channelId;
    edmaChannelCfg.channelType                      = (uint8_t)EDMA3_CHANNEL_TYPE_DMA;
    edmaChannelCfg.paramId                          = ptrLVDSStreamProfile->channelId;
    edmaChannelCfg.eventQueueId                     = 1U;
    edmaChannelCfg.transferCompletionCallbackFxn    = TestFmkLVDSStream_edmaCallbackFxn;
    edmaChannelCfg.transferCompletionCallbackFxnArg = (uintptr_t)ptrLVDSStreamProfile;

    /* Get the EDMA Channel Parameter configuration: */
    ptrEDMAParamSetCfg = &edmaChannelCfg.paramSetConfig;

    /* Populate the EDMA Channel Param set configuration: */
    ptrEDMAParamSetCfg->sourceAddress                          = (uint32_t)srcAddress;
    ptrEDMAParamSetCfg->destinationAddress                     = (uint32_t)dstAddress;
    ptrEDMAParamSetCfg->aCount                                 = ptrLVDSStreamProfile->dmaElemSize;
    ptrEDMAParamSetCfg->bCount                                 = ptrLVDSStreamProfile->dmaFrameCnt;
    ptrEDMAParamSetCfg->cCount                                 = 1U;
    ptrEDMAParamSetCfg->bCountReload                           = ptrEDMAParamSetCfg->bCount;
    ptrEDMAParamSetCfg->sourceBindex                           = ptrLVDSStreamProfile->dmaElemSize;
    ptrEDMAParamSetCfg->destinationBindex                      = ptrLVDSStreamProfile->dmaElemSize;
    ptrEDMAParamSetCfg->sourceCindex                           = 0;
    ptrEDMAParamSetCfg->destinationCindex                      = 0;
    ptrEDMAParamSetCfg->linkAddress                            = EDMA_NULL_LINK_ADDRESS;
    ptrEDMAParamSetCfg->transferType                           = (uint8_t)EDMA3_SYNC_AB;
    ptrEDMAParamSetCfg->transferCompletionCode                 = ptrLVDSStreamProfile->channelId;
    ptrEDMAParamSetCfg->sourceAddressingMode                   = (uint8_t)EDMA3_ADDRESSING_MODE_LINEAR;
    ptrEDMAParamSetCfg->destinationAddressingMode              = (uint8_t)EDMA3_ADDRESSING_MODE_LINEAR;
    ptrEDMAParamSetCfg->fifoWidth                              = (uint8_t)EDMA3_FIFO_WIDTH_8BIT;
    ptrEDMAParamSetCfg->isStaticSet                            = false;
    ptrEDMAParamSetCfg->isEarlyCompletion                      = false;
    ptrEDMAParamSetCfg->isFinalTransferInterruptEnabled        = true;
    ptrEDMAParamSetCfg->isIntermediateTransferInterruptEnabled = false;
    ptrEDMAParamSetCfg->isFinalChainingEnabled                 = false;
    ptrEDMAParamSetCfg->isIntermediateChainingEnabled          = false;

    /* Configure the EDMA Channel: */
    *errCode = EDMA_configChannel(ptrLVDSStreamProfile->edmaHandle[0], &edmaChannelCfg, false);
    if (*errCode != EDMA_NO_ERROR)
    {
        goto exit;
    }

    /* Populate the EDMA Parameter configuration: */
    memcpy ((void *)&edmaParamCfg.paramSetConfig, (void*)ptrEDMAParamSetCfg, sizeof(EDMA_paramSetConfig_t));
    edmaParamCfg.transferCompletionCallbackFxn    = TestFmkLVDSStream_edmaCallbackFxn;
    edmaParamCfg.transferCompletionCallbackFxnArg = (uintptr_t)ptrLVDSStreamProfile;

    /* Configure the EDMA Parameter set: */
    *errCode = EDMA_configParamSet(ptrLVDSStreamProfile->edmaHandle[0],
                                   ptrLVDSStreamProfile->linkChannelId,
                                   &edmaParamCfg);
    if (*errCode != EDMA_NO_ERROR)
    {
        goto exit;
    }

    /* Link the channels: */
    *errCode = EDMA_linkParamSets (ptrLVDSStreamProfile->edmaHandle[0],
                                   ptrLVDSStreamProfile->channelId,
                                   ptrLVDSStreamProfile->linkChannelId);
    if (*errCode != EDMA_NO_ERROR)
    {
        goto exit;
    }

    /* Link the channels: */
    *errCode = EDMA_linkParamSets (ptrLVDSStreamProfile->edmaHandle[0],
                                   ptrLVDSStreamProfile->linkChannelId,
                                   ptrLVDSStreamProfile->linkChannelId);
    if (*errCode != EDMA_NO_ERROR)
    {
        goto exit;
    }

    /* There is no EDMA Transfer in progress: */
    ptrLVDSStreamProfile->isEDMATranferStarted = false;

    /********************************************************************************
     * Populate the CBUFF HW Session configuration:
     ********************************************************************************/
    memset ((void*)&ptrLVDSStreamProfile->hwSessionCfg, 0, sizeof(CBUFF_SessionCfg));

    /* Get the CBUFF HW Session configuration: */
    ptrSessionCfg = &ptrLVDSStreamProfile->hwSessionCfg;

    /* Populate the configuration: */
    ptrSessionCfg->executionMode          = CBUFF_SessionExecuteMode_HW;
    ptrSessionCfg->edmaHandle             = ptrLVDSStreamProfile->edmaHandle[0];
    ptrSessionCfg->allocateEDMAChannelFxn = TestFmkLVDSStream_EDMAAllocateCBUFFChannel;
    ptrSessionCfg->freeEDMAChannelFxn     = TestFmkLVDSStream_EDMAFreeCBUFFChannel;

    /* Setup the data type: */
    if (ptrTestFmkCfg->adcFmt == 0)
    {
        /* Complex: */
        ptrSessionCfg->dataType = CBUFF_DataType_COMPLEX;
    }
    else
    {
        /* Real: */
        ptrSessionCfg->dataType = CBUFF_DataType_REAL;
    }

    /* Setup the data mode: The CBUFF & ADCBUF should be aligned on the data mode */
    if (ptrTestFmkCfg->chInterleave == 1U)
    {
        /* Non-Interleaved data mode: */
        ptrSessionCfg->u.hwCfg.dataMode = CBUFF_DataMode_NON_INTERLEAVED;
    }
    else
    {
        /* Interleaved data mode: */
        ptrSessionCfg->u.hwCfg.dataMode = CBUFF_DataMode_INTERLEAVED;
    }

    /* Populate the HW Session configuration: */
    ptrSessionCfg->u.hwCfg.adcBufHandle      = ptrLVDSStreamProfile->adcBufHandle;
    ptrSessionCfg->u.hwCfg.dataFormat        = ptrLVDSStreamProfile->cfg.hwSessionDataFormat;
    ptrSessionCfg->u.hwCfg.numChirpsPerFrame = ptrLVDSStreamProfile->cfg.numChirpsPerFrame;
    ptrSessionCfg->u.hwCfg.cqSize[0]         = ptrLVDSStreamProfile->cfg.cqSize[0];
    ptrSessionCfg->u.hwCfg.cqSize[1]         = ptrLVDSStreamProfile->cfg.cqSize[1];
    ptrSessionCfg->u.hwCfg.cqSize[2]         = ptrLVDSStreamProfile->cfg.cqSize[2];

    /* Setup the operational mode for the HW Session: */
    if (ptrTestFmkCfg->dfeDataOutputMode == MMWave_DFEDataOutputMode_FRAME)
    {
        /* Frame Mode: */
        ptrSessionCfg->u.hwCfg.opMode        = CBUFF_OperationalMode_CHIRP;
        ptrSessionCfg->u.hwCfg.numADCSamples = ptrTestFmkCfg->u.frameCfg.numADCSamples;
        ptrSessionCfg->u.hwCfg.chirpMode     = ptrTestFmkCfg->chirpThreshold;
    }
    else
    {
        /* Continuous Mode: */
        ptrSessionCfg->u.hwCfg.opMode        = CBUFF_OperationalMode_CONTINUOUS;
        ptrSessionCfg->u.hwCfg.numADCSamples = ptrTestFmkCfg->u.contCfg.dataTransSize;
        ptrSessionCfg->u.hwCfg.chirpMode     = 0U;
    }

    /* Do we need to install a frame done callback function? This is only required if
     * the software session is needed. We will use the frame done to switch from one
     * session to another. */
    if (ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer1 != NULL)
    {
        /* YES: Instantiate the frame done callback function */
        ptrSessionCfg->frameDoneCallbackFxn = TestFmkLVDSStream_HwTriggerFrameDone;
    }
    else
    {
        /* No User buffer needs to be streamed out. We dont need a frame done interrupt */
        ptrSessionCfg->frameDoneCallbackFxn = NULL;
    }

    /* Do we need to enable the header? */
    if (ptrLVDSStreamProfile->cfg.enableHeader == true)
    {
        /* YES: Create the HSI Header to be used for the HW Session: */
        if (HSIHeader_createHeader (ptrSessionCfg, false,&gHWSessionHSIHeader, errCode) < 0)
        {
            /* Error: Unable to create the HSI Header; report the error */
            goto exit;
        }

        /* Setup the header in the CBUFF session configuration: */
        ptrSessionCfg->header.size    = HSIHeader_getHeaderSize(&gHWSessionHSIHeader);
        ptrSessionCfg->header.address = (uint32_t)&gHWSessionHSIHeader;
    }

    /* Create the HW Session: */
    ptrLVDSStreamProfile->hwSessionHandle = CBUFF_createSession (ptrLVDSStreamProfile->cbuffHandle,
                                                                 &ptrLVDSStreamProfile->hwSessionCfg,
                                                                 errCode);
    if (ptrLVDSStreamProfile->hwSessionHandle == NULL)
    {
        /* Error: Unable to create the CBUFF hardware session */
        goto exit;
    }

    /********************************************************************************
     * Populate the CBUFF SW Session configuration
     ********************************************************************************/
    if (ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer1 != NULL)
    {
        memset ((void*)&ptrLVDSStreamProfile->swSessionCfg, 0, sizeof(CBUFF_SessionCfg));

        /* Get the CBUFF HW Session configuration: */
        ptrSessionCfg = &ptrLVDSStreamProfile->swSessionCfg;

        /* Populate the configuration: */
        ptrSessionCfg->executionMode                     = CBUFF_SessionExecuteMode_SW;
        ptrSessionCfg->edmaHandle                        = ptrLVDSStreamProfile->edmaHandle[0];
        ptrSessionCfg->allocateEDMAChannelFxn            = TestFmkLVDSStream_EDMAAllocateCBUFFChannel;
        ptrSessionCfg->freeEDMAChannelFxn                = TestFmkLVDSStream_EDMAFreeCBUFFChannel;
        ptrSessionCfg->frameDoneCallbackFxn              = TestFmkLVDSStream_SwTriggerFrameDone;
        ptrSessionCfg->dataType                          = CBUFF_DataType_COMPLEX;
        ptrSessionCfg->u.swCfg.userBufferInfo[0].size    = HSIHeader_toCBUFFUnits(ptrLVDSStreamProfile->cfg.userBufferCfg.sizeUserBuffer1);
        ptrSessionCfg->u.swCfg.userBufferInfo[0].address = (uint32_t)ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer1;
        ptrSessionCfg->u.swCfg.userBufferInfo[1].size    = HSIHeader_toCBUFFUnits(ptrLVDSStreamProfile->cfg.userBufferCfg.sizeUserBuffer2);
        ptrSessionCfg->u.swCfg.userBufferInfo[1].address = (uint32_t)ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer2;

        /* Do we need to enable the header? */
        if (ptrLVDSStreamProfile->cfg.enableHeader == true)
        {
            /* YES: Create the HSI Header to be used for the SW Session: */
            if (HSIHeader_createHeader (ptrSessionCfg, true, &gSWSessionHSIHeader, errCode) < 0)
            {
                /* Error: Unable to create the HSI Header; report the error */
                goto exit;
            }

            /* Setup the header in the CBUFF session configuration: */
            ptrSessionCfg->header.size    = HSIHeader_getHeaderSize(&gSWSessionHSIHeader);
            ptrSessionCfg->header.address = (uint32_t)&gSWSessionHSIHeader;
        }

        /* Create the SW Session. */
        ptrLVDSStreamProfile->swSessionHandle = CBUFF_createSession (ptrLVDSStreamProfile->cbuffHandle,
                                                                     &ptrLVDSStreamProfile->swSessionCfg,
                                                                     errCode);
        if (ptrLVDSStreamProfile->swSessionHandle == NULL)
        {
            /* Error: Unable to create the CBUFF software session */
            goto exit;
        }
    }

    /* Control comes here implies that the LVDS Stream profile has been configured successfully */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      This is the registered streaming profile function which is invoked once the
 *      Module is opened.
 *
 *  @param[in]  handle
 *      Handle to the profile
 *  @param[in]  ptrOpenCfg
 *      Pointer to the mmWave open configuration
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_open
(
    TestFmk_ProfileHandle   handle,
    MMWave_OpenCfg*         ptrOpenCfg,
    int32_t*                errCode
)
{
    CBUFF_InitCfg           initCfg;
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    int32_t                 retVal = MINUS_ONE;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /*************************************************************************************
     * Open the CBUFF Driver:
     *************************************************************************************/
    memset ((void *)&initCfg, 0, sizeof(CBUFF_InitCfg));

    /* Populate the configuration: */
    initCfg.socHandle                 = ptrLVDSStreamProfile->socHandle;
    initCfg.enableECC                 = 0U;
    initCfg.crcEnable                 = 1U;
    initCfg.maxSessions               = 2U;
    initCfg.enableDebugMode           = false;
    initCfg.interface                 = CBUFF_Interface_LVDS;
    initCfg.u.lvdsCfg.crcEnable       = 0U;
    initCfg.u.lvdsCfg.msbFirst        = 1U;
#if (defined(SOC_XWR16XX) || defined (SOC_XWR18XX) || defined (SOC_XWR68XX))
    initCfg.u.lvdsCfg.lvdsLaneEnable  = 0x3U;
#elif defined(SOC_XWR14XX)
    initCfg.u.lvdsCfg.lvdsLaneEnable  = 0xFU;
#else
#error "Error: Unsupported platform"
#endif
    initCfg.u.lvdsCfg.ddrClockMode    = 1U;
    initCfg.u.lvdsCfg.ddrClockModeMux = 1U;

    /* Setup the data output format: */
    switch (ptrOpenCfg->adcOutCfg.fmt.b2AdcBits)
    {
        case 0U:
        {
            /* 12bit Data Output Format: */
            initCfg.outputDataFmt = CBUFF_OutputDataFmt_12bit;
            break;
        }
        case 1U:
        {
            /* 14bit Data Output Format: */
            initCfg.outputDataFmt = CBUFF_OutputDataFmt_14bit;
            break;
        }
        case 2U:
        {
            /* 16bit Data Output Format: */
            initCfg.outputDataFmt = CBUFF_OutputDataFmt_16bit;
            break;
        }
        default:
        {
            /* Bad bit format: */
            *errCode = TESTFMK_EINVAL;
            goto exit;
        }
    }

    /* Initialize the CBUFF Driver: */
    ptrLVDSStreamProfile->cbuffHandle = CBUFF_init (&initCfg, errCode);
    if (ptrLVDSStreamProfile->cbuffHandle == NULL)
    {
        /* Error: Unable to initialize the CBUFF Driver */
        goto exit;
    }

    /* Initialize the HSI Header Module: */
    if (HSIHeader_init (&initCfg, errCode) < 0)
    {
        /* Error: Unable to initialize the HSI Header Module */
        goto exit;
    }

    /* LVDS Stream Profile has been opened successfully */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      This is the registered streaming profile function which is invoked once the
 *      Module is closed
 *
 *  @param[in]  handle
 *      Handle to the profile
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_close
(
    TestFmk_ProfileHandle   handle,
    int32_t*                errCode
)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;
    int32_t                 retVal = MINUS_ONE;

    /* Get the LVDS Stream profile MCB */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;

    /* Shutdown the HSI Header Module: */
    if (HSIHeader_deinit (errCode) < 0)
    {
        /* Error: Unable to deinitialize the HSI Header Module */
        goto exit;
    }

    /* Close the CBUFF Driver: */
    if (CBUFF_deinit (ptrLVDSStreamProfile->cbuffHandle, errCode) < 0)
    {
        /* Error: Unable to deinitialize the CBUFF Driver */
        goto exit;
    }

    /* LVDS Stream Profile has been deinitialized: */
    retVal = 0;

exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      Profile Initialization Function which is invoked by the framework
 *      during the Initialization process.
 *
 *  @param[in]  fmkHandle
 *      Handle to the Test Framework Module
 *  @param[in]  ptrInitCfg
 *      Pointer to the initialization configuration
 *  @param[in]  fmkSemHandle
 *      Handle to the framework semaphore
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static TestFmk_ProfileHandle TestFmkLVDSStream_init
(
    TestFmk_Handle      fmkHandle,
    TestFmk_InitCfg*    ptrInitCfg,
    SemaphoreP_Handle   fmkSemHandle,
    int32_t*            errCode
)
{
    LVDSStreamProfile_MCB*     ptrLVDSStreamProfile;
    TestFmk_ProfileHandle   retHandle = NULL;

    /* Allocate memory for the streaming profile: */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)MemoryP_ctrlAlloc (sizeof(LVDSStreamProfile_MCB), 0);
    if (ptrLVDSStreamProfile == NULL)
    {
        *errCode = TESTFMK_ENOMEM;
        goto exit;
    }

    /* Initialize the allocated memory */
    memset ((void*)ptrLVDSStreamProfile, 0, sizeof(LVDSStreamProfile_MCB));

    /* Populate the LVDS Stream profile: */
    ptrLVDSStreamProfile->socHandle     = ptrInitCfg->socHandle;
    ptrLVDSStreamProfile->fmkHandle     = fmkHandle;
    ptrLVDSStreamProfile->fmkSemHandle  = fmkSemHandle;
    ptrLVDSStreamProfile->channelId     = EDMA_TPCC0_REQ_FREE_14;
    ptrLVDSStreamProfile->linkChannelId = EDMA_NUM_DMA_CHANNELS +
                                          LVDS_STREAM_PROFILE_HW_SESSION_MAX_EDMA_CHANNEL +
                                          LVDS_STREAM_PROFILE_SW_SESSION_MAX_EDMA_CHANNEL;

    /* Populate the LVDS Stream HW Session EDMA Channel Table: */
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[0].chainChannelsId       = EDMA_TPCC0_REQ_CBUFF_0;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[0].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 0U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[1].chainChannelsId       = EDMA_TPCC0_REQ_FREE_0;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[1].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 1U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[2].chainChannelsId       = EDMA_TPCC0_REQ_FREE_1;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[2].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 2U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[3].chainChannelsId       = EDMA_TPCC0_REQ_FREE_2;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[3].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 3U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[4].chainChannelsId       = EDMA_TPCC0_REQ_FREE_3;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[4].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 4U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[5].chainChannelsId       = EDMA_TPCC0_REQ_FREE_4;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[5].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 5U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[6].chainChannelsId       = EDMA_TPCC0_REQ_FREE_5;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[6].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 6U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[7].chainChannelsId       = EDMA_TPCC0_REQ_FREE_6;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[7].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 7U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[8].chainChannelsId       = EDMA_TPCC0_REQ_FREE_7;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[8].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 8U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[9].chainChannelsId       = EDMA_TPCC0_REQ_FREE_8;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[9].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 9U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[10].chainChannelsId      = EDMA_TPCC0_REQ_FREE_9;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[10].shadowLinkChannelsId = (EDMA_NUM_DMA_CHANNELS + 10U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[11].chainChannelsId      = EDMA_TPCC0_REQ_FREE_10;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[11].shadowLinkChannelsId = (EDMA_NUM_DMA_CHANNELS + 11U);
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[12].chainChannelsId      = EDMA_TPCC0_REQ_FREE_11;
    ptrLVDSStreamProfile->hwSessionEDMAChannelTable[12].shadowLinkChannelsId = (EDMA_NUM_DMA_CHANNELS + 12U);

    /* Populate the LVDS Stream SW Session EDMA Channel Table: */
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[0].chainChannelsId       = EDMA_TPCC0_REQ_CBUFF_1;
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[0].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 13U);
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[1].chainChannelsId       = EDMA_TPCC0_REQ_FREE_12;
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[1].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 14U);
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[2].chainChannelsId       = EDMA_TPCC0_REQ_FREE_13;
    ptrLVDSStreamProfile->swSessionEDMAChannelTable[2].shadowLinkChannelsId  = (EDMA_NUM_DMA_CHANNELS + 15U);

    /* Default Configuration for the LVDS Stream Profile: */
    ptrLVDSStreamProfile->cfg.numChirpsPerFrame             = 0U;
    ptrLVDSStreamProfile->cfg.hwSessionDataFormat           = CBUFF_DataFmt_ADC_DATA;
    ptrLVDSStreamProfile->cfg.enableHeader                  = false;
    ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer1  = NULL;
    ptrLVDSStreamProfile->cfg.userBufferCfg.sizeUserBuffer1 = 0U;
    ptrLVDSStreamProfile->cfg.userBufferCfg.ptrUserBuffer2  = NULL;
    ptrLVDSStreamProfile->cfg.userBufferCfg.sizeUserBuffer2 = 0U;

    /* Setup the global stream profile: */
    gPtrLVDSStreamProfileMCB = ptrLVDSStreamProfile;

    /* Setup the profile handle: */
    retHandle = (TestFmk_ProfileHandle)ptrLVDSStreamProfile;

exit:
    return retHandle;
}

/**
 *  @b Description
 *  @n
 *      This is the streaming profile initialization function which is invoked
 *      after the profile has been deinitialized by the framework
 *
 *  @param[in]  handle
 *      Handle to the profile
 *  @param[out] errCode
 *      Error code populated on error
 *
 *  \ingroup LVDS_STREAM_INTERNAL_FUNCTION
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
static int32_t TestFmkLVDSStream_deinit (TestFmk_ProfileHandle handle, int32_t* errCode)
{
    LVDSStreamProfile_MCB*  ptrLVDSStreamProfile;

    /* Get the streaming profile */
    ptrLVDSStreamProfile = (LVDSStreamProfile_MCB*)handle;
    DebugP_assert (ptrLVDSStreamProfile != NULL);

    /* Cleanup the memory: */
    MemoryP_ctrlFree (ptrLVDSStreamProfile, sizeof(LVDSStreamProfile_MCB));

    /* Reset the global variable: */
    gPtrLVDSStreamProfileMCB = NULL;
    return 0;
}

