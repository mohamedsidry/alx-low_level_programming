#include "variadic_functions.h"


/**
* sum_them_all - variadic function to sun @n: numbers and return result.
* @n: how many numbers to sum .
* @...: ellipsis or a variable number of arguments .
*
* Return: sum of all arguments .
*/


int sum_them_all(const unsigned int n, ...)
{

va_list obj_t;
unsigned int i;
int sum = 0;

if (n == 0)
{
return (0);
}
else
{
va_start(obj_t, n);
for (i = 0 ; i < n ; i++)
{
sum += va_arg(obj_t, int);
}
va_end(obj_t);
}
return (sum);
}
