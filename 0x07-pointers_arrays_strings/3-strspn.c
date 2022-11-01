#include<stdio.h>
#include<string.h>

/**
 * _strspn - number of bytes in the initial segment cosisting of bytes from string
 *
 * @s: string to be checked
 * @accept: string with bytes to be checked
 *
 * Return: count1 unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count1 = 0;
	int a, b, c;
	char *st1, *st2;
	st1 = s;
	st2 = accept;

	while (st1[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		a++;
	}

	for (b = 0; b <= a / 2; b++)
	{
		for (c = 0; st2[c] != '\0'; c++)
		{
			if (st1[b] == st2[c])
			{
				count1++;
			}
		}
	}
	return (count1);
}
