#include <stdio.h>

/**
  * main - helps to output all letters of the alphabet
  * in lowercase; in reverse order.
  *
  * Return: returns 0
  */

int main(void)
{
	char tebla;

	for (tebla = 'z'; tebla >= 'a'; tebla--)
	{
		putchar(tebla);
	}
	putchar('\n');
	return (0);
}
