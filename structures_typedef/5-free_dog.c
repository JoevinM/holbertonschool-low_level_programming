#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog_t structure to be freed
 *
 * Description: This function frees the memory allocated for
 * the name and owner strings of the dog structure, and then
 * frees the dog structure itself. If the pointer passed is NULL,
 * the function does nothing.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
