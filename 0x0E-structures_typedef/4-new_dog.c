#include "dog.h"
#include <stdlib.h>

/**
  * sstrcpy - creates a copy of a string
  * @string: string to be copied.
  * Return: returns a string.
  */

char *sstrcpy(char *string)
{
	int len, i;
	char *cpy;

	if (*string == '\0')
		return (NULL);

	for (len = 0; string[len]; len++)
		i = len;

	cpy = malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		cpy[i] = string[i];

	return (cpy);
}

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
	char *namecpy, *ownercpy;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->age = age;

	namecpy = sstrcpy(name);
	if (*namecpy == '\0')
	{
		return (NULL);
	}
	doggo->name = namecpy;

	ownercpy = sstrcpy(owner);
	if (*ownercpy == '\0')
	{
		return (NULL);
	}
	doggo->owner = ownercpy;
	return (doggo);
}
