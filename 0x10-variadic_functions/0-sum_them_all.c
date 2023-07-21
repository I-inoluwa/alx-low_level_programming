#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: number of integers to be added.
  * Return: returns an integer;
  */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum, arg;
	va_list int_args;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(int_args, n);
	for (i = 0; i < (int)n; i++)
	{
		arg = va_arg(int_args, int);
		sum += arg;
	}
	va_end(int_args);

	return (sum);
}
