#include "main.h"

/**
 * buffer_generator - generate buffer only 1024 Memory allocated.
 * @filename: is text file to be readed to the POSIX standard output
 *
 * Return: char *
 */
char *buffer_generator(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close the file descriptor.
 * @file_descriptor: The file descriptor to be closed.
 *
 * Return: char *
 */
void close_file(int file_descriptor)
{
	int c;

	c = close(file_descriptor);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file file_descriptor %d\n",
		file_descriptor);
		exit(100);
	}
}
