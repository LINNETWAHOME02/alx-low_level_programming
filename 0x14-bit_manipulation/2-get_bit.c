#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index.
 *@n: Integer input
 *@index: index, starting from 0
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	check = 1 << index;

	if ((n & check) == 0)
	{
		return (0);/*Bit at index is 0*/
	} else
		return (1);/*Bit at index is 1*/
}
