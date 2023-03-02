#include "main.h"

/**
 * *string_toupper - converts string character to uppercase
 *
 * @s: string involved
 *
 * Return: converted string
 *
 */

char *string_toupper(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] = s[len] - 32;
		len++;
	}

	return (s);
}



