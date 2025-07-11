#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The main string to be searched.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring in @haystack
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
			return (&haystack[i]);

		}
	}
	return (NULL);
}
