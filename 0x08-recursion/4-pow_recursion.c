#include "main.h"


/**
* _pow_recursion - calculate the power using recursion .
* @x: the base number.
* @y: the power number.
*
* Return: the result of x power of y .
*/

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}
