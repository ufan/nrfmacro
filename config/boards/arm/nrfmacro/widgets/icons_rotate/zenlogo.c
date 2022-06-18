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

#ifndef LV_ATTRIBUTE_IMG_ZENLOGO
#define LV_ATTRIBUTE_IMG_ZENLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ZENLOGO uint8_t zenlogo_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0xa0, 0xff, 0x0f, 0xff, 0x0f, 0x00,0x00,
 0x00, 0x00, 0x03, 0xf8, 0xff, 0xff, 0xff, 0x1f, 0x00,0x00,
 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xfc, 0xff, 0x1f, 0x00,0x00,
 0x00, 0xc0, 0x0f, 0xf8, 0x00, 0xfc, 0xff, 0x1f, 0x00,0x00,
 0x00, 0xc0, 0x0f, 0x78, 0x00, 0xbc, 0xff, 0x1f, 0x00,0x00,
 0x00, 0xc0, 0x0f, 0x78, 0x00, 0x3c, 0xf8, 0x1f, 0x00,0x00,
 0x00, 0xc0, 0x0f, 0x7e, 0x00, 0x3c, 0xc0, 0x0f, 0x00,0x00,
 0x00, 0xe0, 0x0f, 0x7e, 0x00, 0x3e, 0xe0, 0x07, 0x00,0x00,
 0x00, 0xe0, 0x0f, 0x7e, 0x80, 0x1f, 0xf8, 0x03, 0x00,0x00,
 0x00, 0xf0, 0x0f, 0x3f, 0xfe, 0x1f, 0xfe, 0x00, 0x00,0x00,
 0x00, 0xf0, 0x1f, 0x3f, 0xff, 0x8f, 0x7f, 0x00, 0x00,0x00,
 0x00, 0xf0, 0x9f, 0x1f, 0xff, 0xef, 0x1f, 0x00, 0x00,0x00,
 0x00, 0xf8, 0x9f, 0x1f, 0x8f, 0xff, 0x0f, 0x00, 0x00,0x00,
 0x00, 0xf8, 0xdc, 0x0f, 0xc0, 0xff, 0x01, 0x80, 0xff,0xdf,
 0x00, 0xfc, 0xfc, 0x07, 0xc0, 0xff, 0xe0, 0xff, 0x1f,0x40,
 0x00, 0x3e, 0xfc, 0x01, 0xe0, 0xff, 0xff, 0x1f, 0xc0,0x7f,
 0x00, 0x1f, 0xfc, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff,0x00,
 0x00, 0x1f, 0xfc, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x03,0x00,
 0x80, 0x1f, 0xf8, 0xe0, 0xff, 0xfb, 0xff, 0x0f, 0x00,0x00,
 0xc0, 0x0f, 0x60, 0x00, 0xf8, 0xf1, 0xff, 0x00, 0x00,0x00,
 0xe0, 0x07, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00,0x00,
 0xfc, 0x03, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,0x00,
 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x10, 0x72, 0x02, 0x3e, 0x21, 0xe4, 0xe3, 0x03,0x00,
 0x00, 0x10, 0x8a, 0x02, 0x63, 0x21, 0x34, 0x36, 0x06,0x00,
 0x00, 0x10, 0x0a, 0x02, 0x41, 0x21, 0x14, 0x14, 0x04,0x00,
 0x00, 0x10, 0x0a, 0x02, 0x40, 0x21, 0x14, 0x04, 0x04,0x00,
 0x00, 0x10, 0x72, 0x7a, 0x7f, 0x21, 0x14, 0x04, 0x04,0x00,
 0x00, 0x10, 0x82, 0x02, 0x41, 0x21, 0x14, 0x14, 0x04,0x00,
 0x00, 0x10, 0x8b, 0x02, 0x63, 0x33, 0x36, 0x36, 0x06,0x00,
 0x00, 0xe0, 0x72, 0x02, 0x3e, 0x9e, 0xe3, 0xe3, 0x03,0x00,
 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00,
};

const lv_img_dsc_t zenlogo = {
  .header.always_zero = 0,
  .header.w = 80,
  .header.h = 38,
  .data_size = 388,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = zenlogo_map,
};
