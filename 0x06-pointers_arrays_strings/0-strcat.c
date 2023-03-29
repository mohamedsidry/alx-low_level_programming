#include "main.h"



/**
* _strcat - count the length of both string and concatenate them .
* @dest: pointer to the first item in array dest .
* @src: pointer to the first item in src array .
* Return: dest the concatenated string .
*/


char *_strcat(char *dest, char *src)
{
int len_d = 0;
int len_s = 0;
int i, j = 0;
while (dest[len_d] != '\0')
{
len_d++;
}
while (src[len_s] != '\0')
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
