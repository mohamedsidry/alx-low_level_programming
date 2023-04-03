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
for (i = 0 ; src[i] >= '\0' ; i++)
{
if (src[i] == c)
{
return (src + i);
}

}
return ('\0');
}
