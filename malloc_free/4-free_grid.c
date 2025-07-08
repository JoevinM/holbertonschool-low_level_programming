#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - Frees the memory allocated for a 2D grid of integers
 * @grid: Pointer to the 2D array to be freed
 * @height: Number of rows in the grid
 *
 * Description: This function frees each row of a dynamically allocated
 * two-dimensional array of integers, and then frees the array of pointers
 * itself. It is typically used to release memory allocated by alloc_grid.
 * If the grid is NULL, the function does nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}