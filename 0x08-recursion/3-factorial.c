#include "main.h"



/**
* factorial - count factorial of given number .
* @n: number to count factorial of it.
*
* Return: the factorial of given number .
*/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}


}
