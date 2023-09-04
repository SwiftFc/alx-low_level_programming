#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * it to the "POSIX" standard output
 * @letters: the number of letters it should read and print
 * @filename: A pointer to a string representing the file to read
 * Return: The actual number of letters it could read and print
 * if file fails to open or read, return 0, if "filename" is NULL,
 * return 0, if "write" fails to write expected amount of bytes,
 * return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int fd;
	ssize_t bytes_read, bytes_written = 0;

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free (buffer);
		close (fd);
		return (0);
	}

	free (buffer);
	close (fd);
	return bytes_written;
}
