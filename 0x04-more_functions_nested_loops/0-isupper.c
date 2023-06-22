#include "main.h"

/**
  * _isupper - checks for upper case characters
  * @c: character input to be checked.
  * Return: returns 1 if c is uppercase,
  * otherwise, 0.
  */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
