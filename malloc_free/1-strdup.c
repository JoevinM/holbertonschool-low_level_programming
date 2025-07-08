#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 *
 * Description:
 * This function allocates memory using malloc, then copies the content
 * of the string `str` into the newly allocated space. The caller is
 * responsible for freeing the returned pointer using free().
 */

char *_strdup(char *str)
{
	char *cpy;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	cpy = malloc(sizeof(char) * (i + 1));
	i = 0;

	if (cpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		cpy[j] = str[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
