#include "main.h"

/**
 * get_bit - Gets the value of a bit at an index in a number
 * @n: integer input
 * @index: bit index
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
