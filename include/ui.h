#pragma once
#include "lvgl/lvgl.h"

// 显示设备
#define WIN
#ifdef WIN
// 在win上的缩放倍率
#define SCALE 10
#else
#define SCALE 1
#endif

// 显示屏水平
#define TARGET_WIDGET_H 160
// 显示屏垂直
#define TARGET_WIDGET_V 80

// 实际水平
#define WIDGET_H TARGET_WIDGET_H*SCALE
// 实际垂直
#define WIDGET_V TARGET_WIDGET_V*SCALE



// 根据设置缩放倍率调节位置
void obj_set_pos(lv_obj_t * obj, int32_t x, int32_t y);
// 根据设置缩放倍率调节大小
void obj_set_size(lv_obj_t * obj, int32_t w, int32_t h);
