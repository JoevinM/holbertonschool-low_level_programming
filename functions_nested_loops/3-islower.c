#include "main.h"
#include <stdio.h>

/**
 * _islower - Check if the character is a letter lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
