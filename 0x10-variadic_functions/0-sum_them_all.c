#include "variadic_functions.h"

/**
* sum_them_all - varadic function that sum all given args.
*
* @n: number of arguments so sum .
*
* Return: result of the sum of args .
*
*/




int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list arg;

if (n == 0)
return (0);

va_start(arg, n);

for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}

va_end(arg);

return (sum);
}
