#include "main.h"

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fs, ft, rd, cf, ct;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
fs = open(argv[1], O_RDONLY);
	if (fs  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(fs, buff, BUFSIZ)) > 0)
		if (ft == -1 || (write(ft, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cf = close(fs);
	ct = close(ft);
	if (cf == -1 || ct == -1)
	{
		if (cf == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
		else if (ct == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}

