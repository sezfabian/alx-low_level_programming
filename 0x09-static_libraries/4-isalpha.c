#include<stdio.h>

/**
 * _isalpha - function checks for alphabets
 *
 * @c: character to be checked
 *
 * Return: 1 - alphabet, 0 - not alphabet.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

