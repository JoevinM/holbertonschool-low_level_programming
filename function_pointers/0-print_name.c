#include "function_pointers.h"
#include "stdio.h"

/**
 * print_name - Calls a function to print a name.
 * @name: The name to be printed.
 * @f: A pointer to the function that prints the name.
 *
 * Description: This function checks if the provided name and function
 * pointer are not NULL.
 * If both are valid, it calls the function `f`
 * and passes `name` to it for printing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}