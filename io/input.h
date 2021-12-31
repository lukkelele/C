#include "input.c"

#ifndef INPUT_H
#define INPUT_H

/* getInput(), read character input and place it in s
 * returns length of string                         */
int getStringInput(char s[], int lim);

/* In case of overflows */
void copy(char to[], char from[]);

#endif
