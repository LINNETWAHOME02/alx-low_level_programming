#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 *@n: input
 *@index: index, starts with 0
 *
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	check = 1 << index;
	check = ~check;/*Invert the check to set the bit at index to 0*/
	*n &= check;/*Clear the bit at index*/

	return (1);
}
