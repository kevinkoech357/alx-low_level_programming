#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
			while (j < 15)
			{
				if (j >= 10)
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
				j++;
			}
	_putchar('\n');
	i++;
	}
}
