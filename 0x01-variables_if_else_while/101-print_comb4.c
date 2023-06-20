#include <stdio.h>

/**
  * main - prints all possible different combinations,
  * of three digits.
  *
  * Return: returns 0
  */

int main(void)
{
	int firstdigit;
	int secdigit;
	int thrdigit;

	for (firstdigit = 0; firstdigit <= 7; firstdigit++)
	{
		for (secdigit = firstdigit + 1; secdigit <= 8; secdigit++)
		{
			for (thrdigit = secdigit + 1; thrdigit <= 9; thrdigit++)
			{
				putchar(firstdigit + '0');
				putchar(secdigit + '0');
				putchar(thrdigit + '0');
				if (!((firstdigit == 7) && (secdigit == 8) && (thrdigit == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
