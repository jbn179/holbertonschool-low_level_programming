#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void handle_error(const char *message, const char *file, int exit_code);
void close_file(int fd);
void copy_file(const char *file_from, const char *file_to);

/**
 * main - program that copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, or exit code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		handle_error("Usage: cp file_from file_to\n", NULL, 97);

	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - copies content of one file to another
 * @file_from: source file
 * @file_to: destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		handle_error("Error: Can't write to %s\n", file_to, 99);
	}

	do {
		r = read(fd_from, buffer, sizeof(buffer));
		if (r == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			handle_error("Error: Can't read from file %s\n", file_from, 98);
		}

		if (r > 0)
		{
			w = write(fd_to, buffer, r);
			if (w == -1 || w != r)
			{
				close_file(fd_from);
				close_file(fd_to);
				handle_error("Error: Can't write to %s\n", file_to, 99);
			}
		}
	} while (r > 0);

	close_file(fd_from);
	close_file(fd_to);
}

/**
 * close_file - closes a file descriptor and handle potential errors
 * @fd: the file descriptor to close
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
 */
void handle_error(const char *message, const char *file, int exit_code)
{
	if (file)
		dprintf(STDERR_FILENO, message, file);
	else
		dprintf(STDERR_FILENO, "%s", message);

	exit(exit_code);
}
