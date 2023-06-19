#include <stdio.h>

/**
  * main - helps to output all letters of the alphabet;
  * excluding letters q and e, in lowercase.
  *
  * Return: returns 0
  */

int main(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
		if (!((albet == 'q') || (albet == 'e')))
		{
			putchar(albet);
		}
	}
	putchar('\n');
	return (0);
}
