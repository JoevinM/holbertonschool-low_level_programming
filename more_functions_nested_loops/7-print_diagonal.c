#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on terminal.
 * @n: number of times the character '\' is print with a return line.
 *
 *
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}
