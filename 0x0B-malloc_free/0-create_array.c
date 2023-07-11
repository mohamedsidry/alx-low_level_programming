#include "main.h"





/**
* create_array - creates an array in the heap and fill it with given char.
*
* @size: the size of allocated memory .
* @c:the char to initialaize the allocated memory to .
*
*Return: pointer to the allocated array or null.
*/


char *create_array(unsigned int size, char c)
{

char *ptr;
int i = 0;

if (size == 0)
{
return (NULL);
}
else
{
ptr = malloc(sizeof(char) * size);
}


if (!ptr)
{
return (NULL);
}
else
{
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}

}
