#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy from src to dest.
 *
 * Return: A pointer to the destination memory area 'dest'.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
