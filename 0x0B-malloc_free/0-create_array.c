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

	arr = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	*arr = c;
	/*
	 *free(arr);
	 */
	return (arr);
}
