#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would
 * need to flip to get from one number to another
 *@n: input
 *@m: input
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int counter = 0;

	xor = n ^ m;
	while (xor != 0)
	{
		counter += xor & 1;
		xor >>= 1;
	}
	return (counter);
}
