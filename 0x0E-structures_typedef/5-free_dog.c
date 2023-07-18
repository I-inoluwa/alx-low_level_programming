#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - functionn to free all dogs type.
  * @d: dog_t datatype to be freed;
  * Return: returns void;
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
