#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	
	return (0);
}
