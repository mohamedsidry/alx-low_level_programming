#include "main.h"


int _sqrt_helper(int n, int i);

/**
* _sqrt_recursion - find  the natural square root of a number .
* @n: the given number.
* Return: return the natural square root of a number if exist or -1.
*/


int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);

else
return (_sqrt_helper(n, 0));

}

/**
* _sqrt_helper - helper to find number
* that if we multiplied it by itself equal given number.
* @n: given number.
* @i: helper variable .
* Return: return the natural square root of a number if exist or -1.
*/

int _sqrt_helper(int n, int i)
{

if (i * i > n)
{
/** Above The given number !  */
return (-1);
}
else if (i * i == n)
{
/** i found it !*/
return (i);
}
else
{
/**Not found yet try next number ! **/
return (_sqrt_helper(n, i + 1));
}

}
