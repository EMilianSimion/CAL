/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 21, 2019, 6:19 PM
 */

#include "general_types.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"

#ifndef HAL_DC_H
#define	HAL_DC_H

#ifdef	__cplusplus
extern "C" {
#endif

    void Hal_vSetMotorDir(BOOL a);
    void Hal_vInit();
    void Hal_vSetMotorSpeed( T_F16 f16Duty);
    


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

