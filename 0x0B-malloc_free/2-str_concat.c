#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - combines two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to arr.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int l1 = 0, l2 = 0, c, l;

	if (s1 != NULL)
		for (l1 = 0; s1[l1] != '\0'; l1++)
			;

	if (s2 != NULL)
		for (l2 = 0; s2[l2] != '\0'; l2++)
			;

	arr = malloc((l1 + l2 + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (c = 0; c < l1; c++)
		arr[c] = s1[c];

	for (l = 0; l <= l2; c++, l++)
		arr[c] = s2[l];

	return (arr);
}

