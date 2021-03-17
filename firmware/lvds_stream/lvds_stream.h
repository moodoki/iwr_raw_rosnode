/**
 *   @file  lvds_stream.h
 *
 *   @brief
 *      The exported header file for the LVDS Stream
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
#ifndef LVDS_STREAM_H
#define LVDS_STREAM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup LVDS_STREAM      LVDS Stream Profile
 *
 * The Profile can be used to capture ADC samples into memory and it
 * will also stream out the data via LVDS.
 *
 * Loading Profile:
 * ----------------
 * - The Profile can be loaded into the Test Framework by using the
 *   following profile configuration: "gLVDSStreamProfileCfg"
 *
 * Configurability:
 * ----------------
 *  - Supports XWR14xx/XWR16xx/XWR18xx/XWR68xx
 *  - Does *NOT* use the mmWave control module
 *  - Uses hardcoded EDMA channel identifiers.
 *  - Uses EDMA channels to DMA the data from the ADC buffer
 *    into the gDataCube memory. The gDataCube memory is global and the
 *    profile defines this global data buffer to be placed into the
 *    ".dataCubeMemory" memory section.
 *  - The size of the data cube memory is controlled by the definition
 *    LVDS_STREAM_PROFILE_MEM_CAPTURE_SIZE.
 *  - If the LVDS Stream Profile is configured to use headers than the
 *    headers are placed in the memory section .cbuffHeader. This needs
 *    to be placed into a memory which can be accessed by the EDMA and
 *    allow the streaming of the headers.
 *  - See the supported command section for more information
 *
 * Execution:
 * ----------
 * - The profile executes every chirp and if there is space will DMA the
 *   data into the global buffer as long as there is space in the buffer.
 */
/**
@defgroup LVDS_STREAM_GLOBAL                        LVDS Stream Global
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the globals exposed by the profile.
*/
/**
@defgroup LVDS_STREAM_DATA_STRUCTURES               LVDS Stream Profile Data Structures
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the data structures which are a part of the profile module
*   and which are exposed to the application
*/
/**
@defgroup LVDS_STREAM_DEFINITIONS                   LVDS Stream Definitions
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the definitions which are used by the LVDS Stream Profile.
*/
/**
@defgroup LVDS_STREAM_INTERNAL_DATA_STRUCTURES      LVDS Stream Profile Internal Data Structures
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the internal data structures which are a part of the profile module.
*/
/**
@defgroup LVDS_STREAM_INTERNAL_FUNCTION             LVDS Stream Profile Internal Functions
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the internal function which are a part of the profile module.
*   These are not exposed to the application and are completely abstracted by the framework.
*/
/**
@defgroup LVDS_STREAM_PROFILE_COMMAND               LVDS Stream Profile Commands
@ingroup LVDS_STREAM
@brief
*   This section has a list of all the commands which are supported by the LVDS Stream Profile
*/

/** @addtogroup LVDS_STREAM_DEFINITIONS
 @{ */

/**
 * @brief   The LVDS Stream Profile is used to stream out the data and it can also capture
 * the first N samples into the memory. This is primarily a debug feature to verify
 * the sanity of the data which has been sent out. The definition here is used to specify
 * the maximum size of the data capture.
 */
#define LVDS_STREAM_PROFILE_MEM_CAPTURE_SIZE                (16*1024)

/**
@}
*/

/** @addtogroup LVDS_STREAM_DATA_STRUCTURES
 @{ */

/**
 * @brief
 *  LVDS Stream Profile User Buffer
 *
 * @details
 *  The structure specifies the configuration which allows the
 *  streaming of the user buffers. The configuration allows upto
 *  2 users buffers to be specified.
 */
typedef struct TestFmk_LVDSStreamProfileUserBufCfg_t
{
    /**
     * @brief   Pointer to the user buffer which is to be streamed out
     * If this is set to NULL then user buffer1 is not streamed out.
     */
    uint8_t*    ptrUserBuffer1;

    /**
     * @brief   Size of the user buffer1
     */
    uint32_t    sizeUserBuffer1;

    /**
     * @brief   Pointer to the user buffer which is to be streamed out
     * If this is set to NULL then user buffer2 is not streamed out.
     */
    uint8_t*    ptrUserBuffer2;

    /**
     * @brief   Size of the user buffer
     */
    uint32_t    sizeUserBuffer2;
}TestFmk_LVDSStreamProfileUserBufCfg;

/**
@}
*/

/** @addtogroup LVDS_STREAM_PROFILE_COMMAND
 @{ */

/**
 * @brief
 *  This is the LVDS Stream Profile command to configure the number of chirps per frame
 *      arg    = &numChirps
 *      argLen = sizeof (uint32_t)
 */
#define LVDS_STREAM_PROFILE_SET_NUM_CHIRPS_PER_FRAME    (TEST_FMK_CMD_PROFILE_START_INDEX + 0U)

/**
 * @brief
 *  This is the LVDS Stream Profile command to configure the data format used by the
 *  HW Session
 *      arg    = &dataFormat
 *      argLen = sizeof (CBUFF_DataFmt)
 */
#define LVDS_STREAM_PROFILE_SET_HW_SESSION_DATA_FMT      (TEST_FMK_CMD_PROFILE_START_INDEX + 1U)

/**
 * @brief
 *  This is the LVDS Stream Profile command to enable the streaming of the user buffers
 *      arg    = &userBuffer
 *      argLen = sizeof (TestFmk_LVDSStreamProfileUserBufCfg)
 */
#define LVDS_STREAM_PROFILE_SET_USERBUF_STREAM          (TEST_FMK_CMD_PROFILE_START_INDEX + 2U)

/**
 * @brief
 *  This is the LVDS Stream Profile command to enable/disable the header mode
 *      arg    = &state
 *      argLen = sizeof (uint8_t)
 *
 *  If the state is set to 1 then a header will be added to the LVDS Stream
 *  If the state is set to 0 then no headers are added and raw data is streamed out.
 */
#define LVDS_STREAM_PROFILE_SET_HEADER_MODE             (TEST_FMK_CMD_PROFILE_START_INDEX + 3U)

/**
 * @brief
 *  This is the LVDS Stream Profile command to set the CQ1 Size
 *      arg    = &cqSize[ADCBufMMWave_CQType_MAX_CQ]
 *      argLen = sizeof (uint16_t) * ADCBufMMWave_CQType_MAX_CQ
 *
 * CQ size should be specified in CBUFF Units
 */
#define LVDS_STREAM_PROFILE_SET_CQ_SIZE                (TEST_FMK_CMD_PROFILE_START_INDEX + 4U)

/**
@}
*/

/* Application developers: Use this profile configuration to load the profile within the framework. */
extern TestFmk_ProfileCfg       gLVDSStreamProfileCfg;

#ifdef __cplusplus
}
#endif

#endif /* LVDS_STREAM_H */
