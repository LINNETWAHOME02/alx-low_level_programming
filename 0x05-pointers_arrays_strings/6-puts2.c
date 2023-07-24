#include "main.h"
/**
 * puts2 - This function prints every other character of a string,
 *  starting with the first character, followed by a new line
 *
 * @str: input
 *
 * Return: printed characeter of string
 */
void puts2(char *str)
{
	int var1 = 0;
	int var2 = 0;
	char *ptr = str;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
		var1++;
	}
	var2 = var1 - 1;
	for (i = 0 ; i <= var2 ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
