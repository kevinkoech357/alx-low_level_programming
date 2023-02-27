#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to string
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int tempo;
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	k = 0;
	j = i - 1;

	while (k < j)
	{
		tempo = s[k];
		s[k] = s[j];
		s[j] = tempo;

		k++;
		j--;
	}
}
