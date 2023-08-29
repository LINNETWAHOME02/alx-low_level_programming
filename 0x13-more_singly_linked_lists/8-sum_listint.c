#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint -  This function returns the sum of all the data(n)
 * of linked list
 * @head: Pointer to the head of the list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
