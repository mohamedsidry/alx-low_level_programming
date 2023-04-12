#include <stdlib.h>
#include "main.h"



/**
* free_grid- a function to free a 2D array .
* @grid: 2D array as an argument .
* @height: the height of the grid .
* Return: this function is void , has no return .
*/


void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
