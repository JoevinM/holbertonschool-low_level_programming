#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Description: This program expects exactly two arguments. It converts
 * them to integers using atoi and prints their product, followed by a
 * new line. If the number of arguments is not exactly two, it prints
 * "Error" and returns 1.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect
 */

int main(int argc, char *argv[])
{
	int	a;
	int b;
	int c = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = (a * b);
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
