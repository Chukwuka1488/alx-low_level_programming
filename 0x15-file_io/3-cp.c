#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a specified exit code.
 * @message: The error message to print.
 * @exit_code: The exit code.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * open_file - Opens a file with the specified flags and mode.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The mode to use when opening the file.
 *
 * Return: The file descriptor of the opened file.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd;

	fd = open(filename, flags, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s file %s\n",
				(flags & O_CREAT) ? "write to" : "read from", filename);
		exit((flags & O_CREAT) ? 99 : 98);
	}

	return (fd);
}

/**
 * copy_file - Copies the content from one file to another file.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to, const char *file_from, const char *file_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the program command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *file_from, *file_to;

	/* Check for the correct number of arguments */
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	/* Open the source and destination files */
	file_from = argv[1];
	fd_from = open_file(file_from, O_RDONLY, 0);

	file_to = argv[2];
	fd_to = open_file(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Copy the content from the source file to the destination file */
	copy_file(fd_from, fd_to, file_from, file_to);

	/* Close the source and destination files */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
