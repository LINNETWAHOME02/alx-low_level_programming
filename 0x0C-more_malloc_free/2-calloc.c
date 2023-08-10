#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - This function allocates memory for an array
 * @nmemb: Array of elements
 * @size: Size/number of elements in the array
 *
 * Return: Pointer to memory that has been reserved
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	size_t total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(total);

	/*This will set allocated memory to zero*/
	if (mem)
		memset(mem, 0, total);

	return (mem);
}
