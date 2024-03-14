#include "main.h"
/**
*free_grid - that free a 2 dimensional
*@grid: the adress of the two dimensional grid
*@height: height of grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
