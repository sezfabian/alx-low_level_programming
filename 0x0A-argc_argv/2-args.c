#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 - Success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
