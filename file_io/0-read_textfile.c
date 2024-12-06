#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Description: reads a text file and prints it to the POSIX standard output
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(op, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		close(op);
		return (0);
	}
	
	free(buffer);
	close(op);

	return (wr);
}
