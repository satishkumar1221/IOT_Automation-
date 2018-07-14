/*
 *  ======= test ========
 *
 *  Created on: Jun 23, 2018
 *  Author:     satish
 */

#include "test.h"

/*#pragma DATA_SECTION(pop,".data")
UWord pop[10];
#pragma DATA_SECTION(x1,".data")*/
void test_variables()
{
int x3;
UByte x1[8],x2[8];
x1[0] = bit_0;
x1[1] = bit_1;
x1[2] = bit_2;
x1[3] = bit_3;
x1[4] = bit_4;
x1[5] = bit_5;
x1[6] = bit_6;
x1[7] = bit_7;
x2[0] = raccess_bit0;
x2[1] = raccess_bit1;
x2[2] = raccess_bit2;
x2[3] = raccess_bit3;
x2[4] = raccess_bit4;
x2[5] = raccess_bit5;
x2[6] = raccess_bit6;
x3 = raccess_bit7;
}
void test_gpio(uint8_t pin)
{

}

/*void pop(uint8_t pop)
{

}*/
void test_api()
{
    //UByte *x1;
     UByte x1  = 0x04;
    UByte mask = 0x03;
    setbits(&x1, mask);
    UWord y = 0x03;
    //voltage function check//
    scalevoltage(&y,asia);
    scalevoltage(&y,northamerica);
    scalevoltage(&y,europe);
   // struct enablegpio gpp;
    //gpp.get_rcgcgpio = &test_gpio;

}


