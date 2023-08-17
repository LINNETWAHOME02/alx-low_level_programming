#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This function calculates the sum of all its parameters
 * @n: Count of all arguments passed
 * @...: elipsis that rep variable arguments
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var_list;
	unsigned int iterator;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(var_list, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		sum += va_arg(var_list, unsigned int);
	}

	va_end(var_list);

	return (sum);
}
