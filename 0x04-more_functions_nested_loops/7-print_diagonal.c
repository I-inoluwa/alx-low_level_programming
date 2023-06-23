#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  * @n: length of diagonal line;
  * "\" is the unit of measurement.
  * Return: return nothing.
  */

void print_diagonal(int n)
{
	int spacelen;
	int i;

	spacelen = 0;
	if (n > 0)
	{
		while (n--)
		{
			for (i = 0; i < spacelen; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spacelen += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
