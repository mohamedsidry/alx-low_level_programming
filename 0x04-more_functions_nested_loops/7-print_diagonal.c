#include "main.h"



/**
* print_diagonal - prints \ number of given arg .
* Return: has no return value .
* @n: is the arg and represent the number of time to repate \ .
* keep it cool .
*/


void print_diagonal(int n)
{
if (n > 0)
{
int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
