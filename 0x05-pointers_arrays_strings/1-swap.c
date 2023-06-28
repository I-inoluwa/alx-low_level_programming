#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: pointer variable to the first integer.
  * @b: pointer variable to the second integer.
  * Return: returns void.
  */

void swap_int(int *a, int*b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
