#include "main.h"

/**
* create_file - creates a file
*
* @filename: pointer to the filename to be created
*
* @text_content - pointer to string to write to file
*
* Return: 1 on sucess and -1 if it fails
*
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, length;

	length = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	while (text_content != NULL)
	{
		wr = write(op, text_content, length);
		length++;
	}

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}

