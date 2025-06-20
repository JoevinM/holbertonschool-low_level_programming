#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -Entry point of the program
 *
 *This program prints the alphabet character in lowercase x10,
 *and finish by a new line.
 */

void print_alphabet_x10(void)
{
	char c = 0;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	i++;
	}
}
