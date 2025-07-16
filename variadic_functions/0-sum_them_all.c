#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 *
 * Description: This function takes a variable number of arguments
 * and returns their sum. If n == 0, it returns 0.
 *
 * Return: The sum of all parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int somme = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
		somme += va_arg(args, int);

	va_end(args);

	return (somme);
}
