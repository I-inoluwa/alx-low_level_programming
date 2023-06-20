#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10,
  * starting from 0; seperated by commas.
  *
  * Return: returns 0
  */

int main(void)
{
	int numbase10;

	for (numbase10 = 0; numbase10 <= 9; numbase10++)
	{
		putchar(numbase10 + '0');
		if (numbase10 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
