#include "main.h"

/**
* print_alphabet_x10 - prints 10 lines of lowercase alphabet from a to z .
* _putchar - prints a single character
*/


void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
