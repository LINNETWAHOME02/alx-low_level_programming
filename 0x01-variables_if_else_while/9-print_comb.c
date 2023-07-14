#include <stdio.h>
/**
 * main - Print all possible combinations
 * Return: 0 (Code success)
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
		{
			continue;
		}
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
