#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string with bytes to be checked
 *
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *st1, *st2;

	st1 = s;
	st2 = accept;

	for (a = 0; st1[a] != '\0'; a++)
	{
		for (b = 0; st2[b] != '\0'; b++)
		{
			if (st1[a] == st2[b])
				return (&s[a]);
		}
	}
	return (0);
}

