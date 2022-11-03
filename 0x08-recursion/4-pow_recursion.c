#include<stdio.h>

/**
 * _pow_recursion - gives integer x to power y recursively.
 *
 * @x: input integer
 * @y: power integer
 *
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}

	else if (y < 0)
		return (-1);

	else
		return (1);
}
