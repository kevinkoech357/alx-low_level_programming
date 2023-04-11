#include "main.h"

/**
* append_text_to_file - appends text to file
*
* @filename: pointer to the file
*
* @text_content:  pointer to contents to be appended
*
* Return: 1 if success and -1 if not
*
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
		{
			wr = write(op, text_content, length);

			if (wr == -1)
			{
				close(op);
				return (-1);
			}
		}
	}

	if (close(op) == -1)
	{
		return (-1);
	}

	return (1);
}

