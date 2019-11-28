

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"

#include"asw_move.h"

#include"rte.h"
#include"hal_servomotor.h"

//BOOL directie=0;
int cntDirectie=0;
float cntServo=90;
BOOL flag=0;//stanga
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    initMotor();
    
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
    RTE_vLeftRight(&cntServo,&flag);
   
}

void TASK_100ms()
{ 
   
    //aprindere();

  
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