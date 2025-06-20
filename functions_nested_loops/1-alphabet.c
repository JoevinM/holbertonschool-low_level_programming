#include "main.h"
#include <stdio.h>

/**
 * print_alphabet -Entry point of the program
 *
 *This program prints the alphabet character in lowercase,
 *and finish by a new line.
 */

void print_alphabet(void)
{
char c = 0;
for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
_putchar('\n');
}
