#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Description: function that creates a file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
		while (text_content[len])
			len++;

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content)
	{
		wr = write(op, text_content, len);
		if (wr == -1 || wr != len)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
