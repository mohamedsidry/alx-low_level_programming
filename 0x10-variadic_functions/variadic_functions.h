#ifndef HEADER_FILE_H
#define HEADER_FILE_H

/*** STANDARD LIBRARIES ***/
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/*** SYMBOLIC CONSTENTS  ***/

/*** FUNCTIONS PROTOTYPES  ***/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif /** HEADER_FILE_H **/
