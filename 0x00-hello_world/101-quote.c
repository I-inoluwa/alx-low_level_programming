/*
 * Two header files included:
 * One to be able to use the function, write,
 * The other, to have access to the function strlen.
 */

#include <unistd.h>
#include <string.h>

/**
  * main - prints a certain text tostandard error
  * and ends with a new line.
  *
  * Return: returns (1)
  */

/*
 * Using the "write" function and choosing option
 * (2), to print to standard error.
 * strlen gets the length of string printed
 */

int main(void)
{

	char* text;

	text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, strlen(text));

	return (1);

}
