#include "main.h"


/**
* print_last_digit - print the last digit of given input .
* _putchar - print the given char .
* Return: returns the value of the last digit .
* @n: is the input argument of function
*/


int print_last_digit(int n)
{
int r;
if (n < 0)
n = -n;
r = n % 10;
if (r < 0)
r = -r;
_putchar(r + '0');
return (r);
}
