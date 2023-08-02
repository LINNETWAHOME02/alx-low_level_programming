#include "main.h"
/**
 * _print_rev_recursion - This function will print a string in reverse
 *
 * @s: String input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
