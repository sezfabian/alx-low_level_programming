#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - gives change
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: change
 */

int main(int argc, char *argv[])
{
	int a, i, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("%i\n", 0);
		return (0);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(isdigit(argv[1][i])))
		{
			printf("Error\n");
			return (1);
		}
	}

	a = atoi(argv[1]);

	if (a - (int)a != 0 )
	{
		printf("Error\n");
		return (1);
	}

		if (a >= 25)
		{
			change = change + (a / 25);
			a = a - a / 25 * 25;
		}

		if (a >= 10)
		{
			change = change + (a / 10);
			a = a - a / 10 * 10;
		}

		if (a >= 5)
		{
			change = change + (a / 5);
			a = a - a / 5 * 5;
		}

		if (a >= 2)
		{
			change = change + (a / 2);
			a = a - a / 2 * 2;
		}

		if (a == 1)
		{
			change = change + a;
			a = a - a / 1 * 1;
		}

	printf("%i\n", change);
	return (change);
}

