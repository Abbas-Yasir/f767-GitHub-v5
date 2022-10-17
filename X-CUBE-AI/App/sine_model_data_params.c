/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Oct 17 18:56:13 2022
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

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0xbdb83748bc8c51e0U, 0x3eb8768bbe34b54eU, 0xba217120bedcb65aU, 0xbeea58d4be90ce03U,
  0x3ebab7bdbe28af38U, 0xbef3efb63f324981U, 0xbed4fe993e320e9fU, 0xbe6c1d48be8ee3a1U,
  0x0U, 0x3f42daf800000000U, 0x3f968eba00000000U, 0x0U,
  0xbf1c541900000000U, 0xbd742a79U, 0xbed2f3fdU, 0x0U,
  0x3d6b29c0be6c7d58U, 0x3e8c11c7be9a7f88U, 0x3e5829c03e09515aU, 0xbe995cf6be4e4e5eU,
  0x3d3dcdc0be98af23U, 0xbe4a4996bf4702f6U, 0x3de68514bea2fb21U, 0x3d82ea503ea3d23bU,
  0x3dd889f4bec6d436U, 0x3d1ba4a53eb2e5b9U, 0x3e9e2aeb3e8d3597U, 0xbcbe09703e6cb91aU,
  0xbeb4ef13beda91dcU, 0xbec1a0f0befe5a7dU, 0xbea334383ed14ac2U, 0x3ea3f403be4d1e65U,
  0x3eda2633bda22524U, 0x3ec5bfd53e683936U, 0x3f561b52beac880aU, 0xbdb2bb88bc9aae20U,
  0xbf87b88ebd14aee8U, 0x3ea0a17bbee04b71U, 0xbdf7a408bf95b4c4U, 0x3ec481e33e2e3d06U,
  0x3db81fecbeb6dcd7U, 0x3eb3ad553ec2e55fU, 0xbe2ef63abd8c2d80U, 0xbe1f0e003e6ba8deU,
  0xbe157222beb64974U, 0x3eaf6ab73ebb73a4U, 0x3e7be5a2bd13009fU, 0xbe68a8d83c995540U,
  0x3ec691833e800005U, 0xbe24d0843ed05fc1U, 0xbe6a30b8be48d6edU, 0x3e8f4aaf3e2d76f2U,
  0xbe3cacba3ea94bb3U, 0x3e375c1ebc8de570U, 0xbe1955a8bddf9088U, 0x3d9df6d4be17c0aeU,
  0xbe10db5e3e8ffca1U, 0x3d2a0780be8b278cU, 0xbe9abdf33eb52035U, 0xbe24a0b83e1e9f4eU,
  0xbe276b4f3ed3ce33U, 0x3e8ef4d7bc36b902U, 0xbd3b53b8be266716U, 0xbe94ce7bbebc268fU,
  0xbce8bb10bec1b55fU, 0x3d1eff7bbc88c800U, 0xbe65f7efbebbc946U, 0xbe2fa84abe0846baU,
  0x3ee63f94be8f570eU, 0x3d2df0e03e4d64baU, 0xbe2053a03ebaaca8U, 0x3ec076d73e092b46U,
  0xbc16a4803e24bfd2U, 0xbe858b973e52827eU, 0x3e9a9ce5be0f8b30U, 0xbe96d896beb77d8eU,
  0x3e8ba99dbe3263caU, 0x3ecfd92fbee843aeU, 0x3eabfa093e9b515dU, 0xbed6f8013e49a1a2U,
  0x3e86fc033d91f404U, 0x3dbe952c3eb009ffU, 0xbdc12af53e916dddU, 0xbe7256763e9d86a9U,
  0x3f1526903e6f4592U, 0xbde2646c3e37abd4U, 0xbd005e503f09765bU, 0x3edb5b4bbcf32910U,
  0xbd506da8be9a2d94U, 0xbe02aadc3eca608fU, 0x3edbfca6beb1a374U, 0xbeba8c86be945625U,
  0xbefb9aa3beb3ca84U, 0x3eb02663be9df1baU, 0x3d868b20bd1a27eeU, 0x3e8fef99be76bdebU,
  0x3d66b4f8be4080beU, 0x3e6f6872bdfeef08U, 0x3debe410bea5e9d2U, 0xbdeaffecbea4106bU,
  0xbea96b17bd8196a0U, 0xbe8a54023ec80890U, 0x3e94aa91bd08a427U, 0x3e8f24f9bd870aa8U,
  0x3e09953a3ca3c640U, 0x3dd601b33cde3af0U, 0x3deb147dbec53716U, 0xbda11bdc3e8346c7U,
  0xbeee35333e407b0aU, 0xbec5ff5fbf5aa826U, 0x3da1fc043eb5d2c7U, 0xbe912099be961f3bU,
  0xbcd439403d1a90d0U, 0x3e2c601bbe4f7f1aU, 0x3eed4a6cbdef6af0U, 0xbe811f79bb048080U,
  0xbc859fa4bec09cafU, 0xbe4927f4be15df95U, 0x3e154f76be146071U, 0x3ecec5b13ea76dd5U,
  0x3ebfd1093ebe9785U, 0x3d34f91e3e98df91U, 0x3efff7fc3ecb0441U, 0xbe17c7da3ea48945U,
  0x3c9c063d3dc0d66cU, 0x3e74ab82bcfd750fU, 0x3e2dd0e6bed3dd8bU, 0xbda3a344bd77d158U,
  0xbcd05cb03d08c210U, 0xbed0e3b7bd275148U, 0x3e8d24673edcf1efU, 0x3eae1b75bd2b0a58U,
  0xbd37bad03e848111U, 0x3e456ed63de86a44U, 0xbeb864643dc2d464U, 0xbedd1ad63e9ca2f7U,
  0xbe30c9c23df07fb4U, 0x3eb54550be2217a2U, 0x3e278ab3be8e0566U, 0x3ebd6999bec1e7d5U,
  0xbde92e2c3e4f7702U, 0xbdb472203e3dc1e4U, 0x3ed74949bdf5dfe7U, 0x3ed7dbffbe3764b2U,
  0x3e8e7f353e2f3e1fU, 0x3cd579453f38c1f0U, 0xbb4f3c9600000000U, 0x3d87a0c5be2b40cbU,
  0x3e2ed87dbe1b867dU, 0x3e8468063d159a24U, 0x3d1002a83d183346U, 0xbe0c8ec4bc9b6c14U,
  0xbf40f305bf18254cU, 0xbdb01cb43fbd0102U, 0xbf036eadbf16bba6U, 0xbea089a83e90ca61U,
  0xbee5dc603e4351c7U, 0xbf76c141bf1726d7U, 0xbf3cca71bf3c5107U, 0x3ed3c5a43ef48f45U,
  0xbe0c9318U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

