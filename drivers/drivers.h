/**
  ******************** (C) COPYRIGHT 2010 DJI **********************************
  *
  * @Project Name       : BL_WKM2_LED_IAP.uvproj
  * @File Name          : drivers.h
  * @Environment        : keil mdk4.12/LPC1765/100M cclock
  * @Author&Date        : 2011-01-27 
  * @Version            : 1.00
  ******************************************************************************
  * @Description
  *	    lpc17xx on chip peripheral derivers        
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DRIVERS_H__
#define __DRIVERS_H__

/* Includes ------------------------------------------------------------------*/
/* STANDARD LIBRARIES */
#include  <string.h>
#include  <stdarg.h>
#include  <stdio.h>
#include  <stdlib.h>
#include <LPC17xx.h>

/* app */
extern volatile uint32_t g_current_tick;
extern volatile uint32_t g_motor_start_tick;
//extern volatile uint32_t g_led_indicate_get_tick;
//extern uint8_t g_MotorCheckFlag;

/* bsp */
#include "../bsp/bsp.h"

/* drivers */
#include "drivers_def.h"
#include "gpio/lpc17xx_gpio.h"
#include "clkpwr/lpc17xx_clkpwr_ctl.h"
#include "uart/lpc17xx_uart.h"
#include "timer/lpc17xx_timer.h"
#include "wdt/lpc17xx_wdt.h"
#include "user_led.h"	
#include "user_interrupt.h"
#include "user_pwm.h"
#include "user_sensor.h"
#include "adc/lpc17xx_adc.h"
#define MOTOR_NUM  2
#define ArgBoardFirmwareVersion (0x010407ff)// 19
/*******************  (C) COPYRIGHT 2010 DJI ************END OF FILE***********/
#endif
