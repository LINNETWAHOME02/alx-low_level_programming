#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  This function deletes node at index
 * @head: Pointer to the head of the list
 * @index:  Index of the node, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	size_t i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
	listint_t *temporary = *head;
		*head = (*head)->next;
		free(temporary);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = (*current).next;
	}
	if (current == NULL)
		return (-1);
	(*previous).next = (*current).next;
	free(current);
	return (1);
}
