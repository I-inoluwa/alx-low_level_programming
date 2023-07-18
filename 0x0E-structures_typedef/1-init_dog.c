#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes a variable of type "struct dog".
  * @d: dog variable
  * @name: name of dog;
  * @age: age of dog;
  * @owner: Dog's owner.
  * Return: returns void;
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			d->(*(name + i)) = name[i];
		d->(*(name + i)) = '\0';
		d->age = age;

		for (i = 0; owner[i] != '\0'; i++)
			d->(*(owner + i)) = owner[i];
		d->owner(*(owner + i)) = '\0';
	}

	free(d);
}
