#include <stdio.h>

/**
  * main - prints all possible different combinations,
  * of two two-digit numbers.
  *
  * Return: returns 0
  */

int main(void)
{
	int num1_1;
	int num1_2;
	int num2_1;
	int num2_2;

	for (num1_1 = 0; num1_1 <= 9; num1_1++)
	{
		for (num1_2 = 0; num1_2 <= 8; num1_2++)
		{
			for (num2_1 = num1_1; num2_1 <= 9; num2_1++)
			{
				for (num2_2 = num1_2 + 1; num2_2 <= 9; num2_2++)
				{
					putchar(num1_1 + '0');
					putchar(num1_2 + '0');
					putchar(' ');
					putchar(num2_1 + '0');
					putchar(num2_2 + '0');
					if (!((num1_1 == 9) && (num1_2 == 8) && (num2_1 == 9) && (num2_2 == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
