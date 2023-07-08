#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change.
  * @argc: integer count of the number of args.
  * @argv: Array of arguments.
  * Return: returns (0);
  */

int main(int argc, char *argv[])
{
	int cents[5];
	int i, num, res;

	cents[0] = 1;
	cents[1] = 2;
	cents[2] = 5;
	cents[3] = 10;
	cents[4] = 25;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 4; i > 0; i--)
		{
			while (num / cents[i])
			{
				res += 1;
				num -= cents[i];
			}
		}

		res += num;
		printf("%d\n", res);
	}

	return (0);
}
