#include "main.h"

/**
* print_times_table - prints a table of numbers ,
* @n: argument is the number of row and colums ;
*/



void print_times_table(int n)
{int i, j;
if (n > 0 && n < 15)
{
for (i = 0 ; i < n + 1; i++)
{
for (j = 0 ; j < n + 1; j++)
{
int t = i * j;
if (j == 0)
{
_putchar(t + '0');
}
else if (t < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(t + '0');
}
else if (t < 100)
{
_putchar(' ');
_putchar((t / 10) % 10 + '0');
_putchar(t % 10 + '0');
}
else if (t >= 100)
{
_putchar((t / 100) % 10 + '0');
_putchar((t / 10) % 10 + '0');
_putchar(t % 10 + '0');
}
if (j < n)
{
_putchar(',');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
