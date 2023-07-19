#include "function_pointers.h"



/**
* array_iterator - applay given function on each elem in array .
*
* @array: pointer to array of int .
* @size: number of elem in arry to be effected .
*
* @action: pointer to function .
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
