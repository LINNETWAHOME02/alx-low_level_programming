#include "main.h"
/**
 * print_binary - This function prints binary form of a number
 * @n: Number
 *
 * Return: 0 (void return-type)
 */
void print_binary(unsigned long int n)
{
	unsigned long int converter;
	int val = 0;

	if (n == 0)
		_putchar('0');
	converter = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (converter > 0)
	{
		if (n & converter)
		{
			_putchar('1');
			val = 1;
		} else if (val)
		{
			_putchar('0');
		}
		converter >>= 1;
	}
}
