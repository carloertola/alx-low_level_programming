#include "holberton.h"

/**
 * print_string - prints a string using _putchar
 *
 * @str: pointer to string
 * Return: characters printed
 */
ssize_t print_string(char *str)
{
	ssize_t chars_printed = 0;

	while (str[chars_printed])
	{
		_putchar(str[chars_printed]);
		chars_printed++;
	}
	return (chars_printed);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file name
 * @letters: size of character buffer
 * Return: letters read and printed or 0 if anything goes wrong
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	ssize_t chars_printed = 0;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
		return (0);
	buffer[letters] = '\0';
	if (!filename)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	chars_printed = print_string(buffer);
	close(fd);
	free(buffer);
	return (chars_printed);
}
