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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#include "4-new_dog.c"

#endif

