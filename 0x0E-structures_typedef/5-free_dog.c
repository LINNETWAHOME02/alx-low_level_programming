#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees the dog structure from memory
 *
 * @d: Structure to be freed fro  mem
 * Return: Nothing (This is a void function)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
