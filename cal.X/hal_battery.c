#include "hal_battery.h"

int valCitita()
{
    int valoare = (int) ADC_u16Read(0);
    return procent(valoare);
    
}

int procent(int citita)
{
    double intervalVolti[] = { 8.4, 7, 6.5, 6};
    double intervalProcent[] = {100, 20, 10, 0};
    double volti = (double)citita*(8.4/4095);
    double rezolutie;
    int interval=-1;
    
    if(volti > 7)
      interval = 0;
    else if(volti > 6.5)
        interval = 1;
    else if(volti > 6)
        interval = 2;
    if(interval!=-1)
    {
        rezolutie = (intervalProcent[interval]-intervalProcent[interval+1]) / (intervalVolti[interval]-intervalVolti[interval+1]) ;
        return (volti - intervalVolti[interval +1]) * rezolutie + intervalProcent[interval + 1]; 
    }
    else
        return 0;
}


int Hal_aflareProcent()
{
    int i=0;
    int suma = 0;
    for (i=0; i<5; ++i)
    {
        suma += valCitita();
    }
    suma = suma / 5;
    return suma;
 
    
}