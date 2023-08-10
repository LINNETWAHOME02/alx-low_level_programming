#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * *malloc_checked - This function allocates memory using malloc
 *
 * @b - (size_t size) Bytes to be reserved
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
