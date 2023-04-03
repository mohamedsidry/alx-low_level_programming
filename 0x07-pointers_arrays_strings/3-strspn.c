#include "main.h"


/**
* _strspn - gets the length of a prefix substring.
* @s: pointer to string .
* @accept: pointer to string .
* Return: length of prefix .
*/


unsigned int _strspn(char *s, char *accept)
{
unsigned int r_bytes = 0;
int i;
while (*s)
{
for (i = 0 ; accept[i] ; i++)
{
if (*s == accept[i])
{
r_bytes++;
break;
}
else if (accept[i + 1] == '\0')
{
return (r_bytes);
}
}
s++;
}
return (r_bytes);
}
