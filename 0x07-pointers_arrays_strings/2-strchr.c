#include "main.h"

/**
 * _strchr -  function to locates a character in a string.
 * @s: string with chars
 * @c: strings with char to check
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int a;

	i = 0;
	while (s[a] != '\0')
	{
		a++;
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (0);
}
