#include "main.h"

/**
  * print_to_98 - prints all natural numbers from 'n' to 98.
  * @n: start of range of numbers
  * Return: returns nothing
  */

void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; num++)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		if (num != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
