/* 
 * File:   asw_move.h
 * Author: student
 *
 * Created on November 21, 2019, 7:01 PM
 */

#include"hal_dc.h"

#ifndef ASW_MOVE_H
#define	ASW_MOVE_H

#ifdef	__cplusplus
extern "C" {
#endif

    void initMotor();
    void miscareMotor(BOOL direction,T_F16 viteza);
    


#ifdef	__cplusplus
}
#endif

#endif	/* ASW_MOVE_H */

