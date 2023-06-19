#include <stdio.h>

/**
  * main - helps to output all letters of the alphabet
  * in lowercase
  *
  * Return: returns 0
  */

int main(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
		putchar(albet);
	}
	putchar('\n');
	return (0);
}
