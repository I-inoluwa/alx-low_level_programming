#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid previously allocated.
 * @grid: array with memory to be freed.
 * @height: height of the array, i.e. length of the array.
 * Return: returns nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}
