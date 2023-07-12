#include "main.h"


int **allocate_grid(int width, int height);
void init_grid(int **ar, int height, int width, int value);





/**
* alloc_grid - allocate 2d array.
*
* @width: width of the array .
* @height: the height of the array .
*
* Return: pointer to 2d  array  .
*/









int **alloc_grid(int width, int height)
{

int **ptr;


ptr = allocate_grid(width, height);

if (ptr == NULL)
return (NULL);


init_grid(ptr, height, width, INITVALUE);

return (ptr);

}

/**
* allocate_grid - Allocation of memory .
*
* @width: the grid width.
* @height: the grid height.
*
* Return: pointer to 2d array  if success otherwise Null.
*/

int **allocate_grid(int width, int height)
{

int i;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);

ptr = malloc(sizeof(int *) * height);

if (ptr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
ptr[i] = malloc(sizeof(int) * width);

if (ptr[i] == NULL)
{
while (i >= 0)
{
free(ptr[i]);
i--;
}
free(ptr);
return (NULL);
}
}

return (ptr);
}


/**
* init_grid - init the grid with macros value from main.h.
* @ar: pointer to the grid .
* @height: the height of the grid .
* @width: the width of the grid.
* @value: the init value .
*
*/


void init_grid(int **ar, int height, int width, int value)
{
int x, y;

for (x = 0; x < height; x++)
{

for (y = 0; y < width; y++)
{
ar[x][y] = value;
}
}
}
