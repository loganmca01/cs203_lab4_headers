//
// Logan McAllister
// CS203
// Lab 4
// 10/19/2023.

#ifndef CS203_LAB4_REGISTERS_H
#define CS203_LAB4_REGISTERS_H

#endif //CS203_LAB4_REGISTERS_H

#include <stdio.h>
#include <malloc.h>

#define MAXLINE 64

// 6th register as spot to do work
#define NUM_REG 5

/**
 * reset registers to 0
 */
void init_registers();

void reset_registers();

/**
 * free memory from registers
 */
void free_registers();

/**
 * set new overflow value
 *
 * @param newof new value
 */
void set_overflow(int newof);

/**
 * get overflow value
 *
 * @return overflow
 */
int get_overflow();

/**
 * set register to new value
 *
 * @param rnum register number
 * @param newval new value
 */
void setR(int rnum, const char* new_reg);

/**
 * get register value
 *
 * @param rnum register number
 * @return value of register
 */
char* getR(int rnum);

