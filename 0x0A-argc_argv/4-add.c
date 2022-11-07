#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds numbers passed
 *
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, i, sum = 0;

	if (argc < 1)
	{
		printf("%i\n", 0);
		return (0);
	}

	else
	{
		for (a = 1; a < argc; a++)
		{
			for (i = 0; argv[a][i] != '\0'; i++)
			{
				if (!(isdigit(argv[a][i])))
				{
					printf("Error\n");
					return (1);
				}
			}

			b = atoi(argv[a]);
			sum = sum + b;
		}
		printf("%i\n", sum);
		return (sum);
	}
}

