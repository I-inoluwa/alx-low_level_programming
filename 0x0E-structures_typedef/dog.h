#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A new type, dog.
  * @name: name of dog;
  * @age: How old the dog is;
  * @owner: owner of the dog.
  *
  * Description: This creates a new datatype of dog.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#include "main.h"

#endif

