#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 *
 *@n: number of \ to be drawn
 *
 * Return: Always void
 */

void print_diagonal(int n)
{
	int i;
	int em;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (em = 0; em < i; em++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

