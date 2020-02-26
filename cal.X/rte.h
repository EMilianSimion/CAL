/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:23 PM
 */

#include "hal_dc.h"
#include"hal_servomotor.h"

#ifndef RTE_H
#define	RTE_H
#define RTE_vInit Hal_vInit   
#define RTE_vSetMotorSpeed Hal_vSetMotorSpeed
#define RTE_vSetMotorDir Hal_vSetMotorDir

#define RTE_vSteServoMotor Hal_servo
#define RTE_vLeftRight Hal_leftRight
#define RTE_VBatery Hal_aflareProcent

#ifdef	__cplusplus
extern "C" {
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* RTE_H */

