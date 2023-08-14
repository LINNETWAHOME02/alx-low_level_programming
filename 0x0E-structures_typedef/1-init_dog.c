#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - This function initializes a variable of type
 * struct dog
 *
 * struct dog *d - Structure that has the dog's qualities
 * @d: Pointer that can be used to change any value
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog owner's name
 *
 * Return: Nothing (This is a void function)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Error: pointer cannot be NULL/empty.\n");
	}
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
