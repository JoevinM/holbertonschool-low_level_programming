#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix (treated as a 1D array).
 * @size: The size of the matrix (number of rows and columns).
 */


void print_diagsums(int *a, int size)
{
	int i;
	int somme1 = 0;
	int somme2 = 0;

	for (i = 0; i < size; i++)
	{
		somme1 += a[i * size + i];
		somme2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", somme1, somme2);
}
