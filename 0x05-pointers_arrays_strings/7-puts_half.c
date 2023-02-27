#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: pointer to the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int length = 0;
	int num;

	while (str[i++])
	{
		length++;
	}

	if ((length / 2) == 0)
	{
		num = length / 2;
	}

	else
	{
		num = (length + 1) / 2;
	}

	for (i = num; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
