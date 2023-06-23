#include "main.h"

/**
  * print_square - prints a square, followed by a new line.
  * @size: length of the square (# is the unit).
  * Return: returns nothing.
  */

void print_square(int size)
{
	int len;
	int bth;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (bth = 0; bth < size; bth++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
