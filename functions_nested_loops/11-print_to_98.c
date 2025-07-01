#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * separated by commas and spaces.
 * @n: The starting integerr.
 */

void print_to_98(int n)
{
	int i = n, valeur_abs, centaine, dizaine, unite;

	while (1)
	{
		valeur_abs = (i < 0) ? -i : i;
		if (i < 0)
			_putchar('-');
		centaine = valeur_abs / 100;
		dizaine = (valeur_abs / 10) % 10;
		unite = valeur_abs % 10;
		if (centaine > 0)
			_putchar('0' + centaine);
		if (valeur_abs >= 10)
			_putchar('0' + dizaine);
		_putchar('0' + unite);
		if (i == 98)
			break;
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			i++;
		else
			i--;
	}
	_putchar('\n');
}
