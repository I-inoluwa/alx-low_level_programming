#include <stdio.h>

/**
  * main - Prints all arguments it receives, including the first.
  * @argc: count of all arguments.
  * @argv: list of all arguments.
  * Return: returns (0);
  */

int main(int argc, char *argv[])
{
	do {
		printf("%s\n", *argv++);
	} while (--argc);

	return (0);
}
