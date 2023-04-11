#include "main.h"

/**
* create_file - creates a file
*
* @filename: pointer to the filename to be created
*
* @text_content: pointer to string to write to file
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

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		wr = write(op, text_content, length);

		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}

	if (op == -1)
		return (-1);

	close(op);

	return (1);
}

