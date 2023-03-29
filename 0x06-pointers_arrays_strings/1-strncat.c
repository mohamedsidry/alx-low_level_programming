#include "main.h"



/**
* _strncat - count the length of both string and concatenate them .
* @dest: pointer to the first item in array dest .
* @src: pointer to the first item in src array .
* @n: number of bytes to add .
* Return: dest the concatenated string .
*/


char *_strncat(char *dest, char *src, int n)
{
int len_d = 0;
int len_s = 0;
int i, j = 0;
while (dest[len_d] != '\0')
{
len_d++;
}
while (src[len_s] != '\0' && len_s != n)
{
len_s++;
}

for (i = len_d ; i < len_d + len_s ; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
