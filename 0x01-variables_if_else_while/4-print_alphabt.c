#include <stdio.h>
/**
 * main - Print lowercse then newline
 * Return: 0 (Code success)
 */
int main(void)
{
	char lower;

	lower = 97;
	while (lower <= 122)
	{
		if (lower == 101 && lower == 113)
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
