//
// Logan McAllister
// CS203
// Lab 4
// 10/19/2023.

#ifndef CS203_LAB4_EXECUTE_H
#define CS203_LAB4_EXECUTE_H

#endif //CS203_LAB4_EXECUTE_H

#include <stdio.h>
#include <math.h>

#include "registers.h"

/**
 * print register values
 */
void run_display();

/**
 * reset registers to 0
 */
void run_clear();

/**
 * run move command
 *
 * @param arg1 first register (moved from)
 * @param arg2 second register (moved to)
 */
void run_mov(char* arg1, char* arg2);

/**
 * run load command
 *
 * @param arg1 register to load to
 * @param arg2 immediate value
 */
void run_load(char* arg1, char* arg2);

/**
 * run add command
 *
 * @param arg1 first register
 * @param arg2 second register
 */
void run_add(char* arg1, char* arg2);

/**
 * run subtract command
 *
 * @param arg1 first register
 * @param arg2 register being subtracted from first register
 */
void run_sub(char* arg1, char* arg2);

/**
 * run and command
 *
 * @param arg1 first register
 * @param arg2 seccond register
 */
void run_and(char* arg1, char* arg2);

/**
 * run or command
 *
 * @param arg1 first register
 * @param arg2 second register
 */
void run_or(char* arg1, char* arg2);

/**
 * run xor command
 *
 * @param arg1 first register
 * @param arg2 second register
 */
void run_xor(char* arg1, char* arg2);

/**
 * run negate command
 *
 * @param arg1 register
 */
void run_neg(char* arg1);

/**
 * run shift left command
 *
 * @param arg1 register being shifted
 * @param arg2 immediate value for how far register is shifted
 */
void run_shl(char* arg1, char* arg2);

/**
 * run shift right command
 *
 * @param arg1 register being shifted
 * @param arg2 immediate value for how far register is shifted
 */
void run_shr(char* arg1, char*arg2);

/**
 * check equivalence of strings
 *
 * @param str1 first string
 * @param str2 second string
 * @return 1 if strings equivalent, 0 if not
 */
int compare_strings(char* str1, char* str2);

/**
 * check that an input is a valid register, and return the number of that register
 *
 * @param input register string
 * @param size how many registers are valid, always 4 or 5 depending if accumulator included
 * @return number of register, or -1 if not valid register
 */
int validate_input(char* input, int size);

/**
 * convert a given value in binary, hex, or decimal to a 2 bit binary string
 *
 * @param arg value string
 * @return 16 character binary string
 */
void convert_immediate_value(char* arg, char ret[]);

/**
 * convert hex string to binary string
 *
 * @param arg hex string, must start 0x and have 4 values after x
 * @return 16 character binary string
 */
void hex_to_bin(char* arg, char ret[]);

/**
 * convert decimal string to binary string
 *
 * @param arg decimal string
 * @return 16 character binary string
 */
void dec_to_bin(char* arg, char ret[]);

/**
 * convert short to binary string
 *
 * @param n short value
 * @return 16 character binary string
 */
void short_to_bin(short n, char ret[]);

/**
 * convert binary string to short
 *
 * @param reg binary string
 * @return short with value of binary
 */
short bin_to_short(char* reg);

/**
 * convert binary string to hex string
 *
 * @param reg binary string
 * @return 4 char hex string
 */
void bin_to_hex(char* reg, char ret[]);

/**
 * get two's complement of binary string
 *
 * @param reg binary string
 * @return two's comp of binary string
 */
void get_twos_comp(char* reg, char ret[]);

/**
 * get one's complement of binary string
 *
 * @param reg binary string
 * @return one's comp of binary string
 */
void get_ones_comp(char* reg, char ret[]);