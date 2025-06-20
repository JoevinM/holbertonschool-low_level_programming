#include "main.h"
#include <stdio.h>

/**
 * _islower -Entry point of the program
 *@c is the input for comparison
 *This program checks for lower alphabet character,
 *and finish by a new line.
 *Returns 1 if c is lowercase.
 *Returns 0 itherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
