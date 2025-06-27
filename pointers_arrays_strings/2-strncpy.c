#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string up to n characters
 * @dest: The destination where the string will be copied.
 * @src: Source string to copy.
 * @n: the maximum number of char to copy from src.
 * Return: Apointer to the destination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int compteurDestination = 0;
	int compteurSource = 0;

	while (compteurSource <= (n - 1) && src[compteurSource] != '\0')
	{
		dest[compteurDestination] = src[compteurSource];
		compteurDestination++;
		compteurSource++;
	}
	while (compteurSource < n)
	{
		dest[compteurDestination] = '\0';
		compteurDestination++;
		compteurSource++;
	}

	return (dest);
}
