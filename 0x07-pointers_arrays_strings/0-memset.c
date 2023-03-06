#include "main.h"

/**
 * *_memset - fxn that fills memory with a constant byte
 *
 * @s: pointer to memory area
 *
 * @b: constant byte
 *
 * @n: number of bytes
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
