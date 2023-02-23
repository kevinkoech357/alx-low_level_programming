#include "main.h"

/**
 * print_numbers - fxn that prints numbers from 0-9
 *
 * Return: Always void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
