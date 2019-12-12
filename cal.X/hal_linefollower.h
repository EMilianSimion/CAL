/* 
 * File:   hal_linefollower.h
 * Author: student
 *
 * Created on December 12, 2019, 4:22 PM
 */

#ifndef HAL_LINEFOLLOWER_H
#define	HAL_LINEFOLLOWER_H

#include"general.h"
#include"mcal_gpio.h"
void LF_vSetPinsDir (BOOL bDir);
void LF_vWritePins();
T_U8 LF_u8ReadPins();

#endif	/* HAL_LINEFOLLOWER_H */

