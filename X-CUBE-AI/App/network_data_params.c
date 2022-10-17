/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Oct 17 19:39:29 2022
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
const ai_u64 s_network_weights_array_u64[15] = {
  0x7f1f50441a2f2810U, 0x87c7c7f3e7e044aU, 0x2d41517043081850U, 0xf423e37f6e7ff622U,
  0x682d357409706643U, 0x5a4b7f1c31437ffdU, 0x81375df11e40134fU, 0x96d4f94687f9ded2U,
  0x815285ee3bcd470dU, 0xffffe6c0ffffecc9U, 0xffffec73ffffec04U, 0xffffead2ffffea0dU,
  0x8da10000a67bU, 0x7f6b82ba8f89d482U, 0x12c3U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

