#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: pointer to text content
 * Return: 1 on success or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600), count = 0;

	if (!filename || fd == -1)
		return (-1);
	while (text_content && text_content[count])
		count++;
	if (!count)
		write(fd, "", count);
	else
		write(fd, text_content, count);
	close(fd);
	return (1);
}
