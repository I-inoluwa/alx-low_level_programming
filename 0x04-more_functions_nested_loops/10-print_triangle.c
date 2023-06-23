#include "main"

/**
  * print_triangle - Prints a triangle, followed by a new line.
  * @size: size of the triangle (# is the unit)
  * Return: returns nothing.
  */

void print_triangle(int size)
{
	int spacelen;
	int hgt;
	int len;

	hgt = 1;
	if (size > 0)
	{
		while (size--)
		{
			for (spacelen = 0; spacelen < size; spacelen++)
			{
				_putchar(' ');
			}
			for (len = 0; len < hgt; len++)
			{
				_putchar('#');
			}
			hgt += 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
