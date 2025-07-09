#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using at most n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: Maximum number of bytes to use from s2
 *
 * Return: Pointer to newly allocated memory containing s1 followed by
 * n bytes of s2 and null-terminated. Returns NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n <= j)
		j = n;
	cpy = malloc(sizeof(char) * (i + j + 1));
	if (cpy == NULL)
		return (NULL);

	while (k < i)
	{
		cpy[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		cpy[k + l] = s2[l];
		l++;
	}
	cpy[k + l] = '\0';

	return (cpy);
}
