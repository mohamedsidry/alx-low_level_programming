#include "variadic_functions.h"

/**
* print_numbers - varadic function that prints all given number args.
*
* @separator: char pointer to separate between each number .
*
* @n: number of arguments .
*
* Return: nothing .
*/




void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;


va_start(arg, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
{
printf("%s", separator);
}
printf("%d", va_arg(arg, int));
}

va_end(arg);
printf("\n");
}
