#include <stdio.h>
#include "variadic_functions.h"


/**
* print_all - prints all args whatever was .
* @format: supported format (could say and numbre of args even if not) .
*
* Return: fun has no return (void) .
*/




void print_all(const char *const format, ...)
{
va_list obj_t;
int i = 0;
string str_arg, separator = "";
va_start(obj_t, format);
if (format != NULL)
{
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(obj_t, int));
break;
case 'i':
printf("%s%d", separator, va_arg(obj_t, int));
break;
case 'f':
printf("%s%f", separator, va_arg(obj_t, double));
break;
case 's':
str_arg = va_arg(obj_t, string);
if (str_arg == NULL)
{
str_arg = "(nil)";
}
printf("%s%s", separator, str_arg);
break;
default:
i++;
continue;
}
i++;
separator = ", ";
}
}
va_end(obj_t);
printf("\n");
}
