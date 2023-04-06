#include "main.h"




/**
* factorial - calculate the factorial of given number and return the result.
* @n: the number to be calculate factorial of .
* Return: 2 cases :
* return the factorial if input is positif .
* return -1 if input nigative .
*/


int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
}
