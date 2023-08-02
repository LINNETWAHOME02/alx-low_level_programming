#include "main.h"
/**
 * _puts_recursion - This function prints a string,
 * followed by a new line
 * It works like puts() function would
 *
 * @s: input
 *
 * Return: 0 (Code success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
