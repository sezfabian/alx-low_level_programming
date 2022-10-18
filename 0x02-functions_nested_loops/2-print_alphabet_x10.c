#include<stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in lower case 1o times.
 *
 * Return: Always 0 success.
 */
void print_alphabet_x10(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz\n";
int n;
int n1;

for (n1 = 0; n1 < 10; n1++)
{
for (n = 0; n <= 26; n++)
{
putchar(str[n]);
}
}
}
