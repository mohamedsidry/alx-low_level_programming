#include "main.h"



/**
* _strcpy - copys string .
* @dest: copyed to string .
* @src: copy from string .
* Return: return copy of given string .
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
}
while (src[i] != '\0')
return (dest);
}
