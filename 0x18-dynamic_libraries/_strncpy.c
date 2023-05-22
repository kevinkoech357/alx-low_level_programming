#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of characters to be copied
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;

	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
