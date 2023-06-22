#include "main.h"

/**
  * print_sign - Prints the sign of a number
  * @n: number to be checked
  * Return: returns (1) and prints + if n is greater than zero.
  * returns (-1) if n is less than zero, else returns (0).
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
