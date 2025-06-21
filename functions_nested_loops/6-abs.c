#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @x: integer value to compute.
 *
 * Return: compute_value
 */

long _abs(long x)

{
	if (x < 0)
		x = x + (x * -2);
	if (x > 0)
		x = x;
	else
		x = 0;

	return (x);
}
