#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number,
 * or 0 if there's an invalid character or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0); /* Invalid character */

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
