#include "main.h"

/**
  * times_table - prints the 9-times table, starting with 0
  * Return: returns nothing
  */

void times_table(void)
{
	int product;
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			product = num1 * num2;
			if ((product / 10) != 0)
			{
				_putchar((product / 10) + '0');
			}
			else if (num2 != 0)
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');
			if (num2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				;
			}
		}
		_putchar('\n');
	}
}
