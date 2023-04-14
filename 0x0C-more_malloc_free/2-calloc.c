#include <stdlib.h>
#include "main.h"



char *_setchar(char *s, char c, unsigned int n);


/**
* _calloc - allocates space in heap  for an array .
* @nmemb: number of elements in the array .
* @size: size of each element .
* Return: pointer to allocated memory .
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
_setchar(ptr, 0, nmemb * size);
return (ptr);
}
/**
* _setchar - set char in columns .
* @s: pointer to first element in an array .
* @c: char to copy
* @n: number of times to copy b
* Return: pointer to the memory area s
*/
char *_setchar(char *s, char c, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = c;
}
return (s);
}
