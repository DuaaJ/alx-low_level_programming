#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *@grid: a grid
 @height: the height
 */


void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
