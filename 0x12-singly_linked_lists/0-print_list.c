#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - This function prints all the elements in the list
 * @h: list of the elementspassed/added to the list
 *
 * Return: Elements of the list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%ld] %s\n", (*h).len, (*h).str);
		}
		counter++;
		h = (*h).next;
	}
	return (counter);
}
