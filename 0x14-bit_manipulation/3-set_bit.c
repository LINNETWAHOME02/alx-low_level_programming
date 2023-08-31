#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 *@n: Input
 *@index: index, starts with 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	check = 1 << index;
	*n |= check;/*Sets the bit at index to 1*/
	return (1);
}
