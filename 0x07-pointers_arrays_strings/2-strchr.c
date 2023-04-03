#include "main.h"




/**
* _strchr- set pointer to input first character .
* @src: pointer to the first element of an array .
* @c: the character to change pointer to it .
* Return: pointer to the spesified input char .
*
*/



char *_strchr(char *src, char c)
{
int i;
int len = 0;
while (src[len] != 0)
{
len++;
}
for (i = 0 ; i < len ; i++)
{
if (src[i] == c)
{
src = &src[i];
break;
}
else if (i + 1 == len)
{
src = '\0';
}
}
return (src);
}
