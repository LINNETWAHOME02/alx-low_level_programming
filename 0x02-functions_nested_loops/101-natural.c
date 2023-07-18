#include <stdio.h>

/**
 * main - Sum of multiples 3 and 5 below and excluding 1024
 * Return: 0 (Code success)
 */
int main(void)
{
	int num1, num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 1024)
	{
		if ((num1 % 3 == 0) || (num1 % 5 == 0))
		{
			num2 += num1;
		}
		num1++;
	}
	printf("%d\n", num2);
	return (0);
}
