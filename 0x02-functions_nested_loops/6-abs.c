#include "main.h"
/**
 * _abs - Absolute value of an integer
 * @n: The number to be computed
 * Return: Absolute value of number or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int absolute_val;

		absolute_val = n * -1;
		return (absolute_val);
	}
	return (n);
}
