#include "main.h"
/**
 * swap_int - Swapping the values of two integers
 *
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
