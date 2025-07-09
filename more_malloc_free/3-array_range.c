#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The starting integer value
 * @max: The ending integer value
 *
 * Return: Pointer to the newly allocated array containing all integers
 *         from min to max (inclusive), or NULL on failure or if min > max.
 *
 * Description: This function allocates memory for an array of integers,
 * initializes it with sequential values from min up to max, and returns
 * a pointer to that array. If min > max or if memory allocation fails,
 * it returns NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);

}
