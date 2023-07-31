#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 *
 * @s: Starting address of memory to be filled
 * @b: Desired value
 * @n: Number of bytes to be changed
 *
 * Return: New array with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
