/*
 * Copyright (c) 2012-2016 Toradex, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/* AS3722-PMIC-specific early init regs */

#define AS3722_I2C_ADDR		0x80

#define AS3722_SD0VOLTAGE_REG	0x00	/* CPU */
#define AS3722_SD1VOLTAGE_REG	0x01	/* CORE, already set by OTP */
#define AS3722_SD6VOLTAGE_REG	0x06	/* GPU */
#define AS3722_SDCONTROL_REG	0x4D

#define AS3722_LDO1VOLTAGE_REG	0x11	/* VDD_SDMMC1 */
#define AS3722_LDO2VOLTAGE_REG	0x12	/* VPP_FUSE */
#define AS3722_LDO6VOLTAGE_REG	0x16	/* VDD_SDMMC3 */
#define AS3722_LDCONTROL_REG	0x4E

#if defined(CONFIG_TARGET_APALIS_TK1) || defined(CONFIG_TARGET_JETSON_TK1)
#define AS3722_SD0VOLTAGE_DATA	(0x3C00 | AS3722_SD0VOLTAGE_REG)
#else
#define AS3722_SD0VOLTAGE_DATA	(0x2800 | AS3722_SD0VOLTAGE_REG)
#endif
#define AS3722_SD0CONTROL_DATA	(0x0100 | AS3722_SDCONTROL_REG)

#define AS3722_SD1VOLTAGE_DATA	(0x3200 | AS3722_SD1VOLTAGE_REG)
#define AS3722_SD1CONTROL_DATA	(0x0200 | AS3722_SDCONTROL_REG)

#define AS3722_SD6CONTROL_DATA	(0x4000 | AS3722_SDCONTROL_REG)
#define AS3722_SD6VOLTAGE_DATA	(0x2800 | AS3722_SD6VOLTAGE_REG)

#define AS3722_LDO1CONTROL_DATA	(0x0200 | AS3722_LDCONTROL_REG)
#define AS3722_LDO1VOLTAGE_DATA	(0x7F00 | AS3722_LDO1VOLTAGE_REG)

#define AS3722_LDO2CONTROL_DATA	(0x0400 | AS3722_LDCONTROL_REG)
#define AS3722_LDO2VOLTAGE_DATA	(0x1000 | AS3722_LDO2VOLTAGE_REG)

#define AS3722_LDO6CONTROL_DATA	(0x4000 | AS3722_LDCONTROL_REG)
#define AS3722_LDO6VOLTAGE_DATA	(0x3F00 | AS3722_LDO6VOLTAGE_REG)

#define I2C_SEND_2_BYTES	0x0A02

void pmic_enable_cpu_vdd(void);
