#include <stdio.h>
/**
 * main - Print single digit numbers
 * Return: 0 (Code success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
