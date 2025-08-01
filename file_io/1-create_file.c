#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, i = 0;

	if (filename == NULL)
		return (-12);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-13);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		bytes_written = write(file_descriptor, text_content, i);
		if (bytes_written == -1 || bytes_written != i)
		{
			close(file_descriptor);
			return (-15);
		}
	}
	close(file_descriptor);
	return (1);
}