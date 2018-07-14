/*
 * gpio_config.c
 *
 *  Created on: Jun 24, 2018
 *      Author: satish
 */
//INITILIZE GPIO //
#include "gpio_config.h"



/*void gpio_configure(uint8_t pinnumber,uint8_t inp_out)
{

    // set the gpiodir register//
    GPIO_PORTB_DIR_R   = inp_out;

    // set the GPIODIR Register//
}*/
//Configure more gpio's in this structure according to the given need//
void rcgcgpio(uint8_t portnumber)
{
    // to initilize the drivers please refer to pg 656 in tm4c123 datatsheet//
      // initilioze all the refisters in the run mode//
      SYSCTL_RCGCGPIO_R |= portnumber;
}
void gpiodir(uint8_t inp_out,uint32_t selectport)
{
   //set the number of input and outputins in a port
    //here port B is used// Refer the header file variables like GPIO_PORTB_DIR_R to knoe the rewuired names for macros//
    selectport |=  inp_out;


}
void gpio_afsel(uint8_t value2)
{
    // By default if GPIO should be enabled its value must be 0//
    GPIO_PORTB_AFSEL_R |= 0x0000;
}
void drivestrength(uint32_t drives_strength,uint8_t value3)
{
    drives_strength|=value3;

}
void functionselect(uint32_t modeselect,uint8_t value4)
{
   modeselect|=value4;
}
void analogordigitalselect(uint32_t portanaordigital,uint8_t value5)
{
    portanaordigital|=value5;
}
void setevent(uint32_t INTERUPT_ENABLE,uint8_t value6)
{
    INTERUPT_ENABLE |= value6;
}

void gpio_init(uint8_t portnumber,uint8_t inp_out,uint32_t selectport,uint8_t value2,uint32_t drive_strength,uint8_t value3,uint32_t modeselect,uint8_t value4,uint32_t portanaordigital,uint8_t value5,uint32_t INTERUPT_ENABLE,uint8_t value6)
{
   //the values from 1 to 7 must be given in the order of the functions//
   // void gpio_configure(uint8_t pinnumber,uint8_t inp_out);
     rcgcgpio(portnumber);
    gpiodir( inp_out,selectport);
    gpio_afsel( value2 );
    drivestrength(drivestrength,value3);
    analogordigitalselect(portanaordigital,value5);
    setevent(INTERUPT_ENABLE,value6);
}
