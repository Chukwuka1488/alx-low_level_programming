#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t length;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, do not add anything to the file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Append the text_content to the file */
	length = strlen(text_content);
	n_written = write(fd, text_content, length);
	if (n_written == -1 || n_written != (ssize_t)length)
		return (-1);

	close(fd);
	return (1);
}
