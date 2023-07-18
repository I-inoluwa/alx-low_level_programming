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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (1);

	d->name = name;
	d->age = age;
	d->owner = owner;

}
