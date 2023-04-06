#include "main.h"




/**
* _pow_recursion - return  x  power of y using recursion .
* @x:the base number .
* @y:the exponent number .
*
* Return: 2 cases:if exponent postive currect value of calculation .
* if exponent nigative return -1 .
*/



int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (y == 0)
{
return (1);
}
return x * _pow_recursion(x, y - 1);
}
}
