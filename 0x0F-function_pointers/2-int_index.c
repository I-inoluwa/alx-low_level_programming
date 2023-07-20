#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: array containing the integer to be searched.
  * @size: size of the aray.
  * @cmp: pointer to the function for doing the searching.
  * Return: returns the index of the integer when found;
  * Otherwise, returns -1.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
