#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the first occurence of a character in a string.
 * @s: Pointer to the null-terminated string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurence of the character c in the string s,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
		return (&s[i]);
	i++;
	}
	return ('\0');
}
