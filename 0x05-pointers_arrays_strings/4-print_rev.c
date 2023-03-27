#include "main.h"


/**
*print_rev - prints the given string reversed .
*@str: input string .
*/


void print_rev(char *str)
{
int len = 0;
while (str[len])
{
len++;
}

while (len--)
{
_putchar(str[len]);
}
_putchar('\n');
}
