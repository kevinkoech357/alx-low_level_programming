#include <stdio.h>

/**
 * main - entry point
 * prints different combination of 2 digits
 * between 0-99
 * returns 0 if successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		if (i != j)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
