/*
Copyright (c) 2017, 2019-2020 The Linux Foundation. All rights reserved.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 and
only version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*
*/

#ifndef __PLATFORM_GECKO_INIT_H__
#define __PLATFORM_GECKO_INIT_H__
int msm_dai_q6_hdmi_init(void);
int msm_dai_q6_init(void);
int msm_dai_slim_init(void);

void msm_dai_slim_exit(void);
void msm_dai_q6_exit(void);
void msm_dai_q6_hdmi_exit(void);

#endif

