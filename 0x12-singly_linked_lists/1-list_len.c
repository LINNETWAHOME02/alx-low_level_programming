#include "lists.h"
#include <stdio.h>
/**
 * list_len - This function returns the number of elements in a list
 * @h: List of elements added/passed to the list
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
