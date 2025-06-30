#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to use for filling.
 * @n: Number of bytes to fill with the value b.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
