#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Description: This program prints all arguments it receives,
 * including the program name (argv[0]). Each argument is printed
 * on a new line.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}
