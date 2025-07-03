#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Return the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if none exists.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Helper function to find the natural square root using recursion.
 * @n: The number to calculate the square root of.
 * @i: The current number to test as a potential square root.
 *
 * Return: The natural square root of n, or -1 if none exists.
 */

int _sqrt(int n, int i)
{
	int x = i * i;

	if (x < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (x == n)
		return (i);
	return (_sqrt(n, i + 1));
}
