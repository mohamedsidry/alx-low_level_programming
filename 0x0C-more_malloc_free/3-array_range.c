#include <stdlib.h>
#include "main.h"




/**
* array_range- create an array of intigers .
* @min: minimon  range of values to be stored .
* @max : maximom range of values to be stored .
* Return: pointer to the new array .
*/

int *array_range(int min, int max)
{
int *newarray;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
newarray = malloc(sizeof(int) * size);
if (newarray == NULL)
return (NULL);
for (i = 0; min <= max; i++)
newarray[i] = min++;
return (newarray);
}
