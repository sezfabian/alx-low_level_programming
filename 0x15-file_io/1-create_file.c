#include "main.h"

/**
 * create_file - creates a textfile.
 * @text_content: text to be added to file
 * @filename: file to create
 * Return: 1 success or -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_APPEND | O_TRUNC | O_RDWR, 00600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (count = 0; *(text_content + count) != '\0'; count++)
	{
		write(fd, (text_content + count), 1);
	}
	close(fd);
	return (1);
}

