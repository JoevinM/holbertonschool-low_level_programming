#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return the lenght of a string.
 *
 * @s: pointer to variable s.
 * Return: len value.
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
		len++;
	return (len);
}
