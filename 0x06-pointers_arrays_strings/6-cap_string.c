#include<stdio.h>
/**
 * cap_string - uppercase each word
 * @s1: pointer to string
 *
 * Return: *s1
 */
char *cap_string(char *s1)
{
	int a, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (a = 0; s1[a] != '\0'; i++)
	{
		if (s1[0] >= 97 && s1[0] <= 122)
			s1[0] -= 32;
		for (j = 0; delimeters[j] != '\0'; j++)
			if (s1[a] == delimeters[j] && s1[a + 1] >= 97 && s1[a + 1] <= 122)
				s1[a + 1] -= 32;
	}
	return (s1);
}
