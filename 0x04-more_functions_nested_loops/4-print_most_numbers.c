#include "main.h"

/**
 * print_most_numbers - fxn that prints numbers from 0-9
 * except 2 and 4
 *
 * Return: Always void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if ((num == 2) || (num == 4))
			continue;
	_putchar('0' + num);
	}
	_putchar('\n');
}

