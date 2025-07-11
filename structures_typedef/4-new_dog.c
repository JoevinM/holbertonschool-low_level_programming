#include "dog.h"
#include <stdlib.h>


/**
 * *_strcpy  - Copies the string pointed to by src,
 * including the terminating null byt (\0),
 * to the buffer pointed to by dest .
 * @dest: Pointer to the destination buffer
 * where the content is to be copied
 * @src: Pointer to the source string to copy.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int compteur = 0;

	while (src[compteur] != '\0')
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	dest[compteur] = '\0';
	return (dest);
}

/**
 * _strlen - Return the lenght of a string.
 *
 * @s: pointer to variable s.
 * Return: len value.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}


/**
 * new_dog - creates a new dog_t instance with copies of name and owner.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 *
 * Return: pointer to the new dog_t struct, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}

