#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	/**
	 * *str != '\0' checkes if the current character is the
	 * nulll terminator, if this condition is satisfied, then
	 * the loop is executed until the condition is false
	 *
	 * _putchar(*str++) prints the string character by character
	 */
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
