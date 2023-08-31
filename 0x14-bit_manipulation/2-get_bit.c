#include "main.h"

/**
 * get_bit - returns the value of the bit at a given index
 * @n: unsigned, long integer;
 * @index: index of bit;
 * Return: returns the value of the bit;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_check = 1;
	unsigned int i = 0;

	if (index >= 64)
		return (-1);

	while (i < index)
	{
		bit_check *= 2;
		i++;
	}

	return ((bit_check & n) >> i);
}
