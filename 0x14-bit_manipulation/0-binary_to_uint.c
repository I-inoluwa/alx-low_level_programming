#include "main.h"

/**
 * binary_to_uint - converts a binaryb to an unsigned int;
 * @b: string of integers to be converted;
 * Return: returns the converted result in decimal;
 * otherwise,(0) on failure;
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL)
		return (0);

	while (*(b + i))
	{
		result *= 2;
		if (!(*(b + i) == '0' || *(b + i) == '1'))
			return (0);

		result += *(b + i) - '0';
		++i;
	}

	return (result);
}
