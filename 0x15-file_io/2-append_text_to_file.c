#include "main.h"
/**
 * append_text_to_file -  a function that appends text to a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	/*0600 sets the file permition to rw_______*/
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);/*return -1 if file cannot be opened*/
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);/*return -1 if write fails*/
		}
	}
	close(fd);
	return (1);
}
