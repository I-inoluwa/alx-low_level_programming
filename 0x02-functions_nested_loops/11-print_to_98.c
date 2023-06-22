#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers from 'n' to 98.
  * @n: start of range of numbers
  * Return: returns nothing
  */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		while (num++ <= n)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		while (num-- >= n)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	_putchar('\n');
}
