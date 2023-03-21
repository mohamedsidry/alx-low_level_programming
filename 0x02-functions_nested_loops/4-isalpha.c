#include "main.h"

/**
* _isalpha - checks if the char of given int is an alphabet or not .
* Return: 1 the given input is an alphabet 0 not alphabet .
*@c: ASCII of char .
*/

int _isalpha(int c)
{
int n;
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
n = 1;
}
else
{
n = 0;
}
return (n);
}
