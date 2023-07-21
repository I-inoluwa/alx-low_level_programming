#include "variadic_functions.h"
#include <stdio.h>

/**
  * len - finds length of a str, excluding certain chars.
  * @format: string passed.
  * Return: returns an integer;
  */

unsigned int len(const char * const format)
{
	unsigned int i, n;
	char fmt;

	i = 0, n = 0;
	while (format[n] != '\0')
	{
		fmt = format[n];
		if (fmt == 'c' || fmt == 'f' || fmt == 'i' || fmt == 's')
			i++;

		n++;
	}
	return (i);
}

/**
  * print_all - prints anything.
  * @format: list of all types of arguments passed.
  * Return: returns void;
  */

void print_all(const char * const format, ...)
{
	va_list args;
	char *each;
	char fmt;
	unsigned int n = 0, i = 0;

	va_start(args, format);
	while (format[n] != '\0')
	{
		fmt = format[n];
		while (fmt == 'c' || fmt == 'f' || fmt == 'i' || fmt == 's')
		{
			switch (format[n])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 's':
					each = va_arg(args, char *);
					if (each == NULL)
						each = "(nil)";
					printf("%s", each);
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
			}
			if (i < (len(format) - 1))
			{
				printf(", ");
				i++;
			}
			break;
		}
		n++;
	}
	va_end(args);
	printf("\n");
}
