#include <stdio.h>
#include "variadic_functions.h"



/**
* print_strings - variadic function to print args number of arguments .
* @separator: pointer to array of char that separate between args .
* @args: the number of arguments .
* Return: has no return (void) .
*/





void print_strings(const char *separator, const unsigned int args, ...)
{
va_list obj_t;
unsigned int i;
string str_arg;
va_start(obj_t, args);

for (i = 0 ; i < args ; i++)
{
str_arg = va_arg(obj_t, string);
if (str_arg != NULL)
{
printf("%s", str_arg);
}
else
{
printf("(nil)");
}
if (separator != NULL && i != (args - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(obj_t);
}
