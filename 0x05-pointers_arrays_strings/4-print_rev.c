#include "main.h"


/**
*print_rev - prints the given string reversed .
*@str: input string .
*/


void print_rev(char *str)
{
int len = 0;
int i;
while (str[len])
{
len++;
}

for (i = len ; i >= 0; i--)
{
char c = str[i];
_putchar(c);
}
_putchar('\n');
}
