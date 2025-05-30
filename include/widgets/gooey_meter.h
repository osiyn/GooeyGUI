#ifndef GOOEY_METER_H
#define GOOEY_METER_H

#include "common/gooey_common.h"
#if(ENABLE_METER)
GooeyMeter *GooeyMeter_Create(int x, int y, int width, int height, long initial_value, const char *label, const char *icon_path);
void GooeyMeter_Update(GooeyMeter *meter, long new_value);
#endif
#endif