#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - prints anything.
  * @format: list of all types of arguments passed.
  * Return: returns void;
  */

void print_all(const char * const format, ...)
{
	va_list args;
	char *each, *sep = "";
	const char * const fmt = format;
	unsigned int n = 0;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (fmt[n] != '\0')
	{
		if (fmt[n] == 'c' || fmt[n] == 'f' || fmt[n] == 'i' || fmt[n] == 's')
		{
			printf("%s", sep);
			switch (fmt[n])
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
			sep = ", ";
		}
		n++;
	}
	va_end(args);
	printf("\n");
}
