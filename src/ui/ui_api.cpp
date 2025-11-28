// 界面会调用这些函数用来获取数据
#include "ui/ui.h"

// 获取设备左声道音量大小百分比
int32_t get_left_voice_per(const char *device_name)
{
    int32_t vp;
    vp = 30;
    return vp;
}
// 获取设备右声道音量大小百分比
int32_t get_right_voice_per(const char *device_name)
{
    int32_t vp;
    vp = 50;
    return vp;
}
// 获取设备信号强度百分比
int32_t get_signal_per(const char *device_name)
{
    int32_t sp;
    sp = 80;
    return sp;
}
// 获取设备电量百分比
int32_t get_power_per(const char *device_name)
{
    int32_t p;
    p = 70;
    return p;
}
// 获取设备上传速度
char *get_upload_speed()
{
    static char s[] = "1.1b/s"; // 因为没办法直接确定单位，所以设置返回值为字符串 比如 1.1 b/s 100kb/s 直接作为数据显示输出
    return s;
}

// 获取设备下载速度
char *get_download_speed()
{
    static char s[] = "1.1b/s"; // 因为没办法直接确定单位，所以设置返回值为字符串 比如 1.1 b/s 100kb/s 直接作为数据显示输出
    return s;
}
