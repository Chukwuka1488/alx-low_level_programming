#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t length;

	if (filename == NULL)
		return (-1);

	/* Create the file with rw------- permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, create an empty file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Write the text_content to the file */
	length = strlen(text_content);
	n_written = write(fd, text_content, length);
	if (n_written == -1 || n_written != (ssize_t)length)
		return (-1);

	close(fd);
	return (1);
}
