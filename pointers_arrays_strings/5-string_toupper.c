#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase of a string to uppercase.
 * @s: Pointer to the string to modify.
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *s)
{
	int compteur = 0;

	while (s[compteur] != '\0')
	{
		if (s[compteur] >= 'a' && s[compteur] <= 'z')
		{
			s[compteur] -= 32;
		}
		compteur++;
	}
	return (s);
}
