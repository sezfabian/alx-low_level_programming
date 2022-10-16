#include<stdio.h>

/**
 *main - Entry point of program
 *
 *Return: Always 0 - successful
 */
int main(void)
{
char str1[] = "abcdefghijklmnopqrstuvwxyz";
char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
int num1;
int num2;

for (num1 = 0; num1 <= 25 ; num1++)
{
putchar(str1[num1]);
}

for (num2 = 0; num2 <= 26 ; num2++)
{
putchar(str2[num2]);
}

return (0);
}
