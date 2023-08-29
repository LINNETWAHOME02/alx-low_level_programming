#include "lists.h"
#include <stdio.h>
/**
 * listint_len - This function returns the number of elements in a list
 * @h: List of elements added/passed to the list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = (*h).next;
		counter++;
	}
	return (counter);
}
