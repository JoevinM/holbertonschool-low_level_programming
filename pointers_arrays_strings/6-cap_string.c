#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string.
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
	int compteur1 = 0;
	int compteur2 = 0;
	char separateurs[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	s[0] -= 32;

	while (s[compteur1] != '\0')
	{
		for (compteur2 = 0; separateurs[compteur2] != '\0'; compteur2++)
		{
			if (s[compteur1] == separateurs[compteur2] && (s[compteur1 + 1] >= 'a' && s[compteur1 + 1] <= 'z'))
			{
				s[compteur1 + 1] -= 32;
			}
		}
	compteur1++;
	}
	return (s);
}
