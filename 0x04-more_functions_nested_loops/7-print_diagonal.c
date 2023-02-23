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
		for (i = 1; i <= n; i++)
		{
			for (em = 0; em < 1; em++)
			{
				_putchar(' ');
			}
			_putchar(92); /*ascii value of \ */
			_putchar('\n');
		}
	}
}

