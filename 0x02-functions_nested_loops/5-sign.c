#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: Number to be checked
 * Return: 1 if greater than zero or 0 if zero or -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
