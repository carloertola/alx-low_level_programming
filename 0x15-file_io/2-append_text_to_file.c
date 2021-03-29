#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file name
 * @text_content: pointer to text content
 * Return: 1 on success or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), count = 0;

	if (!filename || fd == -1)
		return (-1);
	while (text_content && text_content[count])
		count++;
	if (!count)
		return (1);
	if (write(fd, text_content, count) == -1)
		return (-1);
	close(fd);
	return (1);
}
