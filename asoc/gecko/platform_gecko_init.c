/*
Copyright (c) 2017, 2020, The Linux Foundation. All rights reserved.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 and
only version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*
*/

#include <linux/kernel.h>
#include <linux/module.h>
#include "platform_gecko_init.h"

static int __init audio_platform_gecko_init(void)
{
	msm_dai_q6_hdmi_init();
	msm_dai_q6_init();

	return 0;
}

static void audio_platform_gecko_exit(void)
{
	msm_dai_q6_exit();
	msm_dai_q6_hdmi_exit();
}

module_init(audio_platform_gecko_init);
module_exit(audio_platform_gecko_exit);

MODULE_DESCRIPTION("Audio Platform Gecko driver");
MODULE_LICENSE("GPL v2");
