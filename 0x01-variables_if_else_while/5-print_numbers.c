#include <stdio.h>

/**
 * main - Entry point
 * prints base 10 numbers
 * in ascending order
 * Return: Always 0 (success)
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
		printf("%d", base10);
	putchar('\n');
	return (0);
}
