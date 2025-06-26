#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string followed by a new line.
 *
 * @s: pointer to string in a array.
 *
 */

void rev_string(char *s)

{
	int compteur = 0;
	int debut = 0;
	int fin = 0;
	char temp;

	while (s[compteur] != '\0')
		compteur++;
	fin = compteur - 1;

	while (debut < fin)
	{
		temp = s[fin];
		s[fin] = s[debut];
		s[debut] = temp;
		debut++;
		fin--;
	}
}
