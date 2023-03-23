#include "main.h"


/**
* print_line - print underscore number of times given as argument .
* @n : number of time to print '_'
* Return: has no return value
*
*/

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n ; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
