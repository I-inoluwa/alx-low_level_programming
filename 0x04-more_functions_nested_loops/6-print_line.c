#include "main.h"

/**
  * print_line - draws a straight line in the terminal.
  * @n: length of the line drawn (_ is the unit of measurement)
  * Return: returns nothing. but prints only a new line,
  * if n = 0 or less.
  */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
