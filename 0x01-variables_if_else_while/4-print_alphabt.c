#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print lowercse then newline
 * Return: 0 (Code success)
 */
int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z' && lower != 'e' && lower != 'q')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
