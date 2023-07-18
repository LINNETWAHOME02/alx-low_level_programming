#include <stdio.h>

/**
 * main - First 50 fibonacci numbers,
 *  starting with 1 and 2, followed by a new line
 *
 *  Return: nothing
 */
int main(void)
{
	int a;
	long b, c;

	a = 0;
	b = 1;
	c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %ld", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
