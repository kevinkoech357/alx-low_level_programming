#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonnacci nos
 * starting with 1 and 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int sum;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
	}
	if (count == 49)
	{
		printf("\n");
	}
	return (0);
}

