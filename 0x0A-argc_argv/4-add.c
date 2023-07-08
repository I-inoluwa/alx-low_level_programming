#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers.
  * @argc: count of number of args
  * @argv: array of strings of args.
  * Return: returns (0);
  */

int main(int argc, char *argv[])
{
	int i, each, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (each = 0; argv[i][each]; each++)
		{
			if ((argv[i][each] < '0') || (argv[i][each] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
