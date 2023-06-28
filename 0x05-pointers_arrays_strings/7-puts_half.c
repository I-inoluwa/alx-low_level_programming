#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: string to be printed;
  * Return: returns nothing.
  */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			for (n = ((len + 1) / 2); n < len; n++)
			{
				_putchar(str[n]);
			}
			_putchar('\n');
			break;
		}
		len++;
	}
}
