#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string, followed by a new line.
 *
 * @str: pointer to string in a array.
 *
 */

void _puts(char *str)
{
	int compteur = 0;

	for (; str[compteur] != '\0'; compteur++)
	{
		_putchar(str[compteur]);
	}
	_putchar('\n');
}
