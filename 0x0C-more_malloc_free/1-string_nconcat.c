#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: maximum number of bytes of s2 involved
 *
 * Return: pointer to the new string
 *
 * or NULL if it fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len, i;

	len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		s3[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s3[len++] = s2[i];

	s3[len] = '\0';

	return (s3);
}
