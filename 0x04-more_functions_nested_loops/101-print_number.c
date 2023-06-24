#include "main.h"

/**
  * print_number - prints an integer to the screen.
  * @n: integer to be printed.
  * Return: returns nothing.
  */

void print_number(int n)
{
	int pow;

	pow = 1;
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = (-1) * n;
		}

		while ((n / pow) >= 10)
		{
			pow *= 10;
		}

		while (pow > 0)
		{
			_putchar((n / pow) + '0');
			/*
			 * n -= ((n/pow) * pow);
			 * same thing as:
			 */
			n %= pow;
			pow /= 10;
		}
	}
}
