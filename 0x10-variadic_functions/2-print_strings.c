#include "variadic_functions.h"


void print_str(char *str);

/**
* print_strings - varadic function that prints all given strings args.
*
* @separator: char pointer to separate between each string .
*
* @n: number of arguments .
*
* Return: nothing .
*/




void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;
char *str;

va_start(arg, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
{
printf("%s", separator);
}
str = va_arg(arg, char *);
print_str(str);
}

va_end(arg);
printf("\n");
}

/**
* print_str - print input string .
*
* @str: string to be printed .
*
* Return: nothing .
*
*/

void print_str(char *str)
{
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
