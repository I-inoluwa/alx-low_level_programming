#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bobionjk");
    printf("My name is %s, and I am %.1f :) - Woof! The name of my owner is %s...\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}
