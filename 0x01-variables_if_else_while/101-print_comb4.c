# include <stdio.h>

/**
 * main - Entry point
 * prints posible combo of 3 digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
