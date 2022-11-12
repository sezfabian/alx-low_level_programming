#include <stdlib.h>

/*
 * string_nconcat -  concatenates
 *
 * @s1: string one
 * @s2: string twp
 * @n: number of chars to concat
 *
 * Return: pointer to heap.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, c;

	for(c = 0; s1[c] != '\n'; c++)
		;

	str = malloc(c + n + 1);

	if (str == 0)
	{
		return(0);
	}

	for(a = 0; a < c + n; a++)
	{
		if (a < c)
			str[a] = s1[a];
		else
			str[a] = s2[a - c];

	}
	str[a] = '\0';
	return (str);
}

