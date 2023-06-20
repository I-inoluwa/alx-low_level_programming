#include <stdio.h>

/**
  * main - helps to output all the numbers base 16
  * in lowercase; followed by a new line.
  *
  * Return: returns 0
  */

int main(void)
{
	int numbase16;
	char ltrbase16;

	for (numbase16 = 0; numbase16 <= 9; numbase16++)
	{
		putchar(numbase16 + '0');
	}
	for (ltrbase16 = 'a'; ltrbase16 <= 'f'; ltrbase16++)
	{
		putchar(ltrbase16);
	}
	putchar('\n');
	return (0);
}
