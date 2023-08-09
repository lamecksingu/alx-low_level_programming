#include "main.h"
/**
 * append_text_to_file - a function that append text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t content_length;
	size_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		perror("fopen");
		return (-1);
	}

	content_length = strlen(text_content);
	bytes_written = fwrite(text_content, 1, content_length, file);

	if (bytes_written != content_length)
	{
		perror("fwrite");
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
