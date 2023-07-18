#include "main.h"
/**
 * _abs - Compute absolute value of an integer
 * @n: This is the number to be computed
 * Return: Absolute value of number or 0 otherwise
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
