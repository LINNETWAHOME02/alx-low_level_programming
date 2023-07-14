#include <stdio.h>
/**
 * main - Print numbers in  hexadecimal form
 * Return: 0 (Code success)
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	num = 97;
	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
