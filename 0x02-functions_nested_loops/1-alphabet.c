#include<stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0 success.
 */
void print_alphabet(void)
{
char str[]="abcdefghijklmnopqrstuvwxyz\n";
int n;

for(n = 0; n <= 26; n++)
{
putchar(str[n]);
}
}
