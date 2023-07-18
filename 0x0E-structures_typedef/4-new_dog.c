#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog.
  * @name: name of dog.
  * @age: age of dog.
  * @owner: dog's owner;
  * Return: returns a pointer to a new dog variable.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int i;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->age = age;

	if (name == NULL)
	{
		doggo->name = NULL;
	}
	else
	{
		for (i = 0; name[i]; i++)
		{
			doggo->name[i] = name[i];
		}
		doggo->name[i] = '\0';
	}

	for (i = 0; owner[i]; i++)
	{
		doggo->owner[i] = owner[i];
	}

	free(doggo);

	return (doggo);
}
