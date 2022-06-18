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

#ifndef LV_ATTRIBUTE_IMG_LAYERS2
#define LV_ATTRIBUTE_IMG_LAYERS2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LAYERS2 uint8_t layers2_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x04, 0xe0, 0xd8, 0x1f, 0xc6, 0xb0, 0x3f, 0x80,0x00,
 0x00, 0x04, 0xc0, 0xd9, 0x1f, 0xc6, 0xb0, 0x3f, 0xc0,0x01,
 0x00, 0x04, 0x80, 0x1b, 0x18, 0xc6, 0x39, 0x30, 0xe0,0x03,
 0x00, 0x04, 0x80, 0x1f, 0x18, 0xc7, 0x3f, 0x30, 0x80,0x00,
 0x00, 0x04, 0xc0, 0xd9, 0x9f, 0xcf, 0x30, 0x30, 0x80,0x00,
 0x00, 0x1f, 0xe0, 0x18, 0xd8, 0xd8, 0x30, 0x30, 0x80,0x00,
 0x00, 0x0e, 0xe0, 0x18, 0xd8, 0x98, 0x19, 0x30, 0x80,0x00,
 0x00, 0x04, 0xc0, 0xdf, 0xdf, 0x18, 0x0f, 0x30, 0x80,0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
};

const lv_img_dsc_t layers2 = {
  .header.always_zero = 0,
  .header.w = 78,
  .header.h = 12,
  .data_size = 128,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = layers2_map,
};
