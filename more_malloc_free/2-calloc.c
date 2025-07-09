#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory.
 *         NULL if nmemb or size is 0, or if malloc fails.
 *
 * Description: This function behaves like calloc. It allocates memory
 * for an array of nmemb elements of size bytes each. All bytes in the
 * allocated memory are set to zero.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0;

	return (ptr);

}