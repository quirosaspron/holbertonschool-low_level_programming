#include <stdlib.h>

/**
  * free_grid - frees a 2d array of integers
  * @grid: 2d array to be freed
  * @height: the height of the array
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
