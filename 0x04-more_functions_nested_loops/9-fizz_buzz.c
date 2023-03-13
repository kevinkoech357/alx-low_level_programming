#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("%s", "FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");

	return (0);
}
