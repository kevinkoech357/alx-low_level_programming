#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: pointer string to be printed
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int ch;

	ch = 0;
	while (str[ch] != '\0')
	{
		if (ch % 2 == 0)
		{
			_putchar(str[ch]);
		}

		ch++;
	}
	_putchar('\n');
}
