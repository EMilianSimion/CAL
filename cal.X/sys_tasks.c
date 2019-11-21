/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"

#include"asw_move.h"

//BOOL directie=0;
int cntDirectie=1;
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
   
    if(cntDirectie>4)
    {
        cntDirectie=1;
    }
     
    miscareMotor(0,cntDirectie*15);
  
    cntDirectie++;
    
    
    
}