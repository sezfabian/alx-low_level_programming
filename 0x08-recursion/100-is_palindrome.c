#include <string.h>
#include <stdio.h>

/**
 * pal - helper function, palindrome
 *
 * @s: pointer to string
 * @a: string position
 * @l: sring length
 *
 * Return: pal indicator.
 */

int pal(char *s, int a, int l)
{
	if (a >= l)
		return (1);

	else if (s[a] == s[l])
		return (pal(s, a + 1, l - 1));

	else
		return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: palindrome indicator integer.
 */

int is_palindrome(char *s)
{
	int a = 0;
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (pal(s, a, l - 1));
}

