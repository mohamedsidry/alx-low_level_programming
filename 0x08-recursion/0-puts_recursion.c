#include "main.h"




/**
* _puts_recursion - prints chars of given string followed by new line.
* @s: pointer to the first char of string .
* _putchar - is function takes a char as arg and print is using unistd lebrary.
* function has no return value .
*/


void _puts_recursion(char *s)

{
if (!*s)
{
s--;
_putchar('\n');
}
else
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
