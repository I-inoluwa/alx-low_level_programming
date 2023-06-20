#include <stdio.h>

/**
  * main - prints all possible different combinations,
  * of two digits.
  *
  * Return: returns 0
  */

int main(void)
{
	int firstdigit;
	int secdigit;

	for (firstdigit = 0; firstdigit <= 8; firstdigit++)
	{
		for (secdigit = firstdigit + 1; secdigit <= 9; secdigit++)
		{
			putchar(firstdigit + '0');
			putchar(secdigit + '0');
			if (!((firstdigit == 8) && (secdigit == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
