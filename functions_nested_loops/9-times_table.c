#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, strating with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int multiply;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiply = j * i;
			if (multiply >= 10)
			{
				_putchar('0' + (multiply / 10));
				_putchar('0' + (multiply % 10));
			}
			else
			{
				if (j == 0)
					_putchar('0' + multiply);
				else
				{
				_putchar(' ');
				_putchar('0' + multiply);
				}
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

