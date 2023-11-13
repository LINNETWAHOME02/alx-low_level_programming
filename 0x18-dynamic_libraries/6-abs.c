#include "main.h"

/**
 * _abs - Absolute value of an integer
 *@c: number to be computed
 * Return: absolute value of integer or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absolute_val;

		absolute_val = c * -1;
		return (absolute_val);
	}
	return (c);
}
