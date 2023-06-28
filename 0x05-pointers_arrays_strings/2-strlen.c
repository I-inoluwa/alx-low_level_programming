#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: pointer to the string / char
  * Return: returns an integer (length of string);
  */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (length >= 0)
	{
		if (*(s++) == '\0')
		{
			break;
		}
		length++;
	}
	return (length);
}
