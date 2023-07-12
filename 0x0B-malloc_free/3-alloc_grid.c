#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array, i.e. length of each subarray.
 * @height: height of the array, i.e. length of the array.
 * Return: returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **d2_arr;
	int i, j;

	d2_arr = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(d2_arr + i) = malloc(sizeof(int) * width);
		if (*(d2_arr + i) == NULL)
		{
			free(d2_arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			(*(d2_arr + i))[j] = 0;
		}
	}

	return (d2_arr);
}
