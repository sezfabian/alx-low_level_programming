#include<stdio.h>

/**
 * _strchr - locates char in string
 *
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: p.
 *
 */
char *_strchr(char *s, char c)
{
	char *p;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			p = &s[a];
			break;
		}
		p = 0;
	}
	return (p);
}

