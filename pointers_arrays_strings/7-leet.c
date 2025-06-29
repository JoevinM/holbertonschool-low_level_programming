#include "main.h"
#include <stdio.h>

/**
 * *leet - A function that encodes a string into 1337 LEET cryptography.
 * @s: Pointer to the string.
 * Return: Pointer to the modified string.
 */

char *leet(char *s)
{
	int compteur1 = 0;
	int compteur2;
	char lettre[] = "aAeEoOtTlL";
	char chiffre[] = "4433007711";

	while (s[compteur1] != '\0')
	{
		for (compteur2 = 0; lettre[compteur2] != '\0'; compteur2++)
		{
		if (s[compteur1] == lettre[compteur2])
		{
			s[compteur1] = chiffre[compteur2];
			break;
		}
		}
		compteur1++;
	}
	return (s);
}
