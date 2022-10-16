#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz\n";
int num;

for (num = 0; num <= 26 ; num++)
{
putchar(str[num]);
}

return (0);
}
