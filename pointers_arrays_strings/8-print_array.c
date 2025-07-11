#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to print.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
