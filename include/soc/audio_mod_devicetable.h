/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021 The Linux Foundation. All rights reserved.
 */

#ifndef AUDIO_MOD_DEVICETABLE_H
#define AUDIO_MOD_DEVICETABLE_H

#include <linux/mod_devicetable.h>

/* gpr */
#define GPR_NAME_SIZE	32
#define GPR_MODULE_PREFIX "gpr:"

struct gpr_device_id {
	char name[GPR_NAME_SIZE];
	__u32 domain_id;
	__u32 svc_id;
	__u32 svc_version;
	kernel_ulong_t driver_data;	/* Data private to the driver */
};

#endif /* AUDIO_MOD_DEVICETABLE_H */

