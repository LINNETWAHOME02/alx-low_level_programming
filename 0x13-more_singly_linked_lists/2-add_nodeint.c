#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - This function adds a new node at the beginning of the list
 * @head: Double pointer to the head of list_t structure
 * @n: pointer to the number to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}
