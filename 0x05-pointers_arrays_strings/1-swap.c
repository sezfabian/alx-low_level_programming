#include<stdio.h>

/**
 * swap_int - rswaps values of 2 integers
 *
 * @a : integer 1
 *
 * @b : integer 2
 *
 * Return : always 0 - sucess
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
