#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - This function executes a function given as a
 *  parameter on each element of an array
 * @array: Array pointer to functions
 * @size: Size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing (void return-type)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iterator;

	if (array != NULL && action != NULL)
	{
		for (iterator = 0; iterator < size; iterator++)
		{
			action(array[iterator]);
		}
	} else
		exit(98);
}
