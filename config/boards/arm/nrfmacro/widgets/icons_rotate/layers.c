/*
*
* Copyright (c) 2021 Darryl deHaan
* SPDX-License-Identifier: MIT
*
*/

#include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LAYERS
#define LV_ATTRIBUTE_IMG_LAYERS
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LAYERS uint8_t layers_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0xe0, 0x00,0x00,
 0x00, 0x00, 0xf8, 0x03,0x00,
 0x00, 0x00, 0xfe, 0x0f,0x00,
 0x00, 0x80, 0xff, 0x3f,0x00,
 0x00, 0xf0, 0xff, 0xff,0x00,
 0x00, 0xfc, 0xff, 0xff,0x07,
 0x00, 0xff, 0xff, 0xff,0x1f,
 0x80, 0xff, 0xff, 0xff,0x3f,
 0x80, 0xff, 0xff, 0xff,0x3f,
 0x00, 0xff, 0x1f, 0xff,0x1f,
 0x00, 0xfc, 0x07, 0xfc,0x07,
 0x00, 0xf0, 0x01, 0xf0,0x01,
 0x00, 0x78, 0x00, 0xc0,0x03,
 0x00, 0x0e, 0x00, 0x00,0x0e,
 0x80, 0x03, 0x00, 0x00,0x38,
 0x80, 0x01, 0x00, 0x00,0x30,
 0x80, 0x03, 0xe0, 0x01,0x38,
 0x00, 0x0f, 0xfc, 0x07,0x1e,
 0x00, 0x3c, 0xff, 0x9f,0x07,
 0x00, 0xe0, 0xff, 0xff,0x00,
 0x00, 0xf0, 0xff, 0xff,0x01,
 0x00, 0xfe, 0xff, 0xff,0x0f,
 0x00, 0xff, 0xff, 0xff,0x1f,
 0x80, 0xff, 0xff, 0xff,0x3f,
 0x00, 0xff, 0xff, 0xff,0x1f,
 0x00, 0xfc, 0xff, 0xff,0x07,
 0x00, 0xf0, 0xff, 0xff,0x01,
 0x00, 0xc0, 0xff, 0x7f,0x00,
 0x00, 0x00, 0xff, 0x1f,0x00,
 0x00, 0x00, 0xfc, 0x07,0x00,
 0x00, 0x00, 0xe0, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00,0x00,
};

const lv_img_dsc_t layers = {
  .header.always_zero = 0,
  .header.w = 40,
  .header.h = 35,
  .data_size = 183,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = layers_map,
};
