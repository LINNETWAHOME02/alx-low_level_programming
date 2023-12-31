#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Natural numbers from n to 98
 * @n: number from which printing starts
 *Return: 0 (Code success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
	}
}
