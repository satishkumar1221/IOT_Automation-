/*
 * gpio_config.h
 *
 *  Created on: Jun 24, 2018
 *      Author: satish
 */
#include "tm4c123gh6pm.h"
#include "test.h"
#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_

// macro defanition for values // Want more ports// Add more macros

//using port A//
void gpio_init(uint8_t portnumber,uint8_t inp_out,uint32_t selectport,uint8_t value2,uint32_t drivestrength,uint8_t value3,uint32_t modeselect,uint8_t value4,uint32_t portanaordigital,uint8_t value5,uint32_t INTERUPT_ENABLE,uint8_t value6);
void gpio_configure(uint8_t pinnumber,uint8_t inp_out);
void rcgcgpio(uint8_t value);
void gpiodir(uint8_t value1,uint32_t selectport);
void gpio_afsel(uint8_t value2 );
void drivestrength(uint32_t drivestrength,uint8_t value3);
void functionselect(uint32_t modeslect,uint8_t value4);
void analogordigitalselect(uint32_t portanaordigital,uint8_t value5);
void setevent(uint32_t INTERUPT,uint8_t value6);

struct enablegpio
{
    uint8_t registername;
    // select the number of ports and set it in run mode//
 /*   void (*get_rcgcgpio)(uint8_t);
    //select either A or B or C or D ports to initilize gpio // in this case I am going to assign port B//
    void (*get_gpiodir)(uint8_t);
    //structure pointer to configure gpio_AFSEL register//program it as a gpio or alternate pin//
    void(*gpio_afsel)(uint8_t);
    //set the drive strength of the pins through GPIODR2R,GPIODR4R or GPIODR8R using the below structure pointer 2ma,4ma or 8ma output//
    void(*get_drivestrength)(uint8_t);
    //set wether you have to have pullup/pulldown or open drain functionality through using GPIOPUR,GPIOPDR.GPIOODR//
    void(*get_funcselect)(uint8_t);
    //select analog or diigital pins using GPIOAMSEL/GPIODEN//
    void(*get_analogordigitalselect);
    //configure the GPIOs,GPIOBE,GPIOEV and GPIOIM and mask of interupts for each port//
    void(*setevent)(uint8_t);*/
    void(*gpio_init)(uint8_t ,uint8_t,uint32_t,uint8_t,uint32_t,uint8_t,uint32_t,uint8_t ,uint32_t,uint8_t,uint32_t,uint8_t);


};



#endif /* GPIO_CONFIG_H_ */
