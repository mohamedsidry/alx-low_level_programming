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
int t;
int c;
if (n >= 0)
{
t = n;
}
else
{
t = -n;
}
r = t % 10;
c = (char)r;
 _putchar(c);
return (r);
}
