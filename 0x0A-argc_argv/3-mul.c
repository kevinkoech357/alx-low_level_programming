#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: multiplies two numbers
 *
 * @argc: number of command line arguments
 *
 * @argv: array of character commands
 *
 * Return: 1 if program doesnt receive
 * 2 command line arguments
 * and 0 if it does
 *
 */

int main(int argc, char *argv[])
{
	int a, b;
	int ans;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	ans = a * b;

	printf("%d\n", ans);

	return (0);
}
