#include "main.h"

/**
  * _islower - checks for lowercase characters
  * @c: lowercase parameter
  * Return: returns 1 if true, and 0 if false.
  */

int _islower(int c)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (c == ltr)
			return (1);
	}
	return (0);
}
