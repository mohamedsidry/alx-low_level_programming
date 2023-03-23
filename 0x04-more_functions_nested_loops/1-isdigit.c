#include "main.h"


/**
* _isdigit - checks given input if it is intiger .
*@i : argument of function of type int
*Return: 2 cases
* case return = 1 : input is an intiger .
* case return = 0 : it is not intiger .
*/

int _isdigit(int i)
{
if (i >= '0' && i <= '9')
{
return (1);
}
else
return (0);
}
