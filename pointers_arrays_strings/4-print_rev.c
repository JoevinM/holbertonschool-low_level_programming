include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string, in reversed, followed by a new line.
 *
 * @s: pointer to string in a array.
 *
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	i--;
	for (; i >=  0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
