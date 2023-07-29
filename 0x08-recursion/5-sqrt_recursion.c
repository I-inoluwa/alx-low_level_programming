#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number;
 * @n: number passed as argument;
 * Return: natural square root of n;
 * Otherwise, -1;
*/

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	if (n == 0)
		return (0);

	return (_re_sqr(n, i));
}


/**
 * _re_sqr - returns the sqrt of a number;
 * @n: number being checked;
 * @i: increment variable;
 * Return: returns the square root of n;
 * Otherwise, (-1);
*/

int _re_sqr(int n, int i)
{
	if ((i * i) > n)
		return (-1);

	if ((i * i) == n)
		return (i);

	i++;
	return (_re_sqr(n, i));
}
