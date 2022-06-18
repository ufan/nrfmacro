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
#ifndef LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_1
#define LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_1
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BLUETOOTH_ADVERTISING_1 uint8_t bluetooth_advertising_1_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0x80,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xc0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xe0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xf0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xf8,0x00,
 0x00 , 0xfc, 0x01, 0x00, 0x00, 0xfc,0x00,
 0x00 , 0xff, 0x0f, 0x00, 0x00, 0xfe,0x00,
 0x80 , 0xff, 0x1f, 0x00, 0x00, 0xff,0x20,
 0xe0 , 0xff, 0x3f, 0x00, 0x80, 0xf7,0x70,
 0xe0 , 0xff, 0x7f, 0xc0, 0xc0, 0xf3,0xf8,
 0xf0 , 0xff, 0xff, 0xc0, 0xe1, 0xf3,0x7c,
 0xf8 , 0xcf, 0xff, 0xe0, 0xc0, 0xf7,0x3e,
 0xf8 , 0xcf, 0xff, 0x61, 0x84, 0xff,0x1f,
 0xf8 , 0xcf, 0xff, 0x71, 0x0e, 0xff,0x0f,
 0xfc , 0xcf, 0xff, 0x31, 0x06, 0xfe,0x07,
 0xfc , 0xcf, 0xff, 0x33, 0x27, 0xfc,0x03,
 0xfc , 0xcf, 0xff, 0x33, 0x67, 0xf8,0x01,
 0xfc , 0xcf, 0xff, 0x33, 0x67, 0xf8,0x01,
 0xfc , 0xcf, 0xff, 0x33, 0x27, 0xfc,0x03,
 0xfc , 0xcf, 0xff, 0x31, 0x06, 0xfe,0x07,
 0xf8 , 0x0f, 0xfe, 0x71, 0x0e, 0xff,0x0f,
 0xf8 , 0x0f, 0xfe, 0x61, 0x84, 0xff,0x1f,
 0xf8 , 0x8f, 0xff, 0xe0, 0xc0, 0xf7,0x3e,
 0xf0 , 0xff, 0xff, 0xc0, 0xe0, 0xf3,0x7c,
 0xe0 , 0xff, 0x7f, 0xc0, 0xc1, 0xf3,0xf8,
 0xe0 , 0xff, 0x3f, 0x00, 0x80, 0xf7,0x70,
 0xc0 , 0xff, 0x1f, 0x00, 0x00, 0xff,0x20,
 0x00 , 0xff, 0x0f, 0x00, 0x00, 0xfe,0x00,
 0x00 , 0xfc, 0x01, 0x00, 0x00, 0xfc,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xf8,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xf0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xe0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0xc0,0x00,
 0x00 , 0x00, 0x00, 0x00, 0x00, 0x80,0x00,
};

const lv_img_dsc_t bluetooth_advertising_1 = {
  .header.always_zero = 0,
  .header.w = 54,
  .header.h = 35,
  .data_size = 253,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = bluetooth_advertising_1_map,
};
