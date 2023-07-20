#include "3-calc.h"
#include <stdio.h>

/**
  * main - main c function; performas an operation.
  * @argc: number of ARGUMENTS;
  * @argv: list of arguments;
  * Return: returns (0); otherwise, an exit code.
  */

int main(int argc, char *argv)
{
	int a, b, result, i;
	if (argc == 4)
	{
		for (i = 0; argv[1][i] || argv[3][i]; i++)
		{
			if ((argv[1][i] < '0' || argv[1][i] > '9') || (argv[3][i] < '0' || argv[3][i] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}

		
