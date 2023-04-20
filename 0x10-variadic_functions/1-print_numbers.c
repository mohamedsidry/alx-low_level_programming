#include <stdio.h>
#include "variadic_functions.h"



/**
* print_numbers - function that prints n numbers followed by separator .
* @separator: pointer to char to separate numbers .
* @n : is the how many numbers to print .
* @...:  ellipsis or a variable number of arguments .
*
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list obj_t;
unsigned int i;


va_start(obj_t, n);

for (i = 0 ; i < n ; i++)
{
printf("%d", va_arg(obj_t, int));
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(obj_t);
printf("\n");
}
