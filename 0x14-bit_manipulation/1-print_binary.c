#include "main.h"

/**
 * print_binary - prints the binary equivalent an unsigned int;
 * @n: number to be conveted and printed;
 * Return: returns void;
*/

void print_binary(unsigned long int n)
{
	unsigned long int nxt = n;

	if (n == 0)
		_putchar(0 + '0');

	print_binary_recursive(nxt >> 0);
}


/**
 * print_binary_recursive - uses recursion to print a number in binary;
 * @nxt: an int representing the right shifted value of the previous nxt;
 * Return: returns nothing;
*/
void print_binary_recursive(unsigned long int nxt)
{
	if (nxt == 0)
		return;

	print_binary_recursive(nxt >> 1);

	if (1 & nxt)
		_putchar(1 + '0');
	else
		_putchar(0 + '0');
}
