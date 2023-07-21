#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: string to be printed in between.
  * @n: number of strings passed to the function;
  * Return: returns void;
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list str_args;

	if (n == 0)
	{
		return;
	}

	va_start(str_args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_args, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(str_args);
	printf("\n");
}
