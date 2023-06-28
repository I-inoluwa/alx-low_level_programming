#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers, followed by \n.
  * @a: array of integers, or pointer.
  * @n: number of elements of the array to be printed.
  * Return: returns void.
  */

void print_array(int *a, int n)
{
	int countdown;

	for (countdown = 0; countdown < n; countdown++)
	{
		if (countdown != (n - 1))
		{
			printf("%d, ", *(a + countdown));
		}
		else
		{
			printf("%d\n", *(a + countdown));
		}
	}
}
