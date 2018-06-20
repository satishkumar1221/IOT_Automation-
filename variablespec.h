/*
 * variablespec.h
 *
 *  Created on: Jun 19, 2018
 *      Author: satish
 */
#include "stdio.h"
#ifndef VARIABLESPEC_H_
#define VARIABLESPEC_H_

//variable defanitions///
typedef unsigned char UByte;
typedef unsigned int UWord;
typedef float float32;

typedef enum
{
    bit_0,
    bit_1,
    bit_2,
    bit_3,
    bit_4,
    bit_5,
    bit_6,
    bit_7

}setbit;

//register access// other bits will be added on according to the requirement //will find out a way// pre alpha//
typedef enum
{
    raccess_bit0 = 0x00,
    raccess_bit1 = 0x02,
    raccess_bit2 = 0x04,
    raccess_bit3 = 0x08,
    raccess_bit4 = 0x16,
    raccess_bit5 = 0x32,
    raccess_bit6 = 0x64,
    raccess_bit7 =0x128
}registeraccess;




#endif /* VARIABLESPEC_H_ */
