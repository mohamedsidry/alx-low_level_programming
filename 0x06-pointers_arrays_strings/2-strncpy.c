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
int lenOfDest = 0;
int lenOfSrc = 0;
int i = 0;

while (dest[lenOfDest] != '\0')
{
lenOfDest++;
}
while (src[lenOfSrc] != '\0')
{
lenOfSrc++;
}
if (n >= lenOfDest)
{
for (i = 0 ; i < lenOfSrc ; i++)
{
dest[i] = src[i];
}
}
else
{
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
for (i = n ; i < lenOfDest ; i++)
{
dest[i] = dest [i];
}
}
return (dest);
}
