#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Description: This program prints the number of arguments passed to it,
 * excluding the program name itself (i.e., argc - 1).
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
