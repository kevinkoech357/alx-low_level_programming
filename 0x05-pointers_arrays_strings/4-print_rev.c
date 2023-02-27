#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: pointer to string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int ch = 0;

	while (s[ch])
		ch++;

	while (ch--)
	{
		_putchar(s[ch]);
	}

	_putchar('\n');
}

