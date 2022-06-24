#
# Copyright (c) 2021 Darryl deHaan
# SPDX-License-Identifier: MIT
#

if(CONFIG_ZMK_DISPLAY AND CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM)
  add_subdirectory_ifdef(CONFIG_NRFMACO_EPD_DISPLAY epd_screen)
  add_subdirectory_ifdef(CONFIG_NRFMACO_LCD_DISPLAY lcd_screen)
  add_subdirectory_ifdef(CONFIG_NRFMACO_OLED_DISPLAY oled_screen)
endif()
