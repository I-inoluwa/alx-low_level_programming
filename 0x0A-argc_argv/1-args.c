#include <stdio.h>

/**
  * main - prints the number of arguments passed into it.
  * @argc: number of arguments passed.
  * @argv: list of arguments passed.
  * Return: returns 0;
  */

int main(int argc, char **argv)
{
	(void) *argv;
	printf("%d\n", argc);

	return (0);
}
