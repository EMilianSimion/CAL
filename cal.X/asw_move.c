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

void moved_until()
{
    static int  mers = 0;
    mers+= hal_moved();  
    if(mers<10)
    {
        miscareMotor(0,30);
    }
    else
        miscareMotor(0,0);//inapoi cu viteza 0
}