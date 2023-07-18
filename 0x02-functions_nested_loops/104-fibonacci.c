#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long int a = 0, b = 1, c, i;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
}
