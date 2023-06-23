#include "main.h"

/**
  * print_number - prints an integer to the screen.
  * @n: integer to be printed.
  * Return: returns nothing.
  */

void print_number(int n)
{
	int pow;
	int i;

	i = 0;
	pow = 1;
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		while (i >= 0)
		{
			if ((n / pow) == 0)
			{
				pow /= 10;
				i -= 1;
				break;
			}
			pow *= 10;
			i += 1;
		}
		while (i >= 0)
		{
			if (n < 0)
			{
				_putchar('-');
				n = (-1 * n);
			}
			_putchar((n / pow) + '0');
			n -= ((n / pow) * pow);
			pow /= 10;
			i -= 1;
		}
	}
}
