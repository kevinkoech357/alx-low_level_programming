#include <stdio.h>

/**
 * main - Entry point
 * prints base10 numbers
 * in ascending order
 * usin putchar function
 * Return: Always 0 (success)
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar(base10 % 10 + '0');
	}
	putchar('\n');
	return (0);
}
