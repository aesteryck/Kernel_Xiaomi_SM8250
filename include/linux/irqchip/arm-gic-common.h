/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * include/linux/irqchip/arm-gic-common.h
 *
 * Copyright (C) 2016 ARM Limited, All Rights Reserved.
 */
#ifndef __LINUX_IRQCHIP_ARM_GIC_COMMON_H
#define __LINUX_IRQCHIP_ARM_GIC_COMMON_H

#include <linux/types.h>
#include <linux/ioport.h>

enum gic_type {
	GIC_V2,
	GIC_V3,
};

struct gic_kvm_info {
	/* GIC type */
	enum gic_type	type;
	/* Virtual CPU interface */
	struct resource vcpu;
	/* Interrupt number */
	unsigned int	maint_irq;
	/* Virtual control interface */
	struct resource vctrl;
	/* vlpi support */
	bool		has_v4;
};

const struct gic_kvm_info *gic_get_kvm_info(void);

#endif /* __LINUX_IRQCHIP_ARM_GIC_COMMON_H */
