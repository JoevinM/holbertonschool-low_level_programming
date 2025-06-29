#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two string.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: The difference between s1 and 2.
 */

int _strcmp(char *s1, char *s2)
{
	int compteur = 0;

	while (s1[compteur] == s2[compteur] && s1[compteur] != '\0')
	{
		compteur++;
	}
	return (s1[compteur] - s2[compteur]);
}
