#include "main.h"

/**
  * print_last_digit - prints the last figit of a number.
  * @num: number to be analysed
  * Return: returns the last digit.
  */

int print_last_digit(int num)
{
	int last;

	last = num % 10
	if (num >= 0)
	{
		putchar(last + '0');
	}
	else
	{
		last = (-1) * last
		putchar(last + '0');
	}
	return (last)
}
