#include <stdio.h>
/**
 * main - Print numbers in  hexadecimal form
 * Return: 0 (Code success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
