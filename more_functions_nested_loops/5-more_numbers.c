#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14,
 * followed by a new lines.
 */

void more_numbers(void)
{
int more;
int x10;

while (x10 < 10)
{
	for (more = 0; more <= 14; more++)
	{
		if (more >= 10)
			_putchar('0' + (more / 10));
		_putchar('0' + (more % 10));
	}
	_putchar('\n');
	x10++;
}
}
