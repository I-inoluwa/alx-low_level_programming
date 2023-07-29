#include "main.h"

/**
 * factorial- returns the factorial of an integer;
 * @n: number passed as arg;
 * Return: returns an int;
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
