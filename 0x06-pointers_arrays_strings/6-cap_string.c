#include "main.h"

/**
 * *cap_string - capitalize first character
 * in a string
 *
 * @s: string involved
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		while (!(s[len] >= 'a' && s[len] <= 'z'))
			len++;

		if (s[len - 1] == ' ' || s[len - 1] == '\t' ||
				s[len - 1] == '\n' || s[len - 1] == ',' ||
				s[len - 1] == ';' || s[len - 1] == '.' ||
				s[len - 1] == '!' || s[len - 1] == '?' ||
				s[len - 1] == '"' || s[len - 1] == '(' ||
				s[len - 1] == ')' || s[len - 1] == '{' ||
				s[len - 1] == '}' || len == 0)
		{
			s[len] = s[len] - 32;
		}
		len++;
	}
	return (s);
}
