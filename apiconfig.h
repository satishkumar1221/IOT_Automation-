/*
 * apiconfig.h
 *
 *  Created on: Jun 19, 2018
 *      Author: satish
 */
#include "stdio.h"
#include "variablespec.h"
#define TIVAWARE 1
#ifndef APICONFIG_H_
#define APICONFIG_H_

//pass the required address and mask
void inline setbits (volatile UByte *x,uint8 mask) { *x = (*x | mask);}
void inline clearbits (volatile UByte *x) { *x = (*x & 0x00000000);}
void scalevoltage (volatile UWord *volt , UByte country);
//void inline


/*typedef enum portsenum
{
};*/


#endif /* APICONFIG_H_ */
