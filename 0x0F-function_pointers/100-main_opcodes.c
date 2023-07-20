#include <stdio.h>
#include <stdlib.h>

/**
  * main - main c function. Prints its own opcodes.
  * @argc: number of arguments passed.
  * @argv: list of arguments passed.
  * Return: returns (0). Or exits on failure.
  */

int main(int argc, char *argv[])
{
	int num;
	char *opcodes;
	int (*pointer)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes = (unsigned char *)pointer;

	for (int i = 0; i < num; i++)
	{
		printf("%.2x", *opcodes);

		if (i != num - 1)
		{
			printf(" ");
		}
		pointer++;
	}
	printf("\n");

	return (0);
}
