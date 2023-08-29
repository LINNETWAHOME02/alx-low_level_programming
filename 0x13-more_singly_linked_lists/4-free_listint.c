#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  This function frees the list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing (void return-type)
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temporary = head;

		head = (*head).next;
		free(temporary);
	}
}
