#include<stdio.h>

/**
 * _abs - function to return absolute number
 *
 * @n: number to be checked
 * Return: always > 0 success.
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * (-1));
}
}
