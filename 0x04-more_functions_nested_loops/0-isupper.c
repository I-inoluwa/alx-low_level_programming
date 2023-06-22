#include "main.h"

/**
  * _isupper - checks for upper case characters
  * @c: character input to be checked.
  * Return: returns 1 if c is uppercase,
  * otherwise, 0.
  */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else if ((c >= 97) && (c <= 122))
	{
		return (0);
	}
}
