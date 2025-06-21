#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of an integer.
 *
 * @y: The integer.
 *
 * Return: x the last digit.
 *
 */

int print_last_digit(int y)

{
int x = y % 10;
	if (x < 0)
		x = x * -1;
	_putchar('0' + x);
	return (x);
}
