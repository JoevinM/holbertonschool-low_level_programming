#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of a string, followed by a new line.
 * If string has If the number of characters is odd,
 * the function should print the last n characters of the string.
 *
 * @str: pointer to string in a array.
 *
 */

void puts_half(char *str)
{
	int compteur = 0;
	int moitier = 0;

	for (; str[compteur] != '\0'; compteur++)
	{
	}
	if (compteur % 2 == 0)
		moitier = compteur / 2;
	else
		moitier = (compteur + 1) / 2;
	for (; str[moitier] != '\0'; moitier++)
	{
	_putchar(str[moitier]);
	}

	_putchar('\n');
}
