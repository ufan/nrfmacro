/*
*
* Copyright (c) 2021 Darryl deHaan
* SPDX-License-Identifier: MIT
*
*/

#pragma once

#include <lvgl.h>
#include <kernel.h>

struct zmk_widget_layer_status {
    sys_snode_t node;
    lv_obj_t *obj;
    //lv_obj_t *obj2;
};

int zmk_widget_layer_status_init(struct zmk_widget_layer_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_layer_status_obj(struct zmk_widget_layer_status *widget);