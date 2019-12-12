#include"hal_linefollower.h"

void LF_vSetPinsDir (BOOL bDir)//1 pentru input, 0 pentru output
{

    GPIO_u8SetPortPin(PORT_C, 0, DIGITAL, bDir );
    GPIO_u8SetPortPin(PORT_C, 1, DIGITAL, bDir );
    GPIO_u8SetPortPin(PORT_C, 2, DIGITAL, bDir );
    GPIO_u8SetPortPin(PORT_C, 3, DIGITAL, bDir );
    GPIO_u8SetPortPin(PORT_C, 4, DIGITAL, bDir );
    GPIO_u8SetPortPin(PORT_C, 5, DIGITAL, bDir );
}
void LF_vWritePins()
{
    GPIO_u8WritePortPin(PORT_C, 0, 1);
    GPIO_u8WritePortPin(PORT_C, 1, 1);
    GPIO_u8WritePortPin(PORT_C, 2, 1);
    GPIO_u8WritePortPin(PORT_C, 3, 1);
    GPIO_u8WritePortPin(PORT_C, 4, 1);
    GPIO_u8WritePortPin(PORT_C, 5, 1);
    

}
T_U8 LF_u8ReadPins()
{
    LF_vSetPinsDir(OUTPUT);
    LF_vWritePins();
    __delay_us(10);
    LF_vSetPinsDir(INPUT);
    __delay_us(250);    
    return ( 0x00111111 & GPIO_u16ReadPort(PORT_C) ); 
    
}
