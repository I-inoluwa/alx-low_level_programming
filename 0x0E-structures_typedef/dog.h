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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

