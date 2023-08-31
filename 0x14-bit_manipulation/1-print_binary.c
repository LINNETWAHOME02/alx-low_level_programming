#include "main.h"
/**
 * print_binary - This function prints binary form of a number
 * @n: Number
 *
 * Return: 0 (void return-type)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
