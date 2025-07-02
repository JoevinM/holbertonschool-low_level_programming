#include "main.h"
#include <stdio.h>

/**
 * factorial - Return the factorial of a given number.
 *
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of n.
 *         If n is lower than 0, returns -1 to indicate an error.
 *         Factorial of 0 is 1.
 *
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}