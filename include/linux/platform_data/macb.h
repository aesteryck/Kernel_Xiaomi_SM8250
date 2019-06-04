/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2004-2006 Atmel Corporation
 */
#ifndef __MACB_PDATA_H__
#define __MACB_PDATA_H__

#include <linux/clk.h>

/**
 * struct macb_platform_data - platform data for MACB Ethernet
 * @phy_mask:		phy mask passed when register the MDIO bus
 *			within the driver
 * @phy_irq_pin:	PHY IRQ
 * @is_rmii:		using RMII interface?
 * @rev_eth_addr:	reverse Ethernet address byte order
 * @pclk:		platform clock
 * @hclk:		AHB clock
 */
struct macb_platform_data {
	u32		phy_mask;
	int		phy_irq_pin;
	u8		is_rmii;
	u8		rev_eth_addr;
	struct clk	*pclk;
	struct clk	*hclk;
};

#endif /* __MACB_PDATA_H__ */
