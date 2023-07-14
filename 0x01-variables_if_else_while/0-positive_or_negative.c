#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print random number
 * Return: 0 (Code success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("is zero\n");
	}
	printf("Value of n is: %d\n", n);
	return (0);
}
