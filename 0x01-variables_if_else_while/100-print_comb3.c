#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - All combinations of two digits
 * Return: 0 (Code success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 57 &&  num2 == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
