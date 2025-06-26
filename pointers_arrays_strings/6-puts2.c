#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print a string, 2 by 2 char followed by a new line.
 *
 * @str: pointer to string in a array.
 *
 */

void puts2(char *str)

{
	int compteur = 0;

	for (; str[compteur] != '\0'; compteur++)
	{
		if (compteur % 2 == 0)
			_putchar(str[compteur]);
	}
	_putchar('\n');
}
