#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with c.
 * @size: unsigned int argument, that indicates the size of the array.
 * @c: the char to initialize the array
 * Return: returns a pointer to an char (i.e. an array.)
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (sizeof(arr) / sizeof(char)); i++)
	{
		if (i == 0)
		{
			*(arr + i) = c;
		}
	}
	/*
	 *free(arr);
	 */
	return (arr);
}
