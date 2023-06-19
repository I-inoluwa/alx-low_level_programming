#include <stdio.h>

/**
  * main - prints letters of the alphabet,
  * first in lower, then in upper case.
  *
  * Return: returns 0
  */

int main(void)
{
	char albet;
	char ALBET;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
		putchar(albet);
	}
	for (ALBET = 'A'; ALBET <= 'Z'; ALBET++)
	{
		putchar(ALBET);
	}
	putchar('\n');
	return (0);
}
