#include "main.h"

/**
* print_square - print square using # simbol .
* Return: has no return value.
* @_dimantion : argument dimantion of square .
*
*/


void print_square(int _dimantion)
{
int i, j;
if (_dimantion > 0)
{
for (i = 0 ; i < _dimantion ; i++)
{
for (j = 0 ; j < _dimantion ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
