#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: name of the dog's owner (string)
 *
 * Description: A structure that stores information about a dog,
 * including its name, age, and the name of its owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
