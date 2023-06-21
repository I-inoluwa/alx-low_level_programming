#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase
  *
  * Return: returns nothing
  */

void print_alphabet(void)
{
	char albet;

	for (albet = 'a'; albet <= 'z'; albet++)
	{
		_putchar(albet);
	}
	_putchar('\n');
}
