#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped from n to m;
 * @n: source - number to be flipped;
 * @m: destination - number n is to be flipped;
 * Return: returns unsigned long int, represnting number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mn = m ^ n;
	unsigned int i = 0, num_bits = 0;

	while (i < 64)
	{
		if ((1 & (mn >> i)))
			num_bits++;

		i++;
	}

	return (num_bits);
}
