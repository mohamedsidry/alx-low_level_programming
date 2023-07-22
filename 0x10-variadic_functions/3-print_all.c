#include "variadic_functions.h"



/**
* print_all - print args as you spesified .
*
* @format: chars to spesify types of args passed .
*
* Return: Nothing .
*/





void print_all(const char * const format, ...)
{
int i = 0;
va_list arg;
char *str, *separator = "";
va_start(arg, format);
if (format != NULL)
{
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(arg, int));
break;
case 'i':
printf("%s%d", separator, va_arg(arg, int));
break;
case 's':
str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
case 'f':
printf("%s%f", separator, va_arg(arg, double));
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(arg);
}
