#include "main.h"



/**
* _memcpy - copies n bytes from src variable to dest array .
* @dest: array input to be copy to .
* @src: array input to be copyed from .
* @n: the number of bytes to copy .
* Return: the new dest array with n bytes copyed from src .
*
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
*(dest + i) = src[i];
}
return (dest);
}
