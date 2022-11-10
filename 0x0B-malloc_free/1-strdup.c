#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - creates a copy of string in new memory
 *
 * @str: pointer to string
 *
 * Return: pointer to arr.
 */

char *_strdup(char *str)
{
	char *arr;
	int l;

	if (str == NULL)
		return (0);

	for (l = 0; str[l] != '\0'; l++)
		;

	l = l + 1;
	arr = malloc((l) * sizeof(char));

	while (l--)
		arr[l] = str[l];

	if (arr == NULL)
		return (NULL);
	return (arr);
}

