#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0 - succesfull
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
