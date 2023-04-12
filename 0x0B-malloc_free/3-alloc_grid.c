#include "main.h"
#include <stdlib.h>



/**
* alloc_grid - function creates 2 dimantions array of intigers .
* @width: columns number arg .
* @height: rows number arg .
* Return: pointer to an 2D array .
*/


int **alloc_grid(int width, int height)
{
int **dim;
int x, y;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
dim = malloc(sizeof(int *) * height);
}
if (dim == NULL)
{
return (NULL);
}
else
{
for (x = 0 ; x < height ; x++)
{
dim[x] = malloc(sizeof(int) * width);
if (dim[x] == NULL)
{
for (; x >= 0 ; x--)
{
free(dim[x]);
}
free(dim);
return (NULL);
}
}
for (x = 0 ; x < height ; x++)
{
for (y = 0 ; y < width ; y++)
{
dim [x][y] = 0;
}
}
}
return (dim);
}
