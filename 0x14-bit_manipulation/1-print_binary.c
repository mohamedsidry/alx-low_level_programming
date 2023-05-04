#include "main.h"



/**
* print_binary - prints the binary representation of a number .
* @n: the number to print in binary base2 format .
* Description: we dicrise shifting each eletreat and compate with 0x01 .
* the printing start when we come across 1 .
*/



void print_binary(unsigned long int n)
{
int i;
unsigned long int shifted;
int init_printing = 0;
if (n == 0)
{
_putchar('0');
}
else
{
for (i = BITS64 - 1 ; i > -1 ; i--)
{
shifted = n >> i;

if (shifted & 1)
{
_putchar('1');
init_printing = 1;
}
else if (init_printing)
{
_putchar('0');
}
}
}
}
