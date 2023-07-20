#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - prints a name.
  * @name: name to be printed.
  * @f: a pointer to the function that prints names.
  * Return: returns void
  */

void print_name(char *name, void (*f)(char *))
{
	if ((*name == '\0') || (f == NULL))
	{
		return;
	}

	f(name);
}
