#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a1, b1, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	b1 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func != NULL)
	{
		result = func(a1, b1);
		printf("%i\n", result);
	}
	else
		printf("%s\n", "Error");
	return (0);
}
