#include "main.h"
#include <stdio.h>

/**
 * *_strcpy  - Copies the string pointed to by src,
 * including the terminating null byt (\0),
 * to the buffer pointed to by dest .
 * 
 * @dest: Pointer to the destination buffer where the content is to be copied
 * @src: Pointer to the source string to copy.
 */

char *_strcpy(char *dest, char *src)
{
	int compteur = 0;

	while (src[compteur] != '\0')
	{
		 dest[compteur] = src[compteur];
		 compteur++;
	}
	dest[compteur] = '\0';
	return (dest);
}
