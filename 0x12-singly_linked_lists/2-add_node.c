#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - This function adds a new node at the beginning of the list
 * @head: Double pointer to the head of list_t structure
 * @str: pointer to the string to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(size_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	if ((*new_node).str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	(*new_node).len = strlen(str);
	(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}
