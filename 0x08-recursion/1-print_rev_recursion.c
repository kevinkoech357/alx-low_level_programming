#include "main.h"

/**
 * _print_rev_recursion - fxn that prints a string
 * in reverse
 *
 * @s: string involved
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
