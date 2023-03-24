#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* @argc: command line arguments
*
* @argv: character command array
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int bytes, i;
	char *array;

	i = 0;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}

	return (0);
}

