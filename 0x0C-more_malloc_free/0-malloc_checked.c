#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - This function allocates memory using malloc
 * @b: Bytes to be reserved (size_t size)
 *
 * Return: Pointer allocated to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
