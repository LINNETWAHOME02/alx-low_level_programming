#include "main.h"
/**
 * print_alphabet - Print alphabets in lowercase followed by new line
 * Return: void (Code success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
