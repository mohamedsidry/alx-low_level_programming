#include "main.h"
#include <stdio.h>

int _pow(int power);


/**
* binary_to_uint - convert binary number to decimal number .
* @b: pointer to array of chars .
* Return: decimal number of given binary code or 0 if !binary .
*/



unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int len = 0;
int i;

if (b == NULL)
{
return (0);
}

while (b[len])
{
if (b[len] < '0' || b[len] > '1')
{
return (0);
}
len++;
}

for (i = 0 ; i < len ; i++)
{
decimal = decimal + (b[i] - CTOI) * _pow(len - 1 - i);
}

return (decimal);
}

/**
* _pow- function that return 2 power of given number .
* @power: the exponent or the power .
* Return: 2 power of given exponent .
* Description : The base number (2) is included inside function .
*/
int _pow(int power)
{

if (power == 0)
{
return (1);
}
return (BASE2 * _pow(power - 1));
}
