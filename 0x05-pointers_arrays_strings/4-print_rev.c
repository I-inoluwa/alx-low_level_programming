#include "main.h"

/**
  * print_rev - prints a string in reverse, and adds a new line.
  * @s: string to be printed.
  * Return: returns nothing;
  */

void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			for (i = length - 1; i >= 0; i--)
			{
				_putchar(s[i]);
			}
			_putchar('\n');
			break;
		}
		length++;
	}
}
