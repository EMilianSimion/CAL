

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"

#include"asw_move.h"

#include"rte.h"
#include"hal_servomotor.h"
#include"hal_linefollower.h"

//BOOL directie=0;
int cntDirectie=0;
float cntServo=90;
BOOL flag=0;//stanga
T_U8 valoareNegru;
T_U8 mascaStanga = 0x00110000;
T_U8 mascaDreapta = 0x00000011;
T_U8 mascaCentru = 0x00010000;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    Hal_servo(90);//sa, mearga drept
    initMotor();
    miscareMotor(0, 30);
    
    
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   
    //aprindere2();
    //RTE_vLeftRight(&cntServo,&flag);
   
}

void TASK_100ms()
{ 
   
    //aprindere();
    valoareNegru=LF_u8ReadPins();
    if(valoareNegru & mascaCentru)
    {
        
        miscareMotor(0, 30);
  
        if((valoareNegru & mascaStanga )!= 0)
        {
            Hal_servo(80);//stanga
        }
        else if((valoareNegru&mascaDreapta)!=0)
        {
            Hal_servo(100);
        }
        else{
            Hal_servo(90);
        }
            
    }
    else 
    {
      miscareMotor(1, 0);  
    }

  
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
    
   // a = !a;
    //GPIO_u8WritePortPin(PORT_A, 10, a);
   
    //if(cntDirectie>4)
    //{
     //   cntDirectie=1;
    //}
     
    //miscareMotor(0,cntDirectie*15);
  
  //  cntDirectie++;
    
 
    
    
}