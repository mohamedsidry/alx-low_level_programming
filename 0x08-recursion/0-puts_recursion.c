#include "main.h"


/**
* _puts_recursion - prints string char by char using recursion .
*
* @s: pointer to string .
*
*
*/


void _puts_recursion(char *s)
{

if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
