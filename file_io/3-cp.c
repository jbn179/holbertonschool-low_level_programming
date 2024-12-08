#include "main.h"

void handle_error(const char *message, const char *file, int exit_code);
void close_file(int fd);

/**
 * main - program that copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Description: program that copies the content of a file to another file.
 * Return: 0 on success, or exit code on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file %s", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		handle_error("Error: Can't write to %s", argv[2], 99);
	}

	while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		{
			close_file(fd_from);
			close_file(fd_to);
			handle_error("Error: Can't write to %s", argv[2], 99);
		}
	}

	if (rd == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		handle_error("Error: Can't read from file %s", argv[1], 98);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * close_file - closes a file descriptor and handle potential errors
 * @fd: the file descriptor to close
 * Description: closes a file descriptor and handle potential errors
*/

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * handle_error - prints an error message and exits the program
 * @message: the error message format string
 * @file: the name of the file associated with the error (can be NULL)
 * @exit_code: the exit code to use when terminating the program
 * Description:  prints an error message and exits the program
*/

void handle_error(const char *message, const char *file, int exit_code)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s\n", message);

	exit(exit_code);
}
