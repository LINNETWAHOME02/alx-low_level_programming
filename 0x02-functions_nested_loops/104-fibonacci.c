#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fibonacci;
	int count;

	printf("%lu, %lu", fib1, fib2);
	for (count = 3; count <= 98; count++)
	{
		fibonacci = fib1 + fib2;
		printf(", %lu", fibonacci);
		fib1 = fib2;
		fib2 = fibonacci;
	}
	printf("\n");
	return (0);
}
