#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints any type of argument based on a format string
 * @format: List of types of arguments (c, i, f, s)
 *
 * Description: Prints a comma between values, handles NULL strings
 * and ends with a newline. Allowed types:
 * - 'c' for char
 * - 'i' for int
 * - 'f' for float (double in va_arg)
 * - 's' for string
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
		{
			str = va_arg(args, char *);
			if (!str || str[0] == '\0')
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		}
		default:
			i++;
			continue;
		}

		separator = ", ";
		i++;

	}
	va_end(args);
	printf("\n");
}