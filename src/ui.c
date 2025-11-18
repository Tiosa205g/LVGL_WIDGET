#include "ui.h"

// 根据设置缩放倍率调节位置
void obj_set_pos(lv_obj_t * obj, int32_t x, int32_t y)
{
    lv_obj_set_pos(obj,x*SCALE,y*SCALE);
}

// 根据设置缩放倍率调节大小
void obj_set_size(lv_obj_t * obj, int32_t w, int32_t h)
{
    lv_obj_set_size(obj, w*SCALE, h*SCALE);
}
