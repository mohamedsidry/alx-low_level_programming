#include "main.h"



/**
* times_table - prints the table
*
*/


void times_table(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
int t = i * j;
if (j == 0)
{
_putchar(t + '0');
}
else if (t < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(t  + '0');
}
else if (t >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(t / 10 + '0');
_putchar(t % 10 + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
