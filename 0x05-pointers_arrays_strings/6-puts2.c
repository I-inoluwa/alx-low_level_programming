#include "main.h"

/**
  * puts2 - prints every other character of a string, starting with the first.
  * @str: string to be printed.
  * Return: returns nothing.
  */

void puts2(char *str)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		else if ((len % 2) == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
}
