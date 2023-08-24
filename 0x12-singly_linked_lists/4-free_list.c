#include "lists.h"
#include <stdlib.h>
/**
 * free_list -  This function frees the list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing (void return-type)
 */
void free_list(list_t *head)
{
	list_t *temporary_var;

	while (head != NULL)
	{
		temporary_var =  head;
		head = (*head).next;

		if ((*temporary_var).str != NULL)
		{
			free((*temporary_var).str);
		}
		free(temporary_var);
	}
}
