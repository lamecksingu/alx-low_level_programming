#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		return (97);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1 || source_fd == STDIN_FILENO)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1 || dest_fd == STDOUT_FILENO)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(source_fd);
		return (99);
	}
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(source_fd);
			close(dest_fd);
			return (99);
		}
	}
	close(source_fd);
	close(dest_fd);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	return (0);
}
