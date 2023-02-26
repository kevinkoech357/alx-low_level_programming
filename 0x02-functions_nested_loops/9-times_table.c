#include "main.h"

/**
 * times_table - prints the 9 multiplication table
 *
 *Return: Always void
 */

void times_table(void)
{
	int i;
	int j;
	int ans;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ans = j * i;
			if (j == 0)
			{
				_putchar(ans + '0');
			}
			if (ans < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else if (ans >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
