#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
int num;
char str[]="0123456789abcdef";

for (num = 0; num <= 15 ; num++)
{
putchar(str[num]);
}

putchar('\n');

return (0);
}
