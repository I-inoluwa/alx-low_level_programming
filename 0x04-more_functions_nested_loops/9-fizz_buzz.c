#include <stdio.h>

/**
  * main - Prints the number 1 to 100, followed by a new line;
  * but multiples of 3, and 5 are formatted to print:
  * fizz, buzz and fizzbuzz.
  * Return: returns (0)
  */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (((num % 3) == 0) && ((num % 5) == 0))
		{
			printf("Fizzbuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
}
