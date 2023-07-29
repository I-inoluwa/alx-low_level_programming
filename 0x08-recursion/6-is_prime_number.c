#include "main.h"

/**
 * is_prime_number - checks if a number, n is prime;
 * @n: integer to be checked;
 * Return: returns (1) if True, (0) if false;
*/

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (_divisible(n, i));
}


/**
 * _divisible - checks if n is prime or not;
 * @n: number to be checked;
 * @i: incremented variable;
 * Return: returns (1) or (0);
*/

int _divisible(int n, int i)
{
	if ((n % i) == 0)
	{
		return (0);
	}

	if (((i * i) - n) > 0)
	{
		return (1);
	}
	i++;
	return (_divisible(n, i));
}
