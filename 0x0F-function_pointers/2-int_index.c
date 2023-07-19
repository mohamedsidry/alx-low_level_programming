#include "function_pointers.h"
#define NOMATCH -1

/**
* int_index - search for index of given number in array .
*
* @array: array to be searched .
* @size: number of element to search .
*
* @cmp: pointer to function return 1 or 0.
*
* Return: index of first matched number or -1 in falier.
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (NOMATCH);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (NOMATCH);
}
