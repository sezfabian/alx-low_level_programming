#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX std output
 * @letters: number of chars to read and print
 * @filename: file to read
 * Return: number of chars printed elso 0 if fail or -1 for error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char c;
	size_t count = 0;

	fd = open(filename, O_RDONLY);

	if (filename == NULL || fd == -1)
		return (0);
	for (count = 0; count < letters; count++)
	{
		rd = read(fd, &c, 1);
		if (rd == -1)
			return (0);
		if (rd == 0)
			break;

		wr = write(STDOUT_FILENO, &c, 1);
		if (wr == -1)
			return (-1);
		count++;
	}
	close(fd);
	return (count);
}

