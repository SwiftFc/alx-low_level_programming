#include "main.h"
#include <string.h>

/**
 *  create_file - A function that creates a file
 *  @filename: A pointer to the name of the file
 *  @text_content: A pointer to a string to write the file
 *
 *  Return: 1 on success, if function fails -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
		return (-1);
		}
	}

	close(fd);

	return (1);
}
