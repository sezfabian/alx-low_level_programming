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
int store;

for (c = -1; c < n; c++)
{
store = a[c];
a[c] = a[n];
a[n] = store;
n--;
}
}
