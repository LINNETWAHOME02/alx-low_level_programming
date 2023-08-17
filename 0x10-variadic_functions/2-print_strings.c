#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - This function prints strings, followed by a new line
 * @separator: String to be printed between the strings
 * @n: Count of inputs to be passed to the function
 * @...: Variable number of arguments passed to the function
 *
 * Return: Nothing (void return-type)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int iterator;

	va_start(str_list, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		char *str = va_arg(str_list, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (separator != NULL && iterator != n - 1)
			printf("%s", separator);
	}

	va_end(str_list);

	printf("\n");
}
