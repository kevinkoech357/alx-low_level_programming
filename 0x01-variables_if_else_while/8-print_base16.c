#include <stdio.h>

/**
 * main - Entry point
 * prints base16 numbers
 * in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int base16;

	for (base16 = 0; base16 < 10; base16++)
		putchar(base16 + '0');

	for (base16 = 0; base16 < 6; base16++)
		putchar(base16 + 'a');
	putchar('\n');
	return (0);
}
