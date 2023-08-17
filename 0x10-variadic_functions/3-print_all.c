#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - This function prints anything
 * @format:  List of types of arguments passed to the function
 * @...: variable amount of arguments that can be passed
 *
 * Return: Nothing (void return-type)
 */

void print_all(const char * const format, ...)
{
	va_list any_list;
	int i = 0;
        char *str;
        char *separator = "";

	va_start(any_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(any_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(any_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(any_list, double));
					break;
				case 's':
					str = va_arg(any_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	va_end(any_list);
	printf("\n");
}
