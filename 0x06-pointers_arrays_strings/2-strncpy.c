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
int i = 0;
int len_of_src = 0;
int len_of_dest = 0;
 
while (src[len_of_src] != '\n')
{
len_of_src++;
}

while (dest[len_of_dest] != '\0')
{
len_of_dest++;
}
 
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (dest[i] != '\0' && i < len_of_src)
{
dest[i] = dest[i];
i++;
}

while (dest[i] != '\0' && i > len_of_src && i < len_of_dest)
{
  dest[i] = '\0';
  i++;
}

return (dest);
}
