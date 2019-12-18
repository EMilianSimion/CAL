

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
T_U8 mascaStanga = 0b00110000;
T_U8 mascaStanga2 = 0b00100000;

T_U8 mascaDreapta = 0b00000011;
T_U8 mascaDreapta2 = 0b00000001;
T_U8 mascaCentru = 0b00001100;
BOOL ramasS=0;
BOOL ramasD=0;
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
     valoareNegru=LF_u8ReadPins();
    if(valoareNegru!=0)
    {
       miscareMotor(0, 50);
        if(0b00100000&valoareNegru)
        {
           Hal_servo(0);
           ramasS=1;
        }
        if(0b00010000&valoareNegru)
           Hal_servo(80);
        if((0b00001100&valoareNegru) &&(0b00110011&valoareNegru==0))//if(0b00001100&valoareNegru)//schimbare centru
           Hal_servo(90);
        if(0b00000001&valoareNegru)
        {
           Hal_servo(200);
           ramasD=1;
        }
        if(0b00000010&valoareNegru)
           Hal_servo(100);
        
    
            
    }
    else 
    {
        if(ramasS) 
        {
           Hal_servo(200); 
        }
        else
        {
           Hal_servo(0); 
        }
        miscareMotor(1, 20);  
    }
   
}

void TASK_100ms()
{ 
   
    //aprindere();
   
         /* 
        if(valoareNegru&mascaCentru!=0)
        {
            miscareMotor(0, 30);
            Hal_servo(90);
        }
        if((valoareNegru & mascaStanga )!= 0)
        {
            Hal_servo(80);//stanga
            if(valoareNegru&mascaStanga2)
                Hal_servo(65);
        }
        else if((valoareNegru&mascaDreapta)!=0)
        {
            Hal_servo(100);
            if(valoareNegru&mascaDreapta2)
                Hal_servo(120);
        }     * */
      
        
        
     

  
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