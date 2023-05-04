#include "main.h"



/**
* get_bit - get the value in spesific bit in memory .
* @n: number in base 10 as input .
* @index: position of the bit .
* Return: value in bit of given index or -1 if overflow .
*
*/


int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > BITS64)
{
return (-1);
}
else
{
bit = (n >> index) & 1;
}
return (bit);
}
