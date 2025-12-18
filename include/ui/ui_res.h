#pragma once

#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

// 图片资源
extern const lv_image_dsc_t system_info;
extern const lv_image_dsc_t about;
extern const lv_image_dsc_t microphone;
extern const lv_image_dsc_t audio;
extern const lv_image_dsc_t usb;
extern const lv_image_dsc_t wifi;
extern const lv_image_dsc_t bt;
// 字体资源
extern const lv_font_t lv_font_harmonyos_12;
extern const lv_font_t lv_font_harmonyos_14;
extern const lv_font_t lv_font_harmonyos_16;

// lottie资源
extern unsigned char Insider_loading_json[];
extern unsigned int Insider_loading_json_len;

extern unsigned char blue_finish_json[];
extern unsigned int blue_finish_json_len;

extern unsigned char Bluetooth_connect_json[];
extern unsigned int Bluetooth_connect_json_len;

extern unsigned char Bluetooth_finish_json[];
extern unsigned int Bluetooth_finish_json_len;

extern unsigned char fail_json[];
extern unsigned int fail_json_len;
