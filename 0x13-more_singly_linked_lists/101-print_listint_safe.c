#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe -  This function prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		counter++;

		if ((void *)head <= (void *)(head->next))
		{
			printf("-> [%p] %d\n", (void *)(head->next), head->next->n);
			break;
		}
		head = (*head).next;
	}
	return (counter);
}
