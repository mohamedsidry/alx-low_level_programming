#include "main.h"




/**
* _print_rev_recursion - prints string in reverse recursivly .
* @str: pointer to the first char of string .
* _putchar - takes char and print it using write from unistd lebrary .
* function has no return value .
*/


void _print_rev_recursion(char *str)
{
if (*str)
{
_print_rev_recursion(str + 1);
_putchar(*str);
}
}
