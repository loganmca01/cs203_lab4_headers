//
// Logan McAllister
// CS 203
// Lab 4
// 10/19/2023.
//

#ifndef CS203_LAB4_FETCH_DECODE_H
#define CS203_LAB4_FETCH_DECODE_H

#include <stdio.h>
#include <malloc.h>

#include "execute.h"
#include "registers.h"

/**
 * sets registers to initially be 0
 */
void setup_system();

/**
 * gets input from user
 *
 * @return user input as string
 */
char* get_user_input();

/**
 * gets command from user input
 *
 * @param input user input string
 * @return string representing first word (command) in user input
 */
char* parse_command(char* input);

char* parse_next_arg(char* input);

/**
 * given the 3 pieces of the user input, calls the appropriate function in execute to
 * run the command.
 *
 * @param command command from user
 * @param arg1 first argument after command, NULL if none found
 * @param arg2 second argument after command, NULL if none found
 * @return 0 if exit called, 1 if anything else
 */
int execute_command(char* command, char* arg1, char* arg2);



#endif //CS203_LAB4_FETCH_DECODE_H
