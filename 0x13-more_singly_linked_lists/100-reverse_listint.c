#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint -  This function reverses a linked list
 * @head: Pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		/*Store the next node*/
		next_node = (*current).next;

		/*Reverse the next pointer*/
		(*current).next = prev;

		/*Move prev to current*/
		prev = current;

		/*Move current to the next node*/
		current = next_node;
	}
	/*prev is now the new first node*/
	*head = prev;/*Update the head to point to last node original list*/
	return (*head);
}
