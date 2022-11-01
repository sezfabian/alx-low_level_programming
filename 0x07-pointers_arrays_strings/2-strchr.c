#include<stdio.h>

/**
 * _strchr - locates char in string
 *
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: s.
 *
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
			break;
		}
	}
	return (0);
}

