#include<stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0 - success
 */

int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	(void) argv;

	return (0);
}
