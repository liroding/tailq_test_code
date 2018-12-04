/*
 * main.h
 *
 *  Created on: Dec 4, 2018
 *      Author: liroding
 */

#ifndef MAIN_H_
#define MAIN_H_

#define TEST_INIT(func) \
static void __attribute__((constructor,used)) func(void)

#define TEST_RUN_BEFORE(name) \
TEST_INIT(LIRO ##name); \
static void LIRO ##name(void) \
{\
		printf("nihao\n");  \
		printf("func=%s\n",__func__); \
} \



#endif /* MAIN_H_ */
