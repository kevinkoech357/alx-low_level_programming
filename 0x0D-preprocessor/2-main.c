#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints name of file it was compiled from
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
