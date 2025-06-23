#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws straight line in the terminal.
 *
 * @n: Number of times the character '_' should be print.
 *
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
