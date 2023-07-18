#include <stdio.h>

/**
 * main - first 98 Fibonacci numbers, starting
 *  with 1 and 2, followed by a new line
 *
 *  Return: 0 (Code success)
 */
int main(void)
{
	int counter;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
	unsigned long h1, h2;

	for (counter = 0; counter < 92; counter++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	f1_h1 = f1 / 1000000000;
	f2_h1 = f2 / 1000000000;
	f1_h2 = f1 % 1000000000;
	f2_h2 = f2 % 1000000000;
	for (counter = 93; counter < 99; counter++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (counter != 98)
			printf(",");
		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
