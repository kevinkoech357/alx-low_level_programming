# include <stdio.h>

/**
 * main - Entry point
 * prints alphabet
 * in reverse order
 * Return: Always 0 (success)
 */

int main(void)
{
	char revalpha = 'z';
		while (revalpha >= 'a')
		{
			putchar(revalpha);
			revalpha--;
		}
	putchar('\n');
	return (0);
}
