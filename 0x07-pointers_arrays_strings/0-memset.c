#include "main.h"



/**
* _memset - function that fills memory with a constant byte.
* @str: pointer to array .
* @b: new character .
* @n: the number of character to fill .
* Return: an Array of chars .
*/


char *_memset(char *str, char b, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
str[i] = b;
}
return (str);
}
