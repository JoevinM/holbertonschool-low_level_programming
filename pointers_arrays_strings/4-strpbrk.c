#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the byte in @s that matches one
 * of the bytes in @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
