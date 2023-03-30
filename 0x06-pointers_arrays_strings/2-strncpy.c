#include "main.h"


/**
* _strncpy - count length and copy string src to dest .
* @dest: string to copy to .
* @src: string to copy from .
* @n: number of bytes to copy .
* Return: returns dest string with a copy of n bytes of string src .
*/



char *_strncpy(char *dest, char *src, int n)
{
int bytes;
for (bytes = 0 ; bytes < n && src[bytes] != '\0' ; bytes++)
{
dest[bytes] = src[bytes];
}
for ( ; bytes < n ; bytes++)
{
dest[bytes] = '\0';
}
return (dest);
}
