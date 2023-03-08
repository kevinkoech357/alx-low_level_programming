#include "main.h"

/**
 * _puts_recursion - fxn that prints a string
 * followed by a new line
 *
 * @s: string involved
 *
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	/*base */

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	s = s + 1;
	_puts_recursion(s);
}
