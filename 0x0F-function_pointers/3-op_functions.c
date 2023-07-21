#include "3-calc.h"
#include <stdio.h>

/**
  * op_add - returns the sum of two integers.
  * @a: integer 1;
  * @b: integer 2;
  * Return: returns the sum; or exits on failure.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference betwween two ints.
  * @a: integer 1;
  * @b: integer 2;
  * Return: returns the difference.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of two ints.
  * @a: integer 1;
  * @b: integer 2;
  * Return: returns the product.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the division of two integers.
  * @a: integer 1;
  * @b: integer 2;
  * Return: returns the quotient.
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - returns the modulo of two integers.
  * @a: integer 1
  * @b: integer 2;
  * Return: returns the modulo.
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
