#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - Concatenates two strings into a newly allocated memory space
 * @s1: The first string to concatenate (can be NULL)
 * @s2: The second string to concatenate (can be NULL)
 *
 * Description: This function creates a new string which is the result of the
 * concatenation of s1 followed by s2. If either s1 or s2 is NULL, it is
 * treated as an empty string. The function allocates memory dynamically using
 * malloc, and returns a pointer to the new string.
 *
 * Return: A pointer to the newly allocated string containing the contents
 * of s1 followed by s2 and null-terminated. Returns NULL if allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *cpy;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

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
