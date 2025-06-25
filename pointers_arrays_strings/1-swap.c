#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap values of two integers.
 *
 * @a: pointer to integer a.
 * @b: pointer to integer b
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;
	*a = temp2;
	*b = temp1;
}
