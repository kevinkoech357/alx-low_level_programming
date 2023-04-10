#include "main.h"

/**
* append_text_to_file - function definition
*
* Description: appends text to file
*
* @filename: pointer to the file
*
* @text_content - pointer to contents to be appended
*
* Return: 1 if success and -1 if not
*
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length;

	length = 0;

	while (text_content[length] != '\0')
		length++;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (length > 0)
	{
		wr = write(op, text_content, length);

		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}

	close(op);

	return (1);
}
