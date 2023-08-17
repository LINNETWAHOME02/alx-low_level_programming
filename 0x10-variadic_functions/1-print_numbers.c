#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - This function prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Count of integers to be passed to the function
 * @...: Arguments or variables passed to the function
 *
 * Return: Nothing (void return_type)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int num, iterator;

	if (n == 0)
		exit(98);

	va_start(num_list, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		num = va_arg(num_list, unsigned int);
		printf("%d", num);

		if (separator != NULL && iterator < n - 1)
			printf("%s", separator);
	}
	va_end(num_list);
	printf("\n");
}
