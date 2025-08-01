#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of an existing file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description:
 * - If the file does not exist or cannot be opened, return -1.
 * - If text_content is NULL, do nothing and return 1.
 * - File is opened in append mode, and only write permission is required.
 * - Does not truncate the file, content is added at the end.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, i = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_APPEND | O_WRONLY, 0600);
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
