#include "main.h"

/**
  * _isalpha - checks for alphabet characters, i.e. letters
  * @c: letter parameter
  * Return: returns 1 if true, and 0 if false.
  */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}
