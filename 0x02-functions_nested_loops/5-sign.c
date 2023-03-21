#include "main.h"

/**
* print_sign - checks if given value greater or less or equal to  zero .
* _putchar - prints gaven character .
* Return:
*  r = 1 given value is greater than 0 .
*  r = -1 the given value is less than 0 .
*  r = 0 the given value is equal to 0 .
*@n: is the input arg of print_sign function .
*/

int print_sign(int n)
{
int r;
if (n > 0)
{
r = 1;
_putchar('+');
}
else if (n < 0)
{
r = -1;
_putchar('-');
}
else
{
r = 0;
_putchar('0');
}
return (r);
}
