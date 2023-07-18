#include "main.h"
/**
 * print_alphabet - Print alphabets in lowercase followed by new line
 * Return:void (Code success)
 */
void print_alphabet(void)
{
	char my_char;

	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		_putchar(my_char);
	}
	_putchar('\n');
}
