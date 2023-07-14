#include <stdio.h>
/**
 * main - Print lowercase alphabets in reverse
 * Return: 0 (Code success)
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
