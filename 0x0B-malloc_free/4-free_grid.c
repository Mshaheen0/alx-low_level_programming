#include "main.h"
/**
 * free_grid - Frees memory allocated for a 2D grid of integers.
 *
 * @grid:   Pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function takes a pointer to a 2D grid of integers and its height as
 * parameters and frees the memory previously allocated for the grid. It is
 * designed to be used in conjunction with the alloc_grid function to prevent
 * memory leaks.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
