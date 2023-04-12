#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees the memory allocated in alloc_grid
 * @grid: argument of the function
 * @height: argument of the function
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
