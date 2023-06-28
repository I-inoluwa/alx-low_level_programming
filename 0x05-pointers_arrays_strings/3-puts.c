#include "main.h"

/**
  * _puts - prints a string, followed by a new line to the screen.
  * @str: string to be printed.
  * Return: returns nothing.
  */

void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
