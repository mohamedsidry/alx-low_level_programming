#ifndef MAIN_H
#define MAIN_H

/** STANDARD LIBRARIES **/
#include <stdlib.h>
#include <stdio.h>




/** SYMBOLIC CONSTANTS **/

#define CTOI '0' /** Value of '0' in ascii a.k.a 48 **/
#define BASE2 2 /** The Base of binary **/
#define BITS64 64 /** number of bit in int **/





/** FUNCTIONS PROTOTYPES  */

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int _putchar(char c);

int get_bit(unsigned long int n, unsigned int index);

#endif /** MAIN_H **/
