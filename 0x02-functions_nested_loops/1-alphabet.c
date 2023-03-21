#include "main.h"


/**
* print_alphabet-prints lowerCase alphabet .
* Return: 0 code is good .
*/


void print_alphabet(void)
{
char s_c = 'a';
char e_c = 'z';
for (s_c; s_c <= e_c; s_c++)
{
_putchar(s_c);
}
_putchar('\n');
}
