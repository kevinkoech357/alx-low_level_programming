#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - entry point
*
* @args: command line argument
*
* @argv: array of command characters
*
* Return: int value based on operation chosen
*
*/

int main(int args, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	num1 = num2 = result = 0;

	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
