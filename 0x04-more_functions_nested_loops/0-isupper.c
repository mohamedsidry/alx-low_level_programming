#include "main.h"

/**
* _isupper - checks if given input is upper or lower case character .
* @c: is the int argument of the function .
* Return: 2 cases :
* return = 0 it is lower case char .
* return = 1 is an uppper char .
* return = -1 input is not a char .
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (0);
}
else
{
return (-1);
}
}
