#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - function tha tprints struct dog.
  * @n: struct dog datatype.
  * Return: returns void;
  */

void print_dog(struct dog *n)
{
	if (n->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", n->name);
	}

	if (n->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", n->age);
	}

	if (n->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", n->owner);
	}

}
