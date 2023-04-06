#include "main.h"

int sqrt_finder(int n, int i);

/**
* _sqrt_recursion - return the root of given square natural number .
* @n: input number to return the root of it .
* Return: natural square root of given number.
*/



int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt_finder(n, 0));
}

/**
* sqrt_finder - finds natural square root of a number .
* @n: input number to return the root of it .
* @i: helper .
* Return: the natural square root of given number .
*/

int sqrt_finder(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqrt_finder(n, i + 1));
}
