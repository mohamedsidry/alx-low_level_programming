#ifndef VARIADIC_H
#define VARIADIC_H

/**standard libraries*/
#include <stdarg.h>


/** functions prototypes */

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

#endif
