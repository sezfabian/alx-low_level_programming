#include<stdio.h>

/**
 * _strlen_recursion - gives string length using recursion.
 *
 * @s: pointer to string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
