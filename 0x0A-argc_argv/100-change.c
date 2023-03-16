#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints the minimum number of coins
 *
 * to make change for an amount of money
 *
 * @argc: command line arguments
 *
 * @argv: character command array
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num, i , cents;
	int coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num = 0;

	for (i = 0; i < 5; i++)
	{
		coin_count = cents / coins[i];
		num = num + coin_count;
		cents = cents - coin_count * coins[i];
	}
	printf("%d\n", num);
	return (0);
}
