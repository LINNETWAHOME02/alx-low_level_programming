#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  This function inserts a
 * new node at a given position.
 * @head: Pointer to the head of the list
 * @idx:  index of the list where the new node should be added
 * @n: Integer elements in the linked list
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	size_t i;

	if (head == NULL)
		return (NULL);/*Invalid head pointer*/
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);/*Memory allocation failed*/
	(*new_node).n = n;
	if (idx == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = (*current).next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);/*If it cann't insert at index idx*/
	}
	(*new_node).next = (*current).next;
	(*current).next = new_node;
	return (new_node);
}
