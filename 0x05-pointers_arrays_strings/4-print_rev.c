#include "main.h"
/**
 * print_rev - Printing string in reverse
 *
 * @s: string
 *
 * Return: 0 (Code success)
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--; /*At this point the string is pointing to \0
	       * therefore move one step back to go back to the
	       * last character of the string which will be the starting point
	       * of the for loop condition below
	*/

	/**
	 * s-- means the string will be printed backwards as the
	 *  tracker, y, is decrementing with every iteraion
	 */
	for (y = x; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
