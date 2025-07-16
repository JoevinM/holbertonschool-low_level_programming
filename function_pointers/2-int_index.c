#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Description: Iterates through the array and applies the function @cmp
 * to each element. Returns the index of the first element for which
 * cmp does not return 0. Returns -1 if no match is found or if size <= 0.
 *
 * Return: Index of the matching element, or -1 if not found or invalid input
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
