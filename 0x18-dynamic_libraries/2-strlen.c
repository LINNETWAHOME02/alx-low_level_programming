#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string being checked
 *
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	/**
	 *  *s is the pointer dereference
	 *  \0 is the null terminator character
	 *
	 *  *s != '\0' checks if the character being pointed
	 *    by is not the null terminator and if this condition
	 *    is satisfied then the loop continues since this means
	 *    ther are more characters.
	 */
	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
