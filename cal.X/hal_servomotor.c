#include"hal_servomotor.h"


float aflaProcent(float grad)
{
    if(grad<10)
        grad=10;
    else if(grad>170)
        grad=170;
    grad=verificaUnghi(grad);
    return schimbaProcent(grad);
}
  float verificaUnghi(float grad)
  {
      if(grad<70)
          grad=70;
      else if(grad >140)
          grad=140;//145
      return grad;
  }
   
 float schimbaProcent(float grad)
 {
        return 4+(grad-10)*0.04375;
 }
 void Hal_servo(float grad)
 {
     grad=aflaProcent(grad);
     PWM1_vSetDuty(grad,1);
 }
 void Hal_leftRight(float *cntServo, BOOL *flag)
 {
    if(*cntServo<180&&*flag==0)
    {
    Hal_servo(*cntServo);
        *cntServo++;
    }
    if(*cntServo>=180)
    {
        *flag=1;
    }
    if(*cntServo<=0)
    {
        *flag=0;
    }
    if(*flag==1)
    {
        Hal_servo(*cntServo); 
        *cntServo--;
    }
 }
 