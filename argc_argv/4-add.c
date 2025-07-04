#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds only positive integer arguments passed from the command line.
 * @argc: Number of command-line arguments.
 * @argv: Array of argument strings.
 *
 * Description:
 * This program takes command-line arguments, checks that each one is made
 * of digits only (0–9), converts them to integers using atoi, and adds them.
 * If any argument contains a non-digit character, the program prints "Error"
 * and returns 1.
 *
 * Return: 0 on success, 1 on invalid input.
 */

int main(int argc, char *argv[])
{
	int i;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int j = 0;

		for (; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(num);
	}
	printf("%d\n", somme);
	return (0);
}
