#include <stdio.h>
/**
 * main - Print number followed by new line
 * Return: 0 (Code success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);
}
