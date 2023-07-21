#include "3-calc.h"
#include <stdio.h>

/**
  * main - main c function; performas an operation.
  * @argc: number of ARGUMENTS;
  * @argv: list of arguments;
  * Return: returns (0); otherwise, an exit code.
  */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*op_ptr)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
	
		op_ptr = get_op_func(argv[2]);
		if (op_ptr == NULL)
		{
			printf("Error\n");
			exit(98);
		}
		result = op_ptr(a, b);
		printf("%d\n", result);

	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
