#include "asw_battery.h"

void asw_Led()
{
    int procentaj = Hal_aflareProcent();
    int aprind = procentaj/10;
    int i=0;
    for(i=0;i<aprind; ++i)
    {
        GPIO_u8WritePortPin(PORT_A, 10, 1);
        GPIO_u8WritePortPin(PORT_A, 10, 0); 
    }
    if(procentaj>50)
        GPIO_u8WritePortPin(PORT_A, 10, 1); 
    else
        GPIO_u8WritePortPin(PORT_A, 10, 0); 
    
    
}
