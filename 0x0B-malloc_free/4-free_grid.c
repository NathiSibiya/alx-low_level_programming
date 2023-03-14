#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously create
 * @grid: frees the 2 dimensional array of integers
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
