#include "main.h"
#include <string.h>
/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:  converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit = 1;
	int length = strlen(b);
	int i;

	if (b == NULL)
		return (0);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);/* For invalid character in the string*/
		}
		if (b[i] == '1')
		{
			result += bit;
		}
		bit <<= 1;
	}
	return (result);
}
