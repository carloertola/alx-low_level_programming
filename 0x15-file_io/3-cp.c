#include "holberton.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful or 97, 98, 99 or 100 if not
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, b, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((b = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, b);
		if (w != b)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	if (close(fd_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	return (0);
}
