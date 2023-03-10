#include "main.h"

/**
 * _strncat - concatenate two strings with n bytes from src
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of characters to be appended
 *
 * Return: pointer to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';

	return (dest);
}
