#include "main.h"




/**
* _puts - prints string .
* @str: the string input .
*
*/


void _puts(char *str)
{
int i = 0 ;
while (str[i])
{
char c = str[i];
_putchar(c);
i++;
}
_putchar('\n');
}
