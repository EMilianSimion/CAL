#include"asw_move.h"

void initMotor()
{
    Hal_vInit();
}
void miscareMotor(BOOL direction,T_F16 viteza)
{
  Hal_vSetMotorSpeed(viteza);
  Hal_vSetMotorDir(direction);//0->inainte
}
