#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabets in lowercase
 * Return: 0 (Code success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
