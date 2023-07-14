#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print lowercase then uppercase
 * Return: 0 (Code success)
 */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	/* Lower case */
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	/* Upper case */
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
