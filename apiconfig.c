/*
 * apiconfig.c
 *
 *  Created on: Jun 23, 2018
 *      Author: satish
 */

#include "apiconfig.h"

void scalevoltage(volatile UWord *volt,UByte country)
{
    *volt = (*volt) * scalingfactor_voltage * country;
    //logic to stop the overfow //
    if(*volt>=maxvoltage && *volt>minvoltage)
    {
        *volt = 256;
    }
    else
    {
        //MISRA standards//
    }

}
