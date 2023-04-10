#include "main.h"

/**
* read_textfile - function definition
*
* Description: reads a text file and prints to STDOUT
*
* @filename: pointer to file
*
* @letters: number of letters to be read and printed
*
* Return: 0 if file can't be opened
* or filename is null
* or write fails
* and 1 if successful
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);

	/* open the file in read only mode */
	op = open(filename, O_RDONLY);

	/* allocate size to buffer */
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	/* read and write */
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || wr == -1 || rd == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}

