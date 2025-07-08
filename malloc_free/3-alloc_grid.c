#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - Creates a 2D array of integers initialized to 0
 * @width: The number of columns (width of the grid)
 * @height: The number of rows (height of the grid)
 *
 * Description: Allocates memory for a
 * two-dimensional array (grid) of integers.
 * Each cell of the grid is initialized to 0.
 * If width or height is less than
 * or equal to 0, or if memory allocation fails,
 * the function returns NULL.
 *
 * Return: Pointer to the 2D array (int **), or NULL on failure
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
		return (NULL);

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);

			if (grid[i] == NULL)
			{
				while (i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	return (grid);
}
