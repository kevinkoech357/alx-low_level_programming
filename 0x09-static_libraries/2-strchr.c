#include "main.h"

/**
 * *_strchr - fxn that locates a character in a string
 *
 * @s: string to be searched
 *
 * @c: character involved
 *
 * Return: NULL if c is no found
 * and pointer to first occurence
 * if c is found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for ( ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
