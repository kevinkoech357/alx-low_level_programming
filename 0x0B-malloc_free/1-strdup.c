#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a null-terminated byte string
 *
 * which is a duplicate of the string pointed to by str
 *
 * @str: pointer to string involved
 *
 * Return: pointer to the new duplicated string
 *
 * or NULL if memory is not
 *
 * available
 */

char *_strdup(char *str)
{
	char *string;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	string = malloc(length * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	string = strdup(str);

	return (string);
}
