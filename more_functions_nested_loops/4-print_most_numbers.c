#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4,
 * followed by a new line.
 *
 *
 *
 */

void print_most_numbers(void)

{
int most;

for (most = 48; most <= 57; most++)
{
	if (most != 50 && most != 52)
	_putchar(most);
}
_putchar('\n');
}
