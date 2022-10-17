#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
char str[] = "\nabcdefghijklmnopqrstuvwxyz";
int num;

for (num = 26; num >= 0 ; num--)
{
putchar(str[num]);
}

return (0);
}
