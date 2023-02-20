#include <stdio.h>

/**
 * main - Entry point
 * prints combo of single digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int combo;

	for (combo = 0; combo < 10; combo++)
	{
		putchar(combo % 10 + '0');

		if (combo != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
