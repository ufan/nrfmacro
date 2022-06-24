#
# Copyright (c) 2021 Darryl deHaan
# SPDX-License-Identifier: MIT
#

zephyr_library()

zephyr_library_include_directories(${ZEPHYR_LVGL_MODULE_DIR})
zephyr_library_include_directories(${ZEPHYR_BASE}/lib/gui/lvgl/)
zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
zephyr_library_include_directories(${ZEPHYR_BASE}/drivers)

zephyr_library_sources(status_screen.c)
zephyr_library_sources_ifdef(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS battery_status.c)
zephyr_library_sources_ifdef(CONFIG_CUSTOM_WIDGET_PERIPHERAL_STATUS peripheral_status.c)

# if (CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
#   zephyr_library_sources(icons/batt_100.c)
#   zephyr_library_sources(icons/batt_100_chg.c)
#   zephyr_library_sources(icons/batt_75.c)
#   zephyr_library_sources(icons/batt_75_chg.c)
#   zephyr_library_sources(icons/batt_50.c)
#   zephyr_library_sources(icons/batt_50_chg.c)
#   zephyr_library_sources(icons/batt_25.c)
#   zephyr_library_sources(icons/batt_25_chg.c)
#   zephyr_library_sources(icons/batt_5.c)
#   zephyr_library_sources(icons/batt_5_chg.c)
#   zephyr_library_sources(icons/batt_0.c)
#   zephyr_library_sources(icons/batt_0_chg.c)
# endif()

