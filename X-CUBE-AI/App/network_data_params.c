/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Oct 17 14:43:42 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[16] = {
  0x7f745258607b4637U, 0x1cb581dd03a1416dU, 0xaa81af9ca4e9afe8U, 0xde01e8818d8aade2U,
  0x435b7f2f90dac6b6U, 0x33705f6f6c38484bU, 0x2f14e247f407e6dU, 0x81c9fa9a2381e48eU,
  0x3b1138705f8dca2U, 0xfffff064ffffe0deU, 0x9e4d0000d3adU, 0xffffe380ffffe498U,
  0x7c8800007d2cU, 0x8d9a1a5f81941c2cU, 0x63518bea6e491ac3U, 0x786fffff87aU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

