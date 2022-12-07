#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @text_content : text to write to file
 * @filename: file to be appended
 * Return: 1 if success or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

