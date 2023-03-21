#include "main.h"


/**
* _abs - make you positive !) .
* Return: return positive value of given n.
* @n : in is the input arg of function .
*/


int _abs(int n)
{
int r;
if (n >= 0)
{
r = n;
}
else
{
r = n * (-1);
}
return (r);
}
