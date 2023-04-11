#include <stdlib.h>
#include "main.h"


/**
* create_array- create an array of size of the size as arguments .
* @size: the size of the array .
* @c: char to assign in array .
* Return: pointer to an array if successed else return NULL .
*/


char *create_array(int size, char c)
{
char *str;
int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
{
return (NULL);
}
else
{
for (i = 0 ; i < size ; i++)
{
str[i] = c;
}
}
return (str);
}
