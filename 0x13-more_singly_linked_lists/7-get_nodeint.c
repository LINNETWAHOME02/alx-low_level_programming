#include "lists.h"

/**
 * get_nodeint_at_index -  This function returns nth node of list
 * @head: Pointer to the head of the list
 * @index:  Index of the node, starting at 0
 *
 * Return:  nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	size_t counter = 0;

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);/*If node is found at specified index*/
		}
		current = (*current).next;
		counter++;
	}
	return (NULL);
}
