/*
 * ii2clx.h
 *
 *  Created on: Sep 8, 2021
 *      Author: miir_ho3ein
 */

#ifndef INC_II2CLX_H_
#define INC_II2CLX_H_

static const uint8_t IIS2CLX_DEV_ADDR       = 0xD6;
static const uint8_t IIS2CLX_CTRL1_LX_ADDR  = 0x10;
static const uint8_t IIS2CLX_X_AXIS_L_ADDR  = 0x28; 

static const uint8_t POWER_DOWN_ACCL    = 0x00;
static const uint8_t II2CLX_ODR_12_5Hz  = 0x10;
static const uint8_t II2CLX_ODR_26Hz    = 0x20;
static const uint8_t II2CLX_ODR_52Hz    = 0x30;
static const uint8_t II2CLX_ODR_104Hz   = 0x40;
static const uint8_t II2CLX_ODR_208Hz   = 0x50;
static const uint8_t II2CLX_ODR_416Hz   = 0x60;
static const uint8_t II2CLX_ODR_833Hz   = 0x70;  


static const uint8_t IIS2CLX_FS_0_5_G   = 0x00;
static const uint8_t IIS2CLX_FS_3_G     = 0x04;
static const uint8_t IIS2CLX_FS_1_G     = 0x08;
static const uint8_t IIS2CLX_FS_2_G     = 0x0C;


#endif /* INC_II2CLX_H_ */
