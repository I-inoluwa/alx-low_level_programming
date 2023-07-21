#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: sep between numbers printed.
  * @n: number of integers passed to function.
  * Return: returns void.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list num_args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(num_args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(num_args, int);
		printf("%d", num);
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	va_end(num_args);
	printf("\n");
}
