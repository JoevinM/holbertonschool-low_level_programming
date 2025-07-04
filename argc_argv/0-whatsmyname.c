#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Description: This program prints the name of the executable (argv[0]).
 * It then decrements argc by 1 (although the result is unused).
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	argc--;
	return (0);
}