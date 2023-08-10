#include "main.h"
#include <stdlib.h>

/**
 * *array_range - This function creates an array of integers
 *
 * @min: Minimum acceptable values
 * @max: Maximum acceptable values
 *
 * Return: Pointer to new array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr, counter, total;

	if (min > max)
		return (NULL);

	total = max - min + 1;

	arr = malloc(sizeof(int) * total);

	if (arr == NULL)
		return (NULL);
	for (counter = 0; min <= max; counter++)
		arr[counter] = min++;
	return (arr);
}
