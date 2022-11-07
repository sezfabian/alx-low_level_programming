#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("%s\n", "error");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%i\n", a * b);
		return (0);
	}
}
