#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to apply to each element
 *
 * Description: This function iterates over an array and applies the
 * function pointed to by @action on each element. It does nothing
 * if @array or @action is NULL.
 *
 * Return: Nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
			size_t i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
