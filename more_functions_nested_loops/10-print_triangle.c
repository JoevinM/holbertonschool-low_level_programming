#include "main.h"
#include <stdio.h>

/**
 * print_triangle - draws a triangle on terminal.
 * @size: is the size of the triangle.
 */

void print_triangle(int size)

{
	int i;
	int j;
	int boby;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (boby = 0; boby < j + 1; boby++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar ('\n');
}
