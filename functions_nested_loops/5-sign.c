#include "main.h"
#include <stdio.h>

/**
 *print_sign - Prints the sign of a number.
 *
 *Description: This function determines the sign of the integer `n`.
 *              It prints '+' if `n` is greater than zero, '0' if `n`
 *              is zero, and '-' if `n` is less than zero.
 *
 *@n: integer to be checked.
 *
 *Return: 1 if `n` is greater than zero,
 *         0 if `n` is zero,
 *        -1 if `n` is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
