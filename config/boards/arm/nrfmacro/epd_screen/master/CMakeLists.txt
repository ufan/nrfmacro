#
# Copyright (c) 2021 Darryl deHaan
# SPDX-License-Identifier: MIT
#

target_sources(app PRIVATE status_screen.c)
target_sources_ifdef(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS app PRIVATE widgets/battery_status.c)
target_sources_ifdef(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS app PRIVATE widgets/output_status.c)
target_sources_ifdef(CONFIG_CUSTOM_WIDGET_LAYER_STATUS app PRIVATE widgets/layer_status.c)

zephyr_library()

zephyr_library_include_directories(${ZEPHYR_LVGL_MODULE_DIR})
zephyr_library_include_directories(${ZEPHYR_BASE}/lib/gui/lvgl/)
zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
zephyr_library_include_directories(${ZEPHYR_BASE}/drivers)

# zephyr_library_sources(status_screen.c)
# zephyr_library_sources_ifdef(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS battery_status.c)
# zephyr_library_sources_ifdef(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS output_status.c)
# zephyr_library_sources_ifdef(CONFIG_CUSTOM_WIDGET_LAYER_STATUS layer_status.c)

if (CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
  zephyr_library_sources(batt_100.c)
  zephyr_library_sources(batt_100_chg.c)
  zephyr_library_sources(batt_75.c)
  zephyr_library_sources(batt_75_chg.c)
  zephyr_library_sources(batt_50.c)
  zephyr_library_sources(batt_50_chg.c)
  zephyr_library_sources(batt_25.c)
  zephyr_library_sources(batt_25_chg.c)
  zephyr_library_sources(batt_5.c)
  zephyr_library_sources(batt_5_chg.c)
  zephyr_library_sources(batt_0.c)
  zephyr_library_sources(batt_0_chg.c)
endif()

if (CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS)
  zephyr_library_sources(bluetooth_disconnected.c)
  zephyr_library_sources(USB_connected.c)
  zephyr_library_sources(bluetooth_connected_1.c)
  zephyr_library_sources(bluetooth_connected_2.c)
  zephyr_library_sources(bluetooth_connected_3.c)
  zephyr_library_sources(bluetooth_connected_4.c)
  zephyr_library_sources(bluetooth_connected_5.c)
  zephyr_library_sources(bluetooth_advertising_1.c)
  zephyr_library_sources(bluetooth_advertising_2.c)
  zephyr_library_sources(bluetooth_advertising_3.c)
  zephyr_library_sources(bluetooth_advertising_4.c)
  zephyr_library_sources(bluetooth_advertising_5.c)
endif()

if (CONFIG_CUSTOM_WIDGET_LAYER_STATUS)
  zephyr_library_sources(layers.c)
endif()
