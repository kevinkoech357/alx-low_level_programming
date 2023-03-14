#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to the new string
 *
 * or NULL if it fails
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len;

	i = j = len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] && s2[i]; i++)
	{
		len++;
	}

	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		s3[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		s3[j++] = s2[i];
	}

	return (s3);
}
