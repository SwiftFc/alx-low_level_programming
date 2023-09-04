#include "main.h"

#define MAX_BUFFER_SIZE 1204
#define STDERR_FILE STDERR_FILENO

/**
 * main - copies the content of another file
 * @argc: The number of arguments count
 * @argv: The number of arguments vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, input_status, output_status;
	char buffer[MAX_BUFFER_SIZE];
	mode_t file_mode;

	file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		dprintf(STDERR_FILE, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
		dprintf(STDERR_FILE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (output_fd == -1)
		dprintf(STDERR_FILE, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		input_status = read(input_fd, buffer, MAX_BUFFER_SIZE);
		if (input_status == -1)
		{
			dprintf(STDERR_FILE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (input_status > 0)
		{
			output_status = write(output_fd, buffer, (ssize_t) input_status);
			if (output_status == -1)
			{
				dprintf(STDERR_FILE, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (input_status > 0);
	input_status = close(input_fd);
	if (input_status == -1)
		dprintf(STDERR_FILE, "Error: Can't close fd %d\n", input_fd), exit(100);
	output_status = close(output_fd);
	if (output_status == -1)
		dprintf(STDERR_FILE, "Error: Can't close fd %d\n", output_fd), exit(100);
	return (0);
}
