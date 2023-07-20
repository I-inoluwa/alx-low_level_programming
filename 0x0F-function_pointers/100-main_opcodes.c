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
	unsigned char *pointer;

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

	pointer = (unsigned char *)main;

	for (int i = 0; i < num; i++)
	{
		printf("%.2x", *pointer);

		if (i != num - 1)
		{
			printf(" ");
		}
		pointer++;
	}
	printf("\n");

	return (0);
}
