#include "main.h"

/**
 * print_array - This function prints n elements of an array
 *
 * @a: Array name
 *
 * @n: Number of elements in the array that are to be printed
 *
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
