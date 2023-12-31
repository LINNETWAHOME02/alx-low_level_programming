#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - This function reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: Pointer of newly allocated memory or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int cp_size, *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	cp_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, cp_size);

	free(ptr);

	return (new_ptr);
}
