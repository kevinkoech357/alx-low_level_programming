#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void _puts(char *s)
{
	int index;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}

