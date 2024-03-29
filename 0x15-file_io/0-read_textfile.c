#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the
 *                 POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to be read and printed.
 *
 * Return: The actual number of letters that could be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Read the file into the buffer */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);

	/* Write the buffer to the standard output */
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
		return (0);

	/* Free the buffer and close the file descriptor */
	free(buffer);
	close(fd);
	return (n_written);
}
