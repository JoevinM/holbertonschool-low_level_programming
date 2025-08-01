#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print,
 *         or 0 if the file can't be opened, read, or if write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == 0 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
