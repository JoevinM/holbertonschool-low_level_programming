#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count, should be 3 (program name + 2 filenames).
 * @argv: Argument vector, contains the source and destination filenames.
 *
 * Description:
 * - If the number of arguments is not 3, exit with code 97, print usage error.
 * - Opens the source file for reading and the destination file for writing.
 * - If opening files fails, exit with code 98 or 99,print an appropriate error
 * - Reads 1024 bytes at a time and writes to the destination.
 * - If writing fails, exit with code 99.
 * - Closes both file descriptors.
 * - If closing fails, exit with code 100 and print the error.
 *
 * Return: 0 on success,
 *  otherwise the program exits with a specific error code.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
