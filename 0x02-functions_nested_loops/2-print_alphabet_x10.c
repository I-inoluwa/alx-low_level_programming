#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet in lowercase
  * 10 times...
  *
  * Return: returns nothing
  */

void print_alphabet_x10(void)
{
	char albet;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (albet = 'a'; albet <= 'z'; albet++)
		{
			_putchar(albet);
		}
		_putchar('\n');
	}
}
