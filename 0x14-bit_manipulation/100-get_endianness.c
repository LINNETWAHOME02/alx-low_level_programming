#include "main.h"

/**
 *get_endianness - This function checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *byte_ptr = (char *)&val;

	/*Return 1 for little endian, 0 for big endian*/
	return (*byte_ptr == 1);
}
