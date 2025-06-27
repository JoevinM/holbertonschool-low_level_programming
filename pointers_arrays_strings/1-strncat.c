#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n char from src to the end of dest.
 * @dest: Destination string to wich src will be appended.
 * @src: Source string to append from.
 * @n: the maximum number of char to append from src
 * Return: Apointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int compteurDestination = 0;
	int compteurSource = 0;

	while (dest[compteurDestination] != '\0')
	{
		compteurDestination++;
	}
	while (compteurSource <= (n - 1) && src[compteurSource] != '\0')
	{
		dest[compteurDestination] = src[compteurSource];
		compteurDestination++;
		compteurSource++;
	}
	dest[compteurDestination] = '\0';



	return (dest);
}
