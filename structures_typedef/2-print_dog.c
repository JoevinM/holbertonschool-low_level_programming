#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of a struct dog
 * @d: pointer to the struct dog to print.
 *
 * Description: This function prints the name, age, and owner
 * of a dog. If any of the fields are NULL, it prints "(nil)"
 * instead. If the age is less than 0, it prints "Age: (nil)".
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
