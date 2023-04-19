#include "function_pointers.h"




/**
* array_iterator - prints array elemants .
* @array: pointer to an array of integers .
* @size: number of element to print from array .
* @action: pointer to function that prints element .
*
* Return: has no return value (void) .
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
else
{
for (i = 0 ; i < size ; i++)
{
action(*(array + i));
}
}
}
