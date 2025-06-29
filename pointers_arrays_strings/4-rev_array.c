#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: The array of integers to reverse.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)

{
	int debut = 0;
	int fin = n - 1;
	int temp;

	while (debut < fin)
	{
		temp = a[debut];
		a[debut] = a[fin];
		a[fin] = temp;
		debut++;
		fin--;
	}
}
