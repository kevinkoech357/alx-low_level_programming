#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	
	return (0);
}
