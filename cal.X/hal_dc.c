#include"hal_dc.h"



void Hal_vSetMotorDir(BOOL bValue)
{ 
    GPIO_u8SetPortPin(PORT_A, 9, DIGITAL, OUTPUT);
    GPIO_u8WritePortPin(PORT_A, 9, bValue );
}
void Hal_vInit()
{
    PWM1_vInit();
    
}
void Hal_vSetMotorSpeed( T_F16 f16Duty)
{   
    if(f16Duty>100)
        f16Duty=100;
    else if(f16Duty<0)
        f16Duty=0;
    PWM1_vSetDuty(f16Duty,2);
}
    

