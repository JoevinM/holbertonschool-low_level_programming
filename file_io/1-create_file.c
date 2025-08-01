#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description:
 * - If the file exists, it is truncated.
 * - If it doesn’t exist, it is created with permissions rw------- (0600).
 * - If text_content is NULL, an empty file is created.
 * - Returns -1 if filename is NULL, or if file cannot be created or written.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, i = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		bytes_written = write(file_descriptor, text_content, i);
		if (bytes_written == -1 || bytes_written != i)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
