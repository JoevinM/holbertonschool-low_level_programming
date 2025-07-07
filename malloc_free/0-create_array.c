#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if size is 0
 * or memory allocation fails
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
