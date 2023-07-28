#include "main.h"

/**
 * _puts_recursion - prints a string by recursion;
 * @s: String to be printed.
 * Return: returns void;
*/

void _puts_recursion(char *s)
{
	if (s == NULL)
		return;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(&(*(s + 1)));
}
