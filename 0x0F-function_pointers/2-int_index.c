#include "function_pointers.h"




/**
* int_index - a function that searches for an integer .
* @array: pointer to an array of intigers .
* @size: number of element to search .
* @cmp: pointer to fun .
* Return: index of match element else return -1 .
*/

int int_index(int *array, int size, int (*cmp)(int))


{
if (array == NULL || cmp == NULL)
{
return (-1);
}
else if (size <= 0)
{
return (-1);
}
else
{
int i;
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
