#include "main.h"

/**
 * clear_bit - clears the bit at a given index. (i.e. to 0);
 * @n: unsigned long integer;
 * @index: index of bit to be changed;
 * Return: returns (1) on Success, else (-1);
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_check = 1, tmp = *n;
	unsigned int i = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	while (i < index)
	{
		bit_check *= 2;

		i++;
	}
	*n = ~(bit_check) & tmp;

	return (1);
}
