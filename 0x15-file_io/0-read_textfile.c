#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file name
 * @letters: size of character buffer
 * Return: letters read and printed or 0 if anything goes wrong
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, b;
	char *buffer;

	if (!filename || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b = read(fd, buffer, letters);
	if (b == -1)
	{
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, b);
	close(fd);
	free(buffer);
	return (b);
}
