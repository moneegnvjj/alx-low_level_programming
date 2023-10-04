#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid is not NULL */
	if (grid != NULL)
	{
		/* Free memory for each row */
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		/* Free memory for the array of row pointers */
		free(grid);
	}
}

