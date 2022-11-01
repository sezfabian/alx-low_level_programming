#include<stdio.h>

/**
 * _strchr  function to locate character in string
 *
 * @s: string
 * @c: character
 * Return: p
 */
char *_strchr(char *s, char c)
{
	char *p = 0;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			p = &s[a];
			break;
		}
	}
	return (p);
}
