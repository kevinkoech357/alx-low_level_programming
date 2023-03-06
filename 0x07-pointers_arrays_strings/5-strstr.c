#include "main.h"

/**
 * *_strstr - fxn that locates a substring
 *
 * @haystack: string to be searched
 *
 * @needle: string involved
 *
 * Return: pointer to beginning
 * of located substring
 * or NULL if string aint found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = j = 0;
	if (needle[i] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
