#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

/**
  * main - prints the last digit of a random number
  *
  * Return: returns 0
  */

int main(void)
{
	int n;
	char *end_string;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;

	if (last_digit == 0)
	{
		end_string = "is zero";
	}
	else if (last_digit > 5)
	{
		end_string = "and is greater than 5";
	}
	else
	{
		end_string = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %d %s\n", n, last_digit, end_string);

	return (0);
}
