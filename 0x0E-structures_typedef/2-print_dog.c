#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - This function prints the structure of a dog
 * @d: Pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
