
#include "general.h"
#include "sys_tasks.h"
#include "toggle.h"
#include "mcal_init.h"
#include "asw_com.h"
T_U16 stare_led = 0;
int cnt=0;

int cnt1=0;
T_U16 stare_led1 = 0;

void aprindere()
{ cnt++;
    if(cnt==20)
    {
        cnt=0;
    }
    if(cnt%2&&cnt<=10)
    {
        
        stare_led=!stare_led;
        GPIO_u8WritePortPin(PORT_A, 10, stare_led);
    }
    else
    {
        stare_led=0;
      GPIO_u8WritePortPin(PORT_A, 10, stare_led);  
    }
}

void aprindere2()
{
    cnt++;
    if(cnt==100)
    {
        cnt=0;
    }
    if(cnt<25)
    {
 
        GPIO_u8WritePortPin(PORT_A, 10, 1); 
    }
    else
    {
      GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
}