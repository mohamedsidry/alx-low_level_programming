#include "main.h"



/**
* puts_half - prints half of given string .
*@str: pointer to given string .
*/


void puts_half(char *str)
{
int len = 0;
int half_len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
half_len = len / 2;
}
else
{
half_len = (len / 2) + 1;
}
while (half_len <= len)
{
_putchar(str[half_len]);
half_len++;
}
_putchar('\n');
}
