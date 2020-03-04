#include "hal_f16distanceMoved.h"
int hal_moved()
{
    T_U16 move = QEI_s16getElapsed();//numarul de impulsuri
    return move/100;//distanta in centimetrii
    
}
