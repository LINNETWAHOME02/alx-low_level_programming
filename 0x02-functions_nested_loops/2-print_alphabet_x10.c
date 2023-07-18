#include "main.h"
/**
 * print_alphabet_x10 - Print 10x the alphabet in lowercase
 * followed by a new line
 *
 * Return:void (Code success)
 */
void print_alphabet_x10(void)
{
	char my_char;
	int counter;

	counter = 0;
	while (counter < 10)
	{
		for (my_char = 'a'; my_char <= 'z'; my_char++)
		{
			_putchar(my_char);
		}
		_putchar('\n');
		counter++;
	}
}
