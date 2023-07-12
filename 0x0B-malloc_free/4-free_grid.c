#include "main.h"


/**
* free_grid - frees 2d grid .
*
* @grid: pointer to the grid .
* @height: the height of the grid .
*
*/


void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
