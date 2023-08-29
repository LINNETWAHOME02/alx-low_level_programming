#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  This function deletes the head node of a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int n;

	if (*head == NULL)
		return (0);/*If linked list is empty, return 0*/

	temporary = *head;
	n = (*temporary).n;
	*head = (*head)->next;
	free(temporary);/*Free the old head node*/

	return (n);
}
