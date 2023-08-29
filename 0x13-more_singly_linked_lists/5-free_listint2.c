#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  This function frees the list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing (void return-type)
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temporary = *head;
		*head = (*head)->next;
		free(temporary);/*This will free the current node*/
	}
}
