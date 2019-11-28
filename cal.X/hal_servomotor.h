/* 
 * File:   hal_servomotor.h
 * Author: student
 *
 * Created on November 28, 2019, 6:25 PM
 */

#ifndef HAL_SERVOMOTOR_H
#define	HAL_SERVOMOTOR_H

#include"mcal_pwm.h"


    float aflaProcent(float grad);
    float verificaUnghi(float grad);
    float schimbaProcent(float grad);
    void Hal_servo(float grad);
    void Hal_leftRight(float *grad, BOOL *direction);
    


#endif	/* HAL_SERVOMOTOR_H */

