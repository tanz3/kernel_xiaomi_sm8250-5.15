/*
 * Copyright (C) 2021 XiaoMi, Inc.
 *               2022 The LineageOS Project
 *
 * SPDX-License-Identifier: GPL-2.0
 */

#ifndef __HWID_H__
#define __HWID_H__

#include <linux/types.h>

#define HARDWARE_PROJECT_UNKNOWN    0
#define HARDWARE_PROJECT_CMI    1
#define HARDWARE_PROJECT_UMI    2
#define HARDWARE_PROJECT_LMI    3
#define HARDWARE_PROJECT_PIPA    4
#define HARDWARE_PROJECT_CAS    7
#define HARDWARE_PROJECT_APOLLO    8
#define HARDWARE_PROJECT_ALIOTH    9
#define HARDWARE_PROJECT_THYME    10
#define HARDWARE_PROJECT_ENUMA    11
#define HARDWARE_PROJECT_ELISH    12
#define HARDWARE_PROJECT_PSYCHE    13
#define HARDWARE_PROJECT_MUNCH    15
#define HARDWARE_PROJECT_DAGU    16

#define HW_MAJOR_VERSION_B    9
#define HW_MINOR_VERSION_B    1

typedef enum {
	CountryCN = 0x00,
	CountryGlobal = 0x01,
	CountryIndia = 0x02,
	CountryJapan = 0x03,
	INVALID = 0x04,
	CountryIDMax = 0x7FFFFFFF
} CountryType;

uint32_t get_hw_version_platform(void);
uint32_t get_hw_id_value(void);
uint32_t get_hw_country_version(void);
uint32_t get_hw_version_major(void);
uint32_t get_hw_version_minor(void);
uint32_t get_hw_version_build(void);
char* product_name_get(void);

#endif /* __HWID_H__ */
