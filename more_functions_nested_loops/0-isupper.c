#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the letter is a uppercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the letter is uppercase character and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
