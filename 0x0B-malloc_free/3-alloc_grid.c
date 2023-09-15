#include "main.h"
/**
 * alloc_grid - Allocate memory for a 2D grid of integers and initialize to 0
 *
 * @width:  The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return:   On success, a pointer to the allocated 2D array of integers.
 *           On failure, or if width or height is 0 or negative, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate rows pointer */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	/* allocate elements space for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	/* set the value of each element of the grid = 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
