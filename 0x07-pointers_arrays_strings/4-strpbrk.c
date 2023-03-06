#include "main.h"

/**
 * *_strpbrk - fxn that searches a string for any set of bytes
 *
 * @s: string to be searched
 *
 * @accept: test string
 *
 * Return: NULL if no byte is found
 * and pointer to matching byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
