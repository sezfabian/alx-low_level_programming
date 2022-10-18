#include<stdio.h>

/**
 * _islower - function checks lower case
 *
 * @c - character to be checked
 * Return: 1 - lower case, 0 - not lower case.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
