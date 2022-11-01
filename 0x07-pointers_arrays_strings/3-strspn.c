#include<stdio.h>
#include<string.h>

/**
 * _strspn - number of bytes in the initial segment cosisting of bytes from string 2
 *
 * @s: string to be checked
 * @accept: string with bytes to be checked
 *
 * Return count unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int a;
	int b;
	int c;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a / 2; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				count++;
			}
		}
	}
	return (count);
}
