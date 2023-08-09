#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to be created
 * @text_content: a null terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR;/*rw-------*/
	int fd = open(filename, flags, mode);
	size_t content_length;
	size_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);
		if (bytes_written == (size_t)-1)
		{
			perror("Write");
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
