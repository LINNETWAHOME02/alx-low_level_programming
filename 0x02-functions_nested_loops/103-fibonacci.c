#include <stdio.h>

/**
 * main - Sum of the even-valued terms in Fibonacci series,
 *not exceeding 4000000  followed by a new line
 *  Return: 0 (Code success)
 */
int main(void)
{
	int a;
	long b, c, sum;

	a = 0;
	b = 1;
	c = 2;
	sum = c;

	while (c + b < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			sum += c;
		b = c - b;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
