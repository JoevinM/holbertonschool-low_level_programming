#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the calculator program.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 on success, or exits with error code:
 *         98 if wrong number of arguments,
 *         99 if operator is invalid,
 *         100 if trying to divide/modulo by 0.
 */

int main(int argc, char *argv[])
{
	int (*operations)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operations = get_op_func(argv[2]);
	if (operations == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operations(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
