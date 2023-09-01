#include "main.h"
/**
 * print_binary - This function prints binary form of a number
 * @n: Number
 *
 * Return: 0 (void return-type)
 */
void print_binary(unsigned long int n)
{
	int counter, tracker = 0;
	unsigned long int current_num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (counter = 63; counter >= 0; counter--)
	{
		current_num = n >> counter;

		if (current_num & 1)
		{
			_putchar('1');
			tracker++;
		}
		else if (tracker)
			_putchar('0');
	}
	if (!tracker)
		_putchar('0');
}
