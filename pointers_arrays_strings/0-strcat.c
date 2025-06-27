#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: Destination string (will be modified).
 * @src: Source string to append to dest.
 *
 * Return: Apointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int compteurDestination = 0;
	int compteurSource = 0;

	while (dest[compteurDestination] != '\0')
	{
		compteurDestination++;
	}
	while (src[compteurSource] != '\0')
	{
		dest[compteurDestination] = src[compteurSource];
		compteurDestination++;
		compteurSource++;
	}
	dest[compteurDestination] = '\0';



	return (dest);
}
