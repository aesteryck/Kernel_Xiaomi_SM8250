/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Intel Low Power Subsystem PWM controller driver
 *
 * Copyright (C) 2014, Intel Corporation
 *
 * Derived from the original pwm-lpss.c
 */

#ifndef __PWM_LPSS_H
#define __PWM_LPSS_H

#include <linux/device.h>
#include <linux/pwm.h>

struct pwm_lpss_chip;

struct pwm_lpss_boardinfo {
	unsigned long clk_rate;
	unsigned int npwm;
	unsigned long base_unit_bits;
	bool bypass;
};

struct pwm_lpss_chip *pwm_lpss_probe(struct device *dev, struct resource *r,
				     const struct pwm_lpss_boardinfo *info);
int pwm_lpss_remove(struct pwm_lpss_chip *lpwm);
int pwm_lpss_suspend(struct device *dev);
int pwm_lpss_resume(struct device *dev);

#endif	/* __PWM_LPSS_H */
