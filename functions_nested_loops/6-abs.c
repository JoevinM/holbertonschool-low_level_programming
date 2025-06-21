#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @x: integer value to compute.
 *
 * Return: compute_value
 */

int _abs(int x)

{
	if (x < 0)
		x = x * -1;

	return (x);
}
