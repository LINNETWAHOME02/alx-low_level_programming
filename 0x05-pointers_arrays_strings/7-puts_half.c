#include "main.h"
/**
 * puts_half - This function prints the second half of the string
 *
 * if odd len, n(var1) = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 * Return: Second half of the string
 */
void puts_half(char *str)
{
	int counter, var1, var2;

	var2 = 0;

	for (counter = 0; str[counter] != '\0'; counter++)
		var2++;

	var1 = (var2 / 2);

	if ((var2 % 2) == 1)
		var1 = ((var2 + 1) / 2);

	for (counter = var1; str[counter] != '\0'; counter++)
		_putchar(str[counter]);
	_putchar('\n');
}
