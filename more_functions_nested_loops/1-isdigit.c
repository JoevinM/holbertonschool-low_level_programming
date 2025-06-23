#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if @c is a letter or a digit (0 trough 9) .
 *
 * @c: The value to check.
 *
 *Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	return (1);
else
	return (0);
}
