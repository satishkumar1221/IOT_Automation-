/*
 * test.h
 *
 *  Created on: Jun 23, 2018
 *      Author: satish
 */

#ifndef TEST_H_
#define TEST_H_
#include "gpio_config.h"
#include <xdc/runtime/System.h>
#include"variablespec.h"
#include"stub.h"
#include "apiconfig.h"
//All the extern variables//
extern UByte x1[8],x2[8];
void test_variables();
void test_api();
void test_gpio(uint8_t pin);
void pop(uint8_t pop);

#endif /* TEST_H_ */
