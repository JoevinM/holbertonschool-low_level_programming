#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the numbers, from 0 to 9, followed by new line.
 *
 * Return:always 0 (success)
 *
 */

void print_numbers(void)

{

int number;

for (number = 48;  number <= 57 ; number++)
	_putchar(number);
_putchar('\n');
}
