#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string
 *
 * @s: String input
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}

	return (counter);
}
