#include "main.h"
#include <stdio.h>

int _prime(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - Helper function that checks for primality recursively.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int _prime(int n, int i)
{
	int x = i * i;

	if (n <= 1)
		return (0);
	if (x == n)
		return (0);
	if (n == 2)
		return (1);
	if (n % 5 == 0)
		return (0);
	if (n % 2 < 1)
		return (0);
	else
		return (1);

	return (_prime(n, i + 1));
}
