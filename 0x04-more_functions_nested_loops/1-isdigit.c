#include<stdio.h>

/**
 * _isdigit - checks for digit integers
 *
 * @c : integer to be checked
 *
 * Return: 1 for digit, 0 otherwise
 */

int _isdigit(int c)
{
int n;
int b = 0;

for (n = 48; n <= 57; ++n)
{
if (c == n)
{
b = 1;
}
}

return (b);
}
