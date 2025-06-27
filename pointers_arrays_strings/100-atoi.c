#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string convert.
 * Return: The integer converted from the string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int a = 0;
	int ch = 0;
	int d = 0;

	while (s[ch] != '\0')
	{
		if (s[ch] == '-')
		{
			sign *= -1;
		}
		else if (s[ch] >= '0' && s[ch] <= '9')
		{
			d = 1;
			while (s[ch] >= '0' && s[ch] <= '9')
			{
				a = a * 10 + (s[ch] - '0');
				ch++;
			}
			break;
		}
		ch++;
	}

	if (d == 0)
		return (0);

	return (a * sign);
}
