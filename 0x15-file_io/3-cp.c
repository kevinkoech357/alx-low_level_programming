#include "main.h"

/**
* main - function defintion
*
* Description: copies content of a file to another
*
* @argc: argument count
*
* @argv: array of command characters
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int firstFile, secondFile, size;
	char buffer[1024];
	/* check for no. of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	firstFile = open(argv[1], O_RDONLY, 0);
	if (firstFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	secondFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (secondFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(firstFile, buffer, 1024)) > 0)
	{
		if (write(secondFile, buffer, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(firstFile) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", firstFile), exit(100);
	}
	if (close(secondFile) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", secondFile), exit(100);
	}
	return (0);
}

