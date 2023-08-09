#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);
	if (ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	fclose(file);

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesWritten);
}
