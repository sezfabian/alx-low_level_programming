#include<stdio.h>
/**
 * reverse_array - reverse array elements
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return:  void.
 */
void reverse_array(int *a, int n)
{
int c;
int m = n - 1;
int store;

for (c = 0; c < m; c++)
{
store = a[c];
a[c] = a[m];
a[m] = store;
m--;
}
}
