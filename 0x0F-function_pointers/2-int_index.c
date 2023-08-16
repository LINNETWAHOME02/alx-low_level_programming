#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - This function searches for an integer
 * @array: Array pointer that points to the elements in the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare value
 *
 * Return: returns the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iterator;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (iterator = 0; iterator < size; iterator++)
		{
			if (cmp(array[iterator]) != 0)
				return (iterator);
		}
	} else
	{
		exit(98);
	}
	return (-1);
}
